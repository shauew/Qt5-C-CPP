#ifndef HELLO_DIALOG_H
#define HELLO_DIALOG_H

#include <QDialog>

namespace Ui {
class hello_dialog;
}

class hello_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit hello_dialog(QWidget * parent = 0);
    ~hello_dialog();

private:
    Ui::hello_dialog *ui;
};

#endif // HELLO_DIALOG_H
