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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
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
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *audio;
    QPushButton *video;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
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
        label->setGeometry(QRect(360, 60, 261, 91));
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
        label_2->setGeometry(QRect(10, 210, 251, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Arial\";"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 140, 911, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        audio = new QPushButton(horizontalLayoutWidget);
        audio->setObjectName(QString::fromUtf8("audio"));
        audio->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Arial\";"));

        horizontalLayout->addWidget(audio);

        video = new QPushButton(horizontalLayoutWidget);
        video->setObjectName(QString::fromUtf8("video"));
        video->setStyleSheet(QString::fromUtf8("font: 16pt \"Arial\";"));

        horizontalLayout->addWidget(video);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 250, 901, 281));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 899, 279));
        scrollArea->setWidget(scrollAreaWidgetContents);
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
        audio->setText(QCoreApplication::translate("MainWindow", "Audio", nullptr));
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
