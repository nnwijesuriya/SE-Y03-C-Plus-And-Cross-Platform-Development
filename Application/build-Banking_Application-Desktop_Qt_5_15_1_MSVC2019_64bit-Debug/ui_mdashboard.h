/********************************************************************************
** Form generated from reading UI file 'mdashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MDASHBOARD_H
#define UI_MDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mdashboard
{
public:
    QPushButton *MSTellar;
    QPushButton *MSManager;
    QPushButton *MAUsers;
    QPushButton *MEAccounts;
    QScrollArea *MINFO;
    QWidget *scrollAreaWidgetContents;
    QPushButton *MCDeposits;
    QPushButton *MCWithdraws;
    QScrollArea *MTransaction;
    QWidget *scrollAreaWidgetContents_2;

    void setupUi(QDialog *mdashboard)
    {
        if (mdashboard->objectName().isEmpty())
            mdashboard->setObjectName(QString::fromUtf8("mdashboard"));
        mdashboard->resize(729, 518);
        MSTellar = new QPushButton(mdashboard);
        MSTellar->setObjectName(QString::fromUtf8("MSTellar"));
        MSTellar->setGeometry(QRect(10, 20, 151, 41));
        MSManager = new QPushButton(mdashboard);
        MSManager->setObjectName(QString::fromUtf8("MSManager"));
        MSManager->setGeometry(QRect(190, 20, 151, 41));
        MAUsers = new QPushButton(mdashboard);
        MAUsers->setObjectName(QString::fromUtf8("MAUsers"));
        MAUsers->setGeometry(QRect(370, 20, 151, 41));
        MEAccounts = new QPushButton(mdashboard);
        MEAccounts->setObjectName(QString::fromUtf8("MEAccounts"));
        MEAccounts->setGeometry(QRect(550, 20, 151, 41));
        MINFO = new QScrollArea(mdashboard);
        MINFO->setObjectName(QString::fromUtf8("MINFO"));
        MINFO->setGeometry(QRect(10, 70, 691, 191));
        MINFO->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 689, 189));
        MINFO->setWidget(scrollAreaWidgetContents);
        MCDeposits = new QPushButton(mdashboard);
        MCDeposits->setObjectName(QString::fromUtf8("MCDeposits"));
        MCDeposits->setGeometry(QRect(160, 270, 151, 41));
        MCWithdraws = new QPushButton(mdashboard);
        MCWithdraws->setObjectName(QString::fromUtf8("MCWithdraws"));
        MCWithdraws->setGeometry(QRect(360, 270, 151, 41));
        MTransaction = new QScrollArea(mdashboard);
        MTransaction->setObjectName(QString::fromUtf8("MTransaction"));
        MTransaction->setGeometry(QRect(10, 320, 691, 191));
        MTransaction->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 689, 189));
        MTransaction->setWidget(scrollAreaWidgetContents_2);

        retranslateUi(mdashboard);

        QMetaObject::connectSlotsByName(mdashboard);
    } // setupUi

    void retranslateUi(QDialog *mdashboard)
    {
        mdashboard->setWindowTitle(QCoreApplication::translate("mdashboard", "Dialog", nullptr));
        MSTellar->setText(QCoreApplication::translate("mdashboard", "Show Tellers", nullptr));
        MSManager->setText(QCoreApplication::translate("mdashboard", "Show Managers", nullptr));
        MAUsers->setText(QCoreApplication::translate("mdashboard", "Add Users", nullptr));
        MEAccounts->setText(QCoreApplication::translate("mdashboard", "Edit Accounts", nullptr));
        MCDeposits->setText(QCoreApplication::translate("mdashboard", "Cstomer Deposits", nullptr));
        MCWithdraws->setText(QCoreApplication::translate("mdashboard", "Customer Withdraws", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mdashboard: public Ui_mdashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MDASHBOARD_H
