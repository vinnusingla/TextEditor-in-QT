#include "editor.h"
#include <QDesktopWidget>

int main(int argc, char *argv[]) {
    
  QApplication app(argc, argv);  

  QRect screen = QApplication::desktop()->availableGeometry();
  int height = screen.height();
  int width = screen.width();
  textEditor window;
  window.resize(width, height);
  window.setWindowTitle("Personal Editor");
  window.show();

  return app.exec();
}
