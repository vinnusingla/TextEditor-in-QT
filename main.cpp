#include "editor.cpp"

int main(int argc, char *argv[]) {

	QApplication app(argc, argv);  

	QDesktopWidget *screen = QApplication::desktop();
	int height = screen->height();
	int width = screen->width();
	textEditor window;
	window.setWindowTitle("Personal Editor");
	// window.setGeometry()
	window.resize(width, height);
	window.show();

	return app.exec();
}
	