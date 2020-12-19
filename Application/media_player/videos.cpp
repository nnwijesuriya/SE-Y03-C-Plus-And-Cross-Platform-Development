#include "videos.h"
#include "ui_videos.h"

videos::videos(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::videos)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);
    vw = new QVideoWidget(this);
    player->setVideoOutput(vw);
    this->setCentralWidget(vw);
}

videos::~videos()
{
    delete ui;
}

void videos::on_actionopen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this,"Open A File","","Video File(*.avi, *.mpg, *.mp4, *.mkv)");
    on_actionpause_triggered();
    player->setMedia(QUrl::fromLocalFile(filename));

    on_actionplay_triggered();
}

void videos::on_actionpause_triggered()
{
    player->pause();
}

void videos::on_actionplay_triggered()
{
    player->play();
}

void videos::on_actionhome_triggered()
{

}
