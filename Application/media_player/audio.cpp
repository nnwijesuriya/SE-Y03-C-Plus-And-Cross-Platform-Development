#include "audio.h"
#include "ui_audio.h"
#include <QCloseEvent>

audio::audio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::audio)
{
    ui->setupUi(this);
    //restricts the user from maximizing the page
    this->setFixedSize(this->width(),this->height());
    //sets a title for the page
    this->setWindowTitle("Audio player");

    //initializes the QMedia player
    Mplayer = new QMediaPlayer(this);

    //connects the duraion & positions changes to the the funtions
    connect(Mplayer, &QMediaPlayer::positionChanged, this,&audio::on_positionChanged);
    connect(Mplayer, &QMediaPlayer::durationChanged, this, &audio::on_durationChanged);
}

audio::~audio()
{
    delete ui;
}

//allow users to select audio files and play them
void audio::on_actionopen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this,"Open A File","","File(*.mp3)");
    on_actionpause_triggered();
    Mplayer->setMedia(QUrl::fromLocalFile(filename));

    on_actionplay_triggered();
}

//allow users to play the audio file
void audio::on_actionplay_triggered()
{
    Mplayer->play();
}

//allow users to pause the audio file
void audio::on_actionpause_triggered()
{
    Mplayer->pause();
}

//allow users to stop the audio file
void audio::on_actionstop_triggered()
{
    Mplayer->stop();
}

//allow users to skip to a certain point of the audio file
void audio::on_progress_sliderMoved(int position)
{
    Mplayer->setPosition(position);
}

//allow users to contol the volume
void audio::on_volume_sliderMoved(int position)
{
    ui->volume->setRange(0,100);
    Mplayer->setVolume(position);
}

//shows the duration of the audio file
void audio::on_positionChanged(qint64 position)
{
    ui->progress->setValue(position);
}

//sets maximum duration for the audio file
void audio::on_durationChanged(qint64 position)
{
    ui->progress->setMaximum(position);
}

//mutes the player
void audio::on_actionmute_triggered()
{
    Mplayer->setVolume(0);
}

//umutes the player and sets volume to 60%
void audio::on_actionunmute_triggered()
{
     Mplayer->setVolume(60);
}

//when the users clicks close this stops the audio and closes the window
void audio::on_actionclose_triggered()
{
   Mplayer->stop();
   close();
}

//when the user just close the window from top right it stops the audio and closes the window
void audio::closeEvent (QCloseEvent *event)
{
    Mplayer->stop();
    event->accept();
}
