#ifndef HOTELFORM_H
#define HOTELFORM_H

#include <QDialog>

namespace Ui {
class HotelForm;
}

class HotelForm : public QDialog
{
    Q_OBJECT

public:
    explicit HotelForm(QWidget *parent = nullptr);
    ~HotelForm();

private:
    Ui::HotelForm *ui;
};

#endif // HOTELFORM_H
