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

    slider = new QSlider(this);

    slider->setOrientation(Qt::Horizontal);
    ui->toolBar->addWidget(slider);

    connect(player,&QMediaPlayer::durationChanged, slider,&QSlider::setMaximum);
    connect(player,&QMediaPlayer::positionChanged, slider,&QSlider::setValue);
    connect(slider,&QSlider::sliderMoved,player,&QMediaPlayer::setPosition);

    slider = new QSlider(this);
    slider->setOrientation(Qt::Vertical);
    ui->toolBar->addWidget(slider);
    slider->setRange(0,100);
    slider->setSliderPosition(100);
    connect(slider,&QSlider::sliderMoved,player,&QMediaPlayer::setVolume);
}

videos::~videos()
{
    delete ui;
}

void videos::on_actionopen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this,"Open A File","","Video File(*.*)");
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
//have to do
}
