#ifndef AUDIO_H
#define AUDIO_H

#include <QMainWindow>
#include <QSlider>
#include <QMediaPlayer>
#include <QFileDialog>
#include <QDebug>

namespace Ui {
class audio;
}

class audio : public QMainWindow
{
    Q_OBJECT

public:
    explicit audio(QWidget *parent = nullptr);
    ~audio();

private slots:
    void on_actionopen_triggered();

    void on_actionhome_triggered();

    void on_actionpause_triggered();

    void on_actionplay_triggered();

    void on_progress_sliderMoved(int position);

    void on_volume_sliderMoved(int position);

    void on_durationChanged(qint64);

    void on_positionChanged(qint64);

private:
    Ui::audio *ui;
    QSlider* slider;
    QMediaPlayer* player;
};

#endif // AUDIO_H
