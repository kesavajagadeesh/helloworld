#include "caluclator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    caluclator w;
    w.resize(400,250);
    w.show();

    return a.exec();
}
