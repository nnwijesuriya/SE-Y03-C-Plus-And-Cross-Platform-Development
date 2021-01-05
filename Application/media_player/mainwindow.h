#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "audio.h"
#include "videos.h"
#include "QListWidget"

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_audio_clicked();

    void on_video_clicked();

    void on_entertain_itemClicked(QListWidgetItem *item);

signals:
    void senddata(QString);

private:
    Ui::MainWindow *ui;
    audio *audio;
    videos *videos;
};
#endif // MAINWINDOW_H
