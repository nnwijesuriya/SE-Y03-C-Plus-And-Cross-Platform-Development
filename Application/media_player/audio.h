#ifndef AUDIO_H
#define AUDIO_H

#include <QMainWindow>
#include <QSlider>
#include <QMediaPlayer>
#include <QFileDialog>

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

    void on_actionplay_triggered();

    void on_actionpause_triggered();

    void on_progress_sliderMoved(int position);

    void on_volume_sliderMoved(int position);

    void on_durationChanged(qint64);

    void on_positionChanged(qint64);

    void on_actionstop_triggered();

    void on_actionmute_triggered();

    void on_actionunmute_triggered();

    void on_actionclose_triggered();

    void closeEvent(QCloseEvent *event);

private:
    Ui::audio *ui;
    QSlider* slider;
    QMediaPlayer* Mplayer;
};

#endif // AUDIO_H
