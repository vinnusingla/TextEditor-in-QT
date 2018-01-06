#pragma once


#include <QMainWindow>
#include <QApplication>
#include <QTextEdit>
#include <bits/stdc++.h>

class textEditor : public QMainWindow {
    
  Q_OBJECT  

  public:
  	textEditor(QWidget *parent = 0);

  private slots:
  	void saveFile();

  private:	
  	QTextEdit* edit;
  	QString fileName;
};
