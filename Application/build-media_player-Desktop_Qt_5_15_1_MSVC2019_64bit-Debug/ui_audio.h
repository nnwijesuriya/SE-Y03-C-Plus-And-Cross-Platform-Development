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
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_audio
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *audio)
    {
        if (audio->objectName().isEmpty())
            audio->setObjectName(QString::fromUtf8("audio"));
        audio->resize(800, 600);
        menubar = new QMenuBar(audio);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        audio->setMenuBar(menubar);
        centralwidget = new QWidget(audio);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        audio->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(audio);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        audio->setStatusBar(statusbar);

        retranslateUi(audio);

        QMetaObject::connectSlotsByName(audio);
    } // setupUi

    void retranslateUi(QMainWindow *audio)
    {
        audio->setWindowTitle(QCoreApplication::translate("audio", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class audio: public Ui_audio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIO_H
