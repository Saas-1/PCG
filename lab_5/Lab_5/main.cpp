#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Напреенко (1 Вариант)");
    w.resize(900,900);
    w.show();
    return a.exec();
}
