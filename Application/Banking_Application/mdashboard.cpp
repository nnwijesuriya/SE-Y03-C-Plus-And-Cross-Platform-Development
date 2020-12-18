#include "mdashboard.h"
#include "ui_mdashboard.h"

mdashboard::mdashboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mdashboard)
{
    ui->setupUi(this);
}

mdashboard::~mdashboard()
{
    delete ui;
}
