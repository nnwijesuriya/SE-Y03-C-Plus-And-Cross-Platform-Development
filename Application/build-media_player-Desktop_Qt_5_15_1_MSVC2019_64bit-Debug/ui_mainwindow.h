/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionGo_To_Home;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QPushButton *audio;
    QLabel *label_4;
    QPushButton *video;
    QMenuBar *menubar;
    QMenu *menuHOMe;
    QMenu *menuAudio;
    QMenu *menuVideo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(938, 587);
        actionGo_To_Home = new QAction(MainWindow);
        actionGo_To_Home->setObjectName(QString::fromUtf8("actionGo_To_Home"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/images/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGo_To_Home->setIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 10, 261, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setTextFormat(Qt::RichText);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 240, 251, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Arial\";"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 110, 191, 101));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/img/images/audio.png")));
        audio = new QPushButton(centralwidget);
        audio->setObjectName(QString::fromUtf8("audio"));
        audio->setGeometry(QRect(210, 110, 241, 101));
        audio->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Arial\";"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(490, 110, 181, 101));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/img/images/video.png")));
        video = new QPushButton(centralwidget);
        video->setObjectName(QString::fromUtf8("video"));
        video->setGeometry(QRect(680, 110, 251, 101));
        video->setStyleSheet(QString::fromUtf8("font: 16pt \"Arial\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 938, 26));
        menuHOMe = new QMenu(menubar);
        menuHOMe->setObjectName(QString::fromUtf8("menuHOMe"));
        menuAudio = new QMenu(menubar);
        menuAudio->setObjectName(QString::fromUtf8("menuAudio"));
        menuVideo = new QMenu(menubar);
        menuVideo->setObjectName(QString::fromUtf8("menuVideo"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuHOMe->menuAction());
        menubar->addAction(menuAudio->menuAction());
        menubar->addAction(menuVideo->menuAction());
        menuHOMe->addAction(actionGo_To_Home);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionGo_To_Home->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Media Player", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Some Entertainment", nullptr));
        label_5->setText(QString());
        audio->setText(QCoreApplication::translate("MainWindow", "Audio", nullptr));
        label_4->setText(QString());
        video->setText(QCoreApplication::translate("MainWindow", "Video", nullptr));
        menuHOMe->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuAudio->setTitle(QCoreApplication::translate("MainWindow", "Audio", nullptr));
        menuVideo->setTitle(QCoreApplication::translate("MainWindow", "Video", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
