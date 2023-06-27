#ifndef HABITACIONFORM_H
#define HABITACIONFORM_H

#include <QDialog>

namespace Ui {
class HabitacionForm;
}

class HabitacionForm : public QDialog
{
    Q_OBJECT

public:
    explicit HabitacionForm(QWidget *parent = nullptr);
    ~HabitacionForm();

private:
    Ui::HabitacionForm *ui;
};

#endif // HABITACIONFORM_H
