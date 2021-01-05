#include "videos.h"
#include "ui_videos.h"
#include "QMessageBox"
#include "mainwindow.h"

videos::videos(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::videos)
{
    ui->setupUi(this);
    Mplayer = new QMediaPlayer(this);
    Vwidget = new QVideoWidget(this);
    Mplayer->setVideoOutput(Vwidget);
    this->setCentralWidget(Vwidget);

    slider = new QSlider(this);

    slider->setOrientation(Qt::Horizontal);
    ui->toolBar->addWidget(slider);

    connect(Mplayer,&QMediaPlayer::durationChanged, slider,&QSlider::setMaximum);
    connect(Mplayer,&QMediaPlayer::positionChanged, slider,&QSlider::setValue);
    connect(slider,&QSlider::sliderMoved,Mplayer,&QMediaPlayer::setPosition);

    slider = new QSlider(this);
    slider->setOrientation(Qt::Vertical);
    ui->toolBar->addWidget(slider);
    slider->setRange(0,100);
    slider->setSliderPosition(100);
    connect(slider,&QSlider::sliderMoved,Mplayer,&QMediaPlayer::setVolume);
}

videos::~videos()
{
    delete ui;
}

void videos::on_actionopen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this,"Open A File","../../../","Video File(*.*)");
    on_actionpause_triggered();
    Mplayer->setMedia(QUrl::fromLocalFile(filename));

    on_actionplay_triggered();
}

void videos::on_actionpause_triggered()
{
    Mplayer->pause();
}

void videos::on_actionplay_triggered()
{
    Mplayer->play();
}

void videos::on_actionhome_triggered()
{
    //have to do
}

void videos::recivedata(QString data)
{
    Mplayer->setMedia(QUrl(data));
    on_actionplay_triggered();
}

void videos::on_actionClose_triggered()
{
QCoreApplication::quit();
}
