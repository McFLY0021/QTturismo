#ifndef CLIENTEFORM_H
#define CLIENTEFORM_H

#include <QDialog>

namespace Ui {
class ClienteForm;
}

class ClienteForm : public QDialog
{
    Q_OBJECT

public:
    explicit ClienteForm(QWidget *parent = nullptr);
    ~ClienteForm();

private:
    Ui::ClienteForm *ui;
};

#endif // CLIENTEFORM_H
