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

    void on_actionhome_triggered();

private:
    Ui::videos *ui;
    QMediaPlayer* player;
    QVideoWidget* vw;
    QProgressBar* bar;
    QSlider* slider;
};

#endif // VIDEOS_H
