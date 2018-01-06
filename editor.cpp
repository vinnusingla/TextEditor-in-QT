#include "editor.h"
#include <QToolBar>
#include <QIcon>
#include <QFile>
#include <QTextStream>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>

textEditor::textEditor(QWidget *parent) : QMainWindow(parent) {
        
  QPixmap newpix("Resources/new.png");
  QPixmap openpix("Resources/open.png");
  QPixmap quitpix("Resources/quit.png");
  QPixmap savepix("Resources/save.png");

  fileName="test.txt";
  // filename="";
  edit = new QTextEdit(this);  

  QToolBar *toolbar = addToolBar("main toolbar");
  toolbar->addAction(QIcon(newpix), "New File");
  toolbar->addAction(QIcon(openpix), "Open File");
  QAction *save = toolbar->addAction(QIcon(savepix), "Save File");
  toolbar->addSeparator();
  toolbar->addSeparator();
  QAction *quit = toolbar->addAction(QIcon(quitpix), "Quit Application");

  connect(quit, SIGNAL(triggered()), qApp, SLOT(quit()));
  connect(save, SIGNAL(triggered()), this, SLOT(saveFile()));
  
  setCentralWidget(edit);

  statusBar()->showMessage("Ready");
}

void textEditor::saveFile(){
	QString x = edit->toPlainText();
	// std::string s = x.toUtf8().constData();
	// std::cout<<s<<std::endl;
	if(fileName.isEmpty()){
		//open a box to take file name as input
		//if file name already exists tell user that prv. file will be overwrited 
		//unless he changes the name
		//save the file with the contents
		// std::cin>>fileName;
	}
	else{
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

}