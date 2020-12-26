#include "audio.h"
#include "ui_audio.h"

audio::audio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::audio)
{
    ui->setupUi(this);

    player = new QMediaPlayer(this);

    connect(player, &QMediaPlayer::positionChanged, this,&audio::on_positionChanged);
    connect(player, &QMediaPlayer::durationChanged, this, &audio::on_durationChanged);
}

audio::~audio()
{
    delete ui;
}

void audio::on_actionopen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this,"Open A File","","File(*.mp3)");
    on_actionpause_triggered();
    player->setMedia(QUrl::fromLocalFile(filename));

    on_actionplay_triggered();
}

void audio::on_actionplay_triggered()
{
    player->play();
}

void audio::on_actionpause_triggered()
{
    player->pause();
}
void audio::on_actionstop_triggered()
{
    player->stop();
}
void audio::on_actionhome_triggered()
{
  //will have to do
}
void audio::on_progress_sliderMoved(int position)
{
    player->setPosition(position);
}

void audio::on_volume_sliderMoved(int position)
{
    ui->volume->setRange(0,100);
    player->setVolume(position);
}

void audio::on_positionChanged(qint64 position)
{
ui->progress->setValue(position);
}

void audio::on_durationChanged(qint64 position)
{
ui->progress->setMaximum(position);
}

void audio::on_actionmute_triggered()
{
    player->setVolume(0);
}

void audio::on_actionunmute_triggered()
{
     player->setVolume(60);
}
