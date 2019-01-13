#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;

//    w.resize(300, 400);

    w.setWindowTitle("Qt hello world");

    w.show();

    return a.exec();
}
