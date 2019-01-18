#include <QApplication>
#include "hello_dialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    hello_dialog w;
    w.show();

    return a.exec();
}
