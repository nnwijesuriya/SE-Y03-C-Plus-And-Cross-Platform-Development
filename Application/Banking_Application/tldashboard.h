#ifndef TLDASHBOARD_H
#define TLDASHBOARD_H

#include <QDialog>

namespace Ui {
class tldashboard;
}

class tldashboard : public QDialog
{
    Q_OBJECT

public:
    explicit tldashboard(QWidget *parent = nullptr);
    ~tldashboard();

private slots:
    void on_TDCheckAmount_clicked();

private:
    Ui::tldashboard *ui;
};

#endif // TLDASHBOARD_H
