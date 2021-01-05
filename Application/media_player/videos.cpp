#include "videos.h"
#include "ui_videos.h"
#include "QMessageBox"
#include "mainwindow.h"
#include <QCloseEvent>

videos::videos(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::videos)
{
    ui->setupUi(this);
    //sets a title for the page
    this->setWindowTitle("Video player");

     //initializes the QMedia player and center the video aoutput
    Mplayer = new QMediaPlayer(this);
    Vwidget = new QVideoWidget(this);
    Mplayer->setVideoOutput(Vwidget);
    this->setCentralWidget(Vwidget);

    //creates a slider for duration and adds it to the toolbar
    slider = new QSlider(this);
    slider->setOrientation(Qt::Horizontal);
    ui->toolBar->addWidget(slider);

    //connects the duraion & positions changes to the the specific funtions
    connect(Mplayer,&QMediaPlayer::durationChanged, slider,&QSlider::setMaximum);
    connect(Mplayer,&QMediaPlayer::positionChanged, slider,&QSlider::setValue);
    connect(slider,&QSlider::sliderMoved,Mplayer,&QMediaPlayer::setPosition);

    //creates a slider for vloume and adds it to the toolbar
    slider = new QSlider(this);
    slider->setOrientation(Qt::Vertical);
    ui->toolBar->addWidget(slider);

    //sets the range and position of the volume slider
    slider->setRange(0,100);
    slider->setSliderPosition(100);

    //connects the volume slider to the volume funtion to allow control of the volume
    connect(slider,&QSlider::sliderMoved,Mplayer,&QMediaPlayer::setVolume);
}

videos::~videos()
{
    delete ui;
}

// allow users to select vidoes and play them
void videos::on_actionopen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this,"Open A File","../../../","Video File(*.*)");
    on_actionpause_triggered();
    Mplayer->setMedia(QUrl::fromLocalFile(filename));

    on_actionplay_triggered();
}

// allow users to pause the videos
void videos::on_actionpause_triggered()
{
    Mplayer->pause();
}

//allow users to play videos
void videos::on_actionplay_triggered()
{
    Mplayer->play();
}

//when a video is selected from mainwindow it gets the path and shows the video
void videos::recivedata(QString data)
{
    Mplayer->setMedia(QUrl(data));
    on_actionplay_triggered();
}

//when the users clicks close this stops the video and closes the window
void videos::on_actionClose_triggered()
{
    Mplayer->stop();
    close();
}

//when the user just close the window from top right it stops the video and closes the window
void videos::closeEvent (QCloseEvent *event)
{
    Mplayer->stop();
    event->accept();
}
