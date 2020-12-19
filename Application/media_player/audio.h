#ifndef AUDIO_H
#define AUDIO_H

#include <QMainWindow>

namespace Ui {
class audio;
}

class audio : public QMainWindow
{
    Q_OBJECT

public:
    explicit audio(QWidget *parent = nullptr);
    ~audio();

private:
    Ui::audio *ui;
};

#endif // AUDIO_H
