#include "habitacionform.h"
#include "ui_habitacionform.h"

HabitacionForm::HabitacionForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HabitacionForm)
{
    ui->setupUi(this);
}

HabitacionForm::~HabitacionForm()
{
    delete ui;
}
