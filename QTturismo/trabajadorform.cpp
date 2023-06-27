#include "trabajadorform.h"
#include "ui_trabajadorform.h"

TrabajadorForm::TrabajadorForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TrabajadorForm)
{
    ui->setupUi(this);
}

TrabajadorForm::~TrabajadorForm()
{
    delete ui;
}
