/********************************************************************************
** Form generated from reading UI file 'audio.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIO_H
#define UI_AUDIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_audio
{
public:
    QAction *actionplay;
    QAction *actionpause;
    QAction *actionopen;
    QAction *actionstop;
    QAction *actionmute;
    QAction *actionunmute;
    QAction *actionclose;
    QWidget *centralwidget;
    QSlider *progress;
    QSlider *volume;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QToolBar *toolBar;

    void setupUi(QMainWindow *audio)
    {
        if (audio->objectName().isEmpty())
            audio->setObjectName(QString::fromUtf8("audio"));
        audio->resize(593, 169);
        actionplay = new QAction(audio);
        actionplay->setObjectName(QString::fromUtf8("actionplay"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/images/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionplay->setIcon(icon);
        actionpause = new QAction(audio);
        actionpause->setObjectName(QString::fromUtf8("actionpause"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/images/pause.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionpause->setIcon(icon1);
        actionopen = new QAction(audio);
        actionopen->setObjectName(QString::fromUtf8("actionopen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/images/folder.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionopen->setIcon(icon2);
        actionstop = new QAction(audio);
        actionstop->setObjectName(QString::fromUtf8("actionstop"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/images/stop.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionstop->setIcon(icon3);
        actionmute = new QAction(audio);
        actionmute->setObjectName(QString::fromUtf8("actionmute"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/images/mute.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionmute->setIcon(icon4);
        actionunmute = new QAction(audio);
        actionunmute->setObjectName(QString::fromUtf8("actionunmute"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/images/sound.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionunmute->setIcon(icon5);
        actionclose = new QAction(audio);
        actionclose->setObjectName(QString::fromUtf8("actionclose"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/images/close.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionclose->setIcon(icon6);
        centralwidget = new QWidget(audio);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        progress = new QSlider(centralwidget);
        progress->setObjectName(QString::fromUtf8("progress"));
        progress->setGeometry(QRect(110, 20, 471, 21));
        progress->setOrientation(Qt::Horizontal);
        volume = new QSlider(centralwidget);
        volume->setObjectName(QString::fromUtf8("volume"));
        volume->setGeometry(QRect(110, 60, 471, 21));
        volume->setOrientation(Qt::Horizontal);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 91, 31));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 91, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";"));
        audio->setCentralWidget(centralwidget);
        menubar = new QMenuBar(audio);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 593, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        audio->setMenuBar(menubar);
        toolBar = new QToolBar(audio);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        audio->addToolBar(Qt::BottomToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionopen);
        menuFile->addSeparator();
        menuFile->addAction(actionclose);
        toolBar->addAction(actionopen);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionplay);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionpause);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionstop);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionmute);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionunmute);

        retranslateUi(audio);

        QMetaObject::connectSlotsByName(audio);
    } // setupUi

    void retranslateUi(QMainWindow *audio)
    {
        audio->setWindowTitle(QCoreApplication::translate("audio", "MainWindow", nullptr));
        actionplay->setText(QCoreApplication::translate("audio", "play", nullptr));
        actionpause->setText(QCoreApplication::translate("audio", "pause", nullptr));
        actionopen->setText(QCoreApplication::translate("audio", "open", nullptr));
#if QT_CONFIG(tooltip)
        actionopen->setToolTip(QCoreApplication::translate("audio", "Open A File", nullptr));
#endif // QT_CONFIG(tooltip)
        actionstop->setText(QCoreApplication::translate("audio", "stop", nullptr));
        actionmute->setText(QCoreApplication::translate("audio", "mute", nullptr));
        actionunmute->setText(QCoreApplication::translate("audio", "unmute", nullptr));
        actionclose->setText(QCoreApplication::translate("audio", "Close", nullptr));
        label->setText(QCoreApplication::translate("audio", "Duration", nullptr));
        label_2->setText(QCoreApplication::translate("audio", "Volume", nullptr));
        menuFile->setTitle(QCoreApplication::translate("audio", "Options", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("audio", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class audio: public Ui_audio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIO_H
