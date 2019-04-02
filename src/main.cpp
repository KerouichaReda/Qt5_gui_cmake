#include<QApplication>

#include"mainwindow.h"
int main(int argc, char *argv[]) {
  /* code */
	QApplication app(argc, argv);
	MainWindow mymainwindow;
	mymainwindow.show();
  return app.exec();
}
