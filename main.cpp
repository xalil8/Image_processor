#include "opencvqt.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    opencvqt w;
    w.show();
    return a.exec();

}
