#include <QDebug>
#include <QString>

int main()
{
    float f = 3.1415926;

    QString str = QString::number(f);

    qDebug() << str;

    return 0;
}
