#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_audio_clicked()
{
    audio = new class audio(this);
    audio->show();
}

void MainWindow::on_video_clicked()
{
    videos = new class videos(this);
    videos->show();
}

void MainWindow::on_actionGo_To_Home_triggered()
{

}
