#include "editor.h"
#include <QToolBar>
#include <QIcon>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QTextEdit>

textEditor::textEditor(QWidget *parent)
    : QMainWindow(parent) {
        
  QPixmap newpix("Resources/new.png");
  QPixmap openpix("Resources/open.png");
  QPixmap quitpix("Resources/quit.png");

  QToolBar *toolbar = addToolBar("main toolbar");
  toolbar->addAction(QIcon(newpix), "New File");
  toolbar->addAction(QIcon(openpix), "Open File");
  toolbar->addSeparator();
  
  QAction *quit2 = toolbar->addAction(QIcon(quitpix), 
      "Quit Application");
  connect(quit2, SIGNAL(triggered()), qApp, SLOT(quit()));

  QTextEdit *edit = new QTextEdit(this);  

  setCentralWidget(edit);

  statusBar()->showMessage("Ready");
}
