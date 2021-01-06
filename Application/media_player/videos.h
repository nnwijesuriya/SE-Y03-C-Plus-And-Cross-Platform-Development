#ifndef VIDEOS_H
#define VIDEOS_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QFileDialog>
#include <QProgressBar>
#include <QSlider>

namespace Ui {
class videos;
}

class videos : public QMainWindow
{
    Q_OBJECT

public:
    explicit videos(QWidget *parent = nullptr);
    ~videos();

private slots:
    void on_actionopen_triggered();

    void on_actionpause_triggered();

    void on_actionplay_triggered();

    void recivedata(QString);

    void on_actionClose_triggered();

    void closeEvent(QCloseEvent *event);

    void on_actionmute_triggered();

    void on_actionIncrease_Playback_triggered();

    void on_actionReduce_Speed_triggered();

    void on_actionNormal_Speed_triggered();

private:
    Ui::videos *ui;
    QMediaPlayer* Mplayer;
    QVideoWidget* Vwidget;
    QProgressBar* Pbar;
    QSlider* slider;
};

#endif // VIDEOS_H
