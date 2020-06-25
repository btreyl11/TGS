#include "basewindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    basewindow w;
    w.showFullScreen();
    return a.exec();
}
