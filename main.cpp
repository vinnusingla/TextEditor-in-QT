#include "editor.h"


int main(int argc, char *argv[]) {
    
  QApplication app(argc, argv);  
    
  textEditor window;

  window.resize(700, 500);
  window.setWindowTitle("Personal Editor");
  window.show();

  return app.exec();
}
