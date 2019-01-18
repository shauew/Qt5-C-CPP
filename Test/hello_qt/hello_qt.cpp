#include "hello_qt.h"
#include "ui_hello_qt.h"

hello_qt::hello_qt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hello_qt)
{
    ui->setupUi(this);
}

hello_qt::~hello_qt()
{
    delete ui;
}
