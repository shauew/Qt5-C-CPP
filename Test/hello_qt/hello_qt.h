#ifndef HELLO_QT_H
#define HELLO_QT_H

#include <QDialog>

namespace Ui {
class hello_qt;
}

class hello_qt : public QDialog
{
    Q_OBJECT

public:
    explicit hello_qt(QWidget *parent = nullptr);
    ~hello_qt();

private:
    Ui::hello_qt *ui;
};

#endif // HELLO_QT_H
