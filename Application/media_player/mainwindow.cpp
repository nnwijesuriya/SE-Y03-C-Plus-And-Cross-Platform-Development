#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QListWidget"
#include "QMessageBox"
#include "videos.h"
#include "QDir"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //What this does is search the resouse folder and show all the media available to the users in the main window
    QDir dir(":/entertainment /media");
    for (const QFileInfo &file : dir.entryInfoList(QDir::Files))
    {
        QDir dir(file.absoluteFilePath());
        QListWidgetItem *item = new QListWidgetItem(file.fileName());
        item->setData(Qt::UserRole, file.absolutePath());
        item->setIcon(QIcon(":/img/images/video.png"));
        ui->entertain->addItem(dir.dirName());
    }
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_audio_clicked()
{
    //closes the main window and opens the audio window
    close();
    audio = new class audio(this);
    audio->show();
}

void MainWindow::on_video_clicked()
{
    //closes the main window and opens the video window
    close();
    videos = new class videos(this);
    videos->show();
}

void MainWindow::on_entertain_itemClicked(QListWidgetItem *item)
{
    QDir Originalpath(":/entertainment /media");
    QString path = Originalpath.absolutePath() + '/' + item->text();
    QString url = "qrc" + path;
    videos = new class videos(this);
    videos->show();

    connect(this, SIGNAL(senddata(QString)), videos, SLOT(recivedata(QString)));
    emit senddata(url);
}
