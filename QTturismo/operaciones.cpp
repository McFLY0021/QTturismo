#include "operaciones.h"
#include "ui_operaciones.h"

Operaciones::Operaciones(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Operaciones)
{
    ui->setupUi(this);
}

Operaciones::~Operaciones()
{
    delete ui;
}
