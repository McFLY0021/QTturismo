#ifndef TRABAJADORFORM_H
#define TRABAJADORFORM_H

#include <QDialog>

namespace Ui {
class TrabajadorForm;
}

class TrabajadorForm : public QDialog
{
    Q_OBJECT

public:
    explicit TrabajadorForm(QWidget *parent = nullptr);
    ~TrabajadorForm();

private:
    Ui::TrabajadorForm *ui;
};

#endif // TRABAJADORFORM_H
