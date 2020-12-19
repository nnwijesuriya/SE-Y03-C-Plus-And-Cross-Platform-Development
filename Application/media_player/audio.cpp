#include "audio.h"
#include "ui_audio.h"

audio::audio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::audio)
{
    ui->setupUi(this);
}

audio::~audio()
{
    delete ui;
}
