#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <QDialog>

namespace Ui {
class Operaciones;
}

class Operaciones : public QDialog
{
    Q_OBJECT

public:
    explicit Operaciones(QWidget *parent = nullptr);
    ~Operaciones();

private:
    Ui::Operaciones *ui;
};

#endif // OPERACIONES_H
