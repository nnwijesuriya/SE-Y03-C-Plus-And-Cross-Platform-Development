#ifndef TDASHBOARD_H
#define TDASHBOARD_H

#include <QDialog>

namespace Ui {
class tdashboard;
}

class tdashboard : public QDialog
{
    Q_OBJECT

public:
    explicit tdashboard(QWidget *parent = nullptr);
    ~tdashboard();

private:
    Ui::tdashboard *ui;
};

#endif // TDASHBOARD_H
