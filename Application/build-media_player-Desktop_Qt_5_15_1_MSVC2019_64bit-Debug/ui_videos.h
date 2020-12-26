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
    QAction *actionhome;
    QWidget *centralwidget;
    QSlider *verticalSlider;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuVideo;
    QToolBar *toolBar;

    void setupUi(QMainWindow *videos)
    {
        if (videos->objectName().isEmpty())
            videos->setObjectName(QString::fromUtf8("videos"));
        videos->resize(801, 595);
        actionplay = new QAction(videos);
        actionplay->setObjectName(QString::fromUtf8("actionplay"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/images/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionplay->setIcon(icon);
        actionpause = new QAction(videos);
        actionpause->setObjectName(QString::fromUtf8("actionpause"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/images/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionpause->setIcon(icon1);
        actionopen = new QAction(videos);
        actionopen->setObjectName(QString::fromUtf8("actionopen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/images/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionopen->setIcon(icon2);
        actionhome = new QAction(videos);
        actionhome->setObjectName(QString::fromUtf8("actionhome"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/images/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionhome->setIcon(icon3);
        centralwidget = new QWidget(videos);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(340, 540, 22, 160));
        verticalSlider->setOrientation(Qt::Vertical);
        videos->setCentralWidget(centralwidget);
        menubar = new QMenuBar(videos);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 801, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuVideo = new QMenu(menubar);
        menuVideo->setObjectName(QString::fromUtf8("menuVideo"));
        videos->setMenuBar(menubar);
        toolBar = new QToolBar(videos);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        videos->addToolBar(Qt::BottomToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuVideo->menuAction());
        menuFile->addAction(actionhome);
        menuVideo->addAction(actionopen);
        toolBar->addSeparator();
        toolBar->addAction(actionopen);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionplay);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionpause);
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
        actionhome->setText(QCoreApplication::translate("videos", "home", nullptr));
        menuFile->setTitle(QCoreApplication::translate("videos", "File", nullptr));
        menuVideo->setTitle(QCoreApplication::translate("videos", "Video", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("videos", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class videos: public Ui_videos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOS_H
