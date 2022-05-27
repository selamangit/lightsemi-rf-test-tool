#include <QApplication>
#include "lightningsemi.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ui_MainWindow ui;
    QMainWindow MainWindow;
    ui.setupUi(&MainWindow);
    MainWindow.show();
    return QApplication::exec();
}
