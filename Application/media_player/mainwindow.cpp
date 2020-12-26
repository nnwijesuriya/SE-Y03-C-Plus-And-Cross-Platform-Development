#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QListWidget"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDir dir(":/entertainment /media");
    for (const QFileInfo &file : dir.entryInfoList(QDir::Files))
    {
        QListWidgetItem *item = new QListWidgetItem(file.fileName());
        item->setData(Qt::UserRole, file.absolutePath());
        item->setIcon(QIcon(":/img/images/video.png"));
        ui->entertain->addItem(item);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_audio_clicked()
{
    close();
    audio = new class audio(this);
    audio->show();
}

void MainWindow::on_video_clicked()
{
    close();
    videos = new class videos(this);
    videos->show();
}

void MainWindow::on_entertain_itemClicked(QListWidgetItem *item)
{

}
