#include "hotelform.h"
#include "ui_hotelform.h"

HotelForm::HotelForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HotelForm)
{
    ui->setupUi(this);
}

HotelForm::~HotelForm()
{
    delete ui;
}
