#include "audio.h"
#include "ui_audio.h"

audio::audio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::audio)
{
    ui->setupUi(this);

    Mplayer = new QMediaPlayer(this);

    connect(Mplayer, &QMediaPlayer::positionChanged, this,&audio::on_positionChanged);
    connect(Mplayer, &QMediaPlayer::durationChanged, this, &audio::on_durationChanged);
}

audio::~audio()
{
    delete ui;
}

void audio::on_actionopen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this,"Open A File","","File(*.mp3)");
    on_actionpause_triggered();
    Mplayer->setMedia(QUrl::fromLocalFile(filename));

    on_actionplay_triggered();
}

void audio::on_actionplay_triggered()
{
    Mplayer->play();
}

void audio::on_actionpause_triggered()
{
    Mplayer->pause();
}
void audio::on_actionstop_triggered()
{
    Mplayer->stop();
}
void audio::on_actionhome_triggered()
{
  //will have to do
}
void audio::on_progress_sliderMoved(int position)
{
    Mplayer->setPosition(position);
}

void audio::on_volume_sliderMoved(int position)
{
    ui->volume->setRange(0,100);
    Mplayer->setVolume(position);
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
    Mplayer->setVolume(0);
}

void audio::on_actionunmute_triggered()
{
     Mplayer->setVolume(60);
}
