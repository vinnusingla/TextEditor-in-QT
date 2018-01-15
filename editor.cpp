#pragma once
#include "Library/library.cpp"

textEditor::textEditor(QWidget *parent) : QMainWindow(parent) {
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	QPixmap newpix("Resources/new.png");
	QPixmap openpix("Resources/open.png");
	QPixmap quitpix("Resources/quit.png");
	QPixmap savepix("Resources/save.png");
	QPixmap rightpix("Resources/right.png");
	QPixmap fullpix("Resources/full.png");
	QPixmap leftpix("Resources/left.png");
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	fileName="";
	edit = new QTextEdit(this);  
	QToolBar *toolbar = addToolBar("main toolbar");
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	QAction *neww = toolbar->addAction(QIcon(newpix),
					"New File");
	QAction *open = toolbar->addAction(QIcon(openpix), 
					"Open File");
	QAction *save = toolbar->addAction(QIcon(savepix),
					"Save File");
	toolbar->addSeparator();
	toolbar->addSeparator();
	QAction *left = toolbar->addAction(QIcon(leftpix),
					"Shift Screen to Left");
	toolbar->addSeparator();
	QAction *full = toolbar->addAction(QIcon(fullpix),
					"Full Screen");
	toolbar->addSeparator();
	QAction *right = toolbar->addAction(QIcon(rightpix),
					"Shift Screen to Right");
	toolbar->addSeparator();
	toolbar->addSeparator();
	QAction *quit = toolbar->addAction(QIcon(quitpix), 
					"Quit Application");
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	connect(quit, SIGNAL(triggered()), qApp, SLOT(quit()));
	connect(save, SIGNAL(triggered()), this, SLOT(saveFile()));
	connect(open, SIGNAL(triggered()), this, SLOT(openFile()));
	connect(right, SIGNAL(triggered()), this, SLOT(shiftRight()));
	connect(left, SIGNAL(triggered()), this, SLOT(shiftLeft()));
	connect(full, SIGNAL(triggered()), this, SLOT(toggleFullScreen()));
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	quit->setShortcut(tr("CTRL+Q"));
	save->setShortcut(tr("CTRL+S"));
	open->setShortcut(tr("CTRL+O"));
	////////////////////////////////////////////////////////////////////////////////////////////////////////

	setCentralWidget(edit);
	statusBar()->showMessage("Ready");
}

void textEditor::saveFile(){
	QString x = edit->toPlainText();
	// debug(x);	
	if(fileName.isEmpty()){
		if(x.isEmpty())return;
		fileName = QFileDialog::getSaveFileName(this,
			        tr("Save File"), "" ,
			        tr("All Files (*)"));
		if(fileName.isNull())return;
	}
	QFile file(fileName);
	if (file.open(QIODevice::WriteOnly)){
		QTextStream out(&file);
		out<<x;
	}
	else{
		qWarning("Could not open file");
	}
	file.close();
}	

void textEditor::openFile(){
	QString x = edit->toPlainText();
	bool needToSave = false;
	if(fileName.isEmpty() and !x.isEmpty())
		needToSave = true;
	else if(!fileName.isEmpty()) {
		QFile file(fileName);
		if (file.open(QIODevice::ReadOnly)){
			QTextStream in(&file);
			QString y = in.readAll();
			// debug(x);
			// debug(y);
			if(x!=y)
				needToSave = true;		
		}
		else{
			qWarning("Could not open file");
			file.close();
			return;	
		}
	}
	if(needToSave){
		//pop a window asking if they want to save
		if(yesNoPopUp(this,"Do You Want to Save Current File?"))
			this->saveFile();	
	}
	fileName = QFileDialog::getOpenFileName(this,
	        tr("Open File"), "" ,
	        tr("All Files (*)"));
	if(fileName.isNull())return;
	QFile file(fileName);
	if (file.open(QIODevice::ReadOnly)){
		QTextStream in(&file);
		edit->setPlainText(in.readAll());
	}
	else{
		qWarning("Could not open file");
	}
	file.close();
}

void textEditor::shiftRight(){
	QDesktopWidget *screen = QApplication::desktop();
	int height = screen->height();
	int width = screen->width()/2;	
  	this->setGeometry(width,0,width,height);
	// debug(this->y());
	// debug(this->x());
}

void textEditor::shiftLeft(){
	QDesktopWidget *screen = QApplication::desktop();
	int height = screen->height();
	int width = screen->width()/2;
	this->setGeometry(0,0,width,height);
	// debug(this->x());
	// debug(this->y());
}

void textEditor::toggleFullScreen(){
	this->setWindowState(this->windowState() ^ Qt::WindowFullScreen);
}