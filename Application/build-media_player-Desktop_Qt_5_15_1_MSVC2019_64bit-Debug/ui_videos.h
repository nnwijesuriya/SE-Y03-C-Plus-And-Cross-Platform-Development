/********************************************************************************
** Form generated from reading UI file 'videos.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOS_H
#define UI_VIDEOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_videos
{
public:
    QAction *actionplay;
    QAction *actionpause;
    QAction *actionopen;
    QAction *actionmute;
    QAction *actionClose;
    QAction *actionIncrease_Playback;
    QAction *actionReduce_Speed;
    QAction *actionNormal_Speed;
    QWidget *centralwidget;
    QSlider *verticalSlider;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuVideo;
    QMenu *menuPlayBAck;
    QToolBar *toolBar;

    void setupUi(QMainWindow *videos)
    {
        if (videos->objectName().isEmpty())
            videos->setObjectName(QString::fromUtf8("videos"));
        videos->resize(1161, 669);
        actionplay = new QAction(videos);
        actionplay->setObjectName(QString::fromUtf8("actionplay"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/images/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionplay->setIcon(icon);
        actionpause = new QAction(videos);
        actionpause->setObjectName(QString::fromUtf8("actionpause"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/images/pause.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionpause->setIcon(icon1);
        actionopen = new QAction(videos);
        actionopen->setObjectName(QString::fromUtf8("actionopen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/images/folder.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionopen->setIcon(icon2);
        actionmute = new QAction(videos);
        actionmute->setObjectName(QString::fromUtf8("actionmute"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/images/mute.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionmute->setIcon(icon3);
        actionClose = new QAction(videos);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/images/close.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon4);
        actionIncrease_Playback = new QAction(videos);
        actionIncrease_Playback->setObjectName(QString::fromUtf8("actionIncrease_Playback"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/images/increase.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionIncrease_Playback->setIcon(icon5);
        actionReduce_Speed = new QAction(videos);
        actionReduce_Speed->setObjectName(QString::fromUtf8("actionReduce_Speed"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/images/reduce.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionReduce_Speed->setIcon(icon6);
        actionNormal_Speed = new QAction(videos);
        actionNormal_Speed->setObjectName(QString::fromUtf8("actionNormal_Speed"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/images/normal.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNormal_Speed->setIcon(icon7);
        centralwidget = new QWidget(videos);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(340, 540, 22, 160));
        verticalSlider->setOrientation(Qt::Vertical);
        videos->setCentralWidget(centralwidget);
        menubar = new QMenuBar(videos);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1161, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuVideo = new QMenu(menubar);
        menuVideo->setObjectName(QString::fromUtf8("menuVideo"));
        menuPlayBAck = new QMenu(menubar);
        menuPlayBAck->setObjectName(QString::fromUtf8("menuPlayBAck"));
        videos->setMenuBar(menubar);
        toolBar = new QToolBar(videos);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        videos->addToolBar(Qt::BottomToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuVideo->menuAction());
        menubar->addAction(menuPlayBAck->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionopen);
        menuFile->addSeparator();
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuVideo->addSeparator();
        menuVideo->addAction(actionplay);
        menuVideo->addSeparator();
        menuVideo->addAction(actionpause);
        menuVideo->addSeparator();
        menuPlayBAck->addSeparator();
        menuPlayBAck->addAction(actionIncrease_Playback);
        menuPlayBAck->addSeparator();
        menuPlayBAck->addAction(actionNormal_Speed);
        menuPlayBAck->addSeparator();
        menuPlayBAck->addAction(actionReduce_Speed);
        toolBar->addSeparator();
        toolBar->addAction(actionopen);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionplay);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionpause);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionmute);
        toolBar->addSeparator();
        toolBar->addSeparator();

        retranslateUi(videos);

        QMetaObject::connectSlotsByName(videos);
    } // setupUi

    void retranslateUi(QMainWindow *videos)
    {
        videos->setWindowTitle(QCoreApplication::translate("videos", "MainWindow", nullptr));
        actionplay->setText(QCoreApplication::translate("videos", "play", nullptr));
        actionpause->setText(QCoreApplication::translate("videos", "pause", nullptr));
        actionopen->setText(QCoreApplication::translate("videos", "open", nullptr));
#if QT_CONFIG(tooltip)
        actionopen->setToolTip(QCoreApplication::translate("videos", "Open A File", nullptr));
#endif // QT_CONFIG(tooltip)
        actionmute->setText(QCoreApplication::translate("videos", "mute", nullptr));
        actionClose->setText(QCoreApplication::translate("videos", "Close", nullptr));
        actionIncrease_Playback->setText(QCoreApplication::translate("videos", "Increase speed", nullptr));
        actionReduce_Speed->setText(QCoreApplication::translate("videos", "Reduce Speed", nullptr));
        actionNormal_Speed->setText(QCoreApplication::translate("videos", "Normal Speed", nullptr));
        menuFile->setTitle(QCoreApplication::translate("videos", "Options", nullptr));
        menuVideo->setTitle(QCoreApplication::translate("videos", "Video", nullptr));
        menuPlayBAck->setTitle(QCoreApplication::translate("videos", "PlayBack", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("videos", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class videos: public Ui_videos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOS_H
