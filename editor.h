#pragma once


#include <QMainWindow>
#include <QApplication>
#include <QTextEdit>

class textEditor : public QMainWindow {

	Q_OBJECT  

	public:
		textEditor(QWidget *parent = 0);

	private slots:
		void newFile();
		void saveFile();
		void openFile();
		void shiftRight();
		void shiftLeft();
		void toggleFullScreen();

	private:	
		QTextEdit* edit;
		QString fileName;
};
