#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;

    w.resize  //esize(300, 400);

    w.show();

    return a.exec();
}
