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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionGo_To_Home;
    QWidget *centralwidget;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *audio;
    QPushButton *video;
    QLabel *label_2;
    QListWidget *entertain;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(752, 442);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(189, 189, 189)"));
        actionGo_To_Home = new QAction(MainWindow);
        actionGo_To_Home->setObjectName(QString::fromUtf8("actionGo_To_Home"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/images/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGo_To_Home->setIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, -10, 261, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(24);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 24pt \"Arial\";"));
        label->setTextFormat(Qt::RichText);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 60, 711, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        audio = new QPushButton(horizontalLayoutWidget);
        audio->setObjectName(QString::fromUtf8("audio"));
        audio->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Arial\";\n"
"background-color: rgb(83, 255, 83)"));

        horizontalLayout->addWidget(audio);

        video = new QPushButton(horizontalLayoutWidget);
        video->setObjectName(QString::fromUtf8("video"));
        video->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Arial\";\n"
"background-color: rgb(83, 255, 83)"));

        horizontalLayout->addWidget(video);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 140, 231, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Arial\";"));
        entertain = new QListWidget(centralwidget);
        entertain->setObjectName(QString::fromUtf8("entertain"));
        entertain->setGeometry(QRect(20, 180, 711, 241));
        entertain->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 208, 208);"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionGo_To_Home->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Media Player", nullptr));
        audio->setText(QCoreApplication::translate("MainWindow", "Audios", nullptr));
        video->setText(QCoreApplication::translate("MainWindow", "Videos", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Some Entertainment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
