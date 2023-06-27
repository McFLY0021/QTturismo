#include "clienteform.h"
#include "ui_clienteform.h"

ClienteForm::ClienteForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClienteForm)
{
    ui->setupUi(this);
}

ClienteForm::~ClienteForm()
{
    delete ui;
}
