#pragma once
#include "editor.h"
#include <QToolBar>
#include <QIcon>
#include <QFile>
#include <QTextStream>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QFileDialog>
#include <QMessageBox>
#include <bits/stdc++.h>
#include <QDesktopWidget>
#include <QScreen>

//helps to  print in console
void debug (QString x){
	std::string s = x.toUtf8().constData();
	std::cout<<s<<std::endl;
	return;
}
void debug(int x){
	std::cout<<x<<std::endl;
}

//A pop up asking for yes/no response
int yesNoPopUp(QWidget* parent , QString label){
	QMessageBox::StandardButton reply;
	reply = QMessageBox::question(parent, "", label,
		QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel,QMessageBox::Yes);
	if (reply == QMessageBox::Yes) {
		return 1;
	}
	else if(reply == QMessageBox::No){
		return 2;
	}	
	else return 3;
}
