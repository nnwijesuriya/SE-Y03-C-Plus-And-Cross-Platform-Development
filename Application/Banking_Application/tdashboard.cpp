#include "tdashboard.h"
#include "ui_tdashboard.h"

tdashboard::tdashboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tdashboard)
{
    ui->setupUi(this);
}

tdashboard::~tdashboard()
{
    delete ui;
}
