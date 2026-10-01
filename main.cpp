#include "gsweather.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Gsweather w;
    w.show();
    return QApplication::exec();
}
