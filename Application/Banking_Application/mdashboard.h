#ifndef MDASHBOARD_H
#define MDASHBOARD_H

#include <QDialog>

namespace Ui {
class mdashboard;
}

class mdashboard : public QDialog
{
    Q_OBJECT

public:
    explicit mdashboard(QWidget *parent = nullptr);
    ~mdashboard();

private:
    Ui::mdashboard *ui;
};

#endif // MDASHBOARD_H
