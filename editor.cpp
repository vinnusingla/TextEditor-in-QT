#include "Library/library.cpp"

textEditor::textEditor(QWidget *parent) : QMainWindow(parent) {
        
  QPixmap newpix("Resources/new.png");
  QPixmap openpix("Resources/open.png");
  QPixmap quitpix("Resources/quit.png");
  QPixmap savepix("Resources/save.png");

  // fileName="test.txt";
  fileName="";
  edit = new QTextEdit(this);  

  QToolBar *toolbar = addToolBar("main toolbar");
  QAction *neww = toolbar->addAction(QIcon(newpix),
  				"New File");
  QAction *open = toolbar->addAction(QIcon(openpix), 
  				"Open File");
  QAction *save = toolbar->addAction(QIcon(savepix),
  				"Save File");
  toolbar->addSeparator();
  toolbar->addSeparator();
  QAction *quit = toolbar->addAction(QIcon(quitpix), 
  				"Quit Application");

  connect(quit, SIGNAL(triggered()), qApp, SLOT(quit()));
  connect(save, SIGNAL(triggered()), this, SLOT(saveFile()));
  connect(open, SIGNAL(triggered()), this, SLOT(openFile()));
  
  setCentralWidget(edit);

  statusBar()->showMessage("Ready");
}

void textEditor::saveFile(){
	QString x = edit->toPlainText();
	// debug(x);	
	if(fileName.isEmpty()){
		fileName = QFileDialog::getSaveFileName(this,
			        tr("Save File"), "" ,
			        tr("All Files (*)"));
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
