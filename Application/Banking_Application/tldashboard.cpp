#include "tldashboard.h"
#include "ui_tldashboard.h"

tldashboard::tldashboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tldashboard)
{
    ui->setupUi(this);
}

tldashboard::~tldashboard()
{
    delete ui;
}

void tldashboard::on_TDCheckAmount_clicked()
{

}
