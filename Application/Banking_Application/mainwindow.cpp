#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/images/bank.png");
    int w = ui->pic->width();
    int h = ui->pic->height();
    ui->pic->setPixmap(pix.scaled(w,h));
    ui->userType->addItem("");
    ui->userType->addItem("Teller");
    ui->userType->addItem("Manager");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Login_clicked()
{

}

void MainWindow::on_Clear_clicked()
{
    ui->password->clear();
    ui->username->clear();
    ui->userType->clear();
}
