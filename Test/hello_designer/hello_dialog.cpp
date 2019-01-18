#include "hello_dialog.h"
#include "ui_hellodialog.h"
hello_dialog::hello_dialog(QWidget * parent) :
    QDialog(parent),
    ui(new Ui::hello_dialog)
{
    ui->setupUi(this);
}
hello_dialog::~hello_dialog()
{
    delete ui;
}
