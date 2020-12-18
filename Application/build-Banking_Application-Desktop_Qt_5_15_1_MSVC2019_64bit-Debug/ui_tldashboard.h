/********************************************************************************
** Form generated from reading UI file 'tldashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TLDASHBOARD_H
#define UI_TLDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tldashboard
{
public:
    QTabWidget *tabWidget;
    QWidget *Deposit;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *TDANumber;
    QLabel *label_2;
    QLineEdit *TDHName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *TDAType;
    QLabel *label_4;
    QLineEdit *TDCDate;
    QPushButton *TDCheckAmount;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLineEdit *TDDAmount;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QLineEdit *TDBAmount;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QLineEdit *TDFAmount;
    QLineEdit *TDBDetail;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *TDSubmit;
    QPushButton *TDCancel;
    QWidget *Withdraw;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QLineEdit *TWWAmount;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_13;
    QLineEdit *TWFAmount;
    QPushButton *TWCheckAccount;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *TWSubmit;
    QPushButton *TWCancel;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *TWANumber;
    QLabel *label_6;
    QLineEdit *TWHName;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *TWAType;
    QLabel *label_8;
    QLineEdit *TWBAmount;

    void setupUi(QDialog *tldashboard)
    {
        if (tldashboard->objectName().isEmpty())
            tldashboard->setObjectName(QString::fromUtf8("tldashboard"));
        tldashboard->resize(775, 542);
        tabWidget = new QTabWidget(tldashboard);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 761, 531));
        Deposit = new QWidget();
        Deposit->setObjectName(QString::fromUtf8("Deposit"));
        verticalLayoutWidget = new QWidget(Deposit);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 711, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        TDANumber = new QLineEdit(verticalLayoutWidget);
        TDANumber->setObjectName(QString::fromUtf8("TDANumber"));

        horizontalLayout->addWidget(TDANumber);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        TDHName = new QLineEdit(verticalLayoutWidget);
        TDHName->setObjectName(QString::fromUtf8("TDHName"));

        horizontalLayout->addWidget(TDHName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        TDAType = new QLineEdit(verticalLayoutWidget);
        TDAType->setObjectName(QString::fromUtf8("TDAType"));

        horizontalLayout_2->addWidget(TDAType);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        TDCDate = new QLineEdit(verticalLayoutWidget);
        TDCDate->setObjectName(QString::fromUtf8("TDCDate"));

        horizontalLayout_2->addWidget(TDCDate);


        verticalLayout->addLayout(horizontalLayout_2);

        TDCheckAmount = new QPushButton(Deposit);
        TDCheckAmount->setObjectName(QString::fromUtf8("TDCheckAmount"));
        TDCheckAmount->setGeometry(QRect(220, 180, 321, 41));
        verticalLayoutWidget_3 = new QWidget(Deposit);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(20, 230, 321, 231));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(verticalLayoutWidget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_5->addWidget(label_9);

        TDDAmount = new QLineEdit(verticalLayoutWidget_3);
        TDDAmount->setObjectName(QString::fromUtf8("TDDAmount"));

        horizontalLayout_5->addWidget(TDDAmount);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_10 = new QLabel(verticalLayoutWidget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_6->addWidget(label_10);

        TDBAmount = new QLineEdit(verticalLayoutWidget_3);
        TDBAmount->setObjectName(QString::fromUtf8("TDBAmount"));

        horizontalLayout_6->addWidget(TDBAmount);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_11 = new QLabel(verticalLayoutWidget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_7->addWidget(label_11);

        TDFAmount = new QLineEdit(verticalLayoutWidget_3);
        TDFAmount->setObjectName(QString::fromUtf8("TDFAmount"));

        horizontalLayout_7->addWidget(TDFAmount);


        verticalLayout_3->addLayout(horizontalLayout_7);

        TDBDetail = new QLineEdit(Deposit);
        TDBDetail->setObjectName(QString::fromUtf8("TDBDetail"));
        TDBDetail->setGeometry(QRect(370, 230, 361, 151));
        horizontalLayoutWidget_6 = new QWidget(Deposit);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(530, 410, 201, 51));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        TDSubmit = new QPushButton(horizontalLayoutWidget_6);
        TDSubmit->setObjectName(QString::fromUtf8("TDSubmit"));

        horizontalLayout_8->addWidget(TDSubmit);

        TDCancel = new QPushButton(horizontalLayoutWidget_6);
        TDCancel->setObjectName(QString::fromUtf8("TDCancel"));

        horizontalLayout_8->addWidget(TDCancel);

        tabWidget->addTab(Deposit, QString());
        Withdraw = new QWidget();
        Withdraw->setObjectName(QString::fromUtf8("Withdraw"));
        verticalLayoutWidget_4 = new QWidget(Withdraw);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(20, 260, 321, 231));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_12 = new QLabel(verticalLayoutWidget_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_9->addWidget(label_12);

        TWWAmount = new QLineEdit(verticalLayoutWidget_4);
        TWWAmount->setObjectName(QString::fromUtf8("TWWAmount"));

        horizontalLayout_9->addWidget(TWWAmount);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_13 = new QLabel(verticalLayoutWidget_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_10->addWidget(label_13);

        TWFAmount = new QLineEdit(verticalLayoutWidget_4);
        TWFAmount->setObjectName(QString::fromUtf8("TWFAmount"));

        horizontalLayout_10->addWidget(TWFAmount);


        verticalLayout_4->addLayout(horizontalLayout_10);

        TWCheckAccount = new QPushButton(Withdraw);
        TWCheckAccount->setObjectName(QString::fromUtf8("TWCheckAccount"));
        TWCheckAccount->setGeometry(QRect(220, 200, 311, 41));
        horizontalLayoutWidget_7 = new QWidget(Withdraw);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(520, 420, 211, 61));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        TWSubmit = new QPushButton(horizontalLayoutWidget_7);
        TWSubmit->setObjectName(QString::fromUtf8("TWSubmit"));

        horizontalLayout_11->addWidget(TWSubmit);

        TWCancel = new QPushButton(horizontalLayoutWidget_7);
        TWCancel->setObjectName(QString::fromUtf8("TWCancel"));

        horizontalLayout_11->addWidget(TWCancel);

        verticalLayoutWidget_2 = new QWidget(Withdraw);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 30, 711, 151));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        TWANumber = new QLineEdit(verticalLayoutWidget_2);
        TWANumber->setObjectName(QString::fromUtf8("TWANumber"));

        horizontalLayout_3->addWidget(TWANumber);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        TWHName = new QLineEdit(verticalLayoutWidget_2);
        TWHName->setObjectName(QString::fromUtf8("TWHName"));

        horizontalLayout_3->addWidget(TWHName);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        TWAType = new QLineEdit(verticalLayoutWidget_2);
        TWAType->setObjectName(QString::fromUtf8("TWAType"));

        horizontalLayout_4->addWidget(TWAType);

        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_4->addWidget(label_8);

        TWBAmount = new QLineEdit(verticalLayoutWidget_2);
        TWBAmount->setObjectName(QString::fromUtf8("TWBAmount"));

        horizontalLayout_4->addWidget(TWBAmount);


        verticalLayout_2->addLayout(horizontalLayout_4);

        tabWidget->addTab(Withdraw, QString());

        retranslateUi(tldashboard);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(tldashboard);
    } // setupUi

    void retranslateUi(QDialog *tldashboard)
    {
        tldashboard->setWindowTitle(QCoreApplication::translate("tldashboard", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("tldashboard", "Account Number", nullptr));
        label_2->setText(QCoreApplication::translate("tldashboard", "Holders Name", nullptr));
        label_3->setText(QCoreApplication::translate("tldashboard", "Account Type", nullptr));
        label_4->setText(QCoreApplication::translate("tldashboard", "Created Date", nullptr));
        TDCheckAmount->setText(QCoreApplication::translate("tldashboard", "Check Account", nullptr));
        label_9->setText(QCoreApplication::translate("tldashboard", "Deposit Ammount", nullptr));
        label_10->setText(QCoreApplication::translate("tldashboard", "Bonus Amount", nullptr));
        label_11->setText(QCoreApplication::translate("tldashboard", "Final Amount", nullptr));
        TDBDetail->setText(QCoreApplication::translate("tldashboard", "Bonus Details", nullptr));
        TDSubmit->setText(QCoreApplication::translate("tldashboard", "Submit", nullptr));
        TDCancel->setText(QCoreApplication::translate("tldashboard", "Cancel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Deposit), QCoreApplication::translate("tldashboard", "Deposit", nullptr));
        label_12->setText(QCoreApplication::translate("tldashboard", "Withdraw Amount", nullptr));
        label_13->setText(QCoreApplication::translate("tldashboard", "Final Amount", nullptr));
        TWCheckAccount->setText(QCoreApplication::translate("tldashboard", "Check Account", nullptr));
        TWSubmit->setText(QCoreApplication::translate("tldashboard", "Submit", nullptr));
        TWCancel->setText(QCoreApplication::translate("tldashboard", "Cancel", nullptr));
        label_5->setText(QCoreApplication::translate("tldashboard", "Account Number", nullptr));
        label_6->setText(QCoreApplication::translate("tldashboard", "Holders Name", nullptr));
        label_7->setText(QCoreApplication::translate("tldashboard", "Account Type", nullptr));
        label_8->setText(QCoreApplication::translate("tldashboard", "Balance Amount", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Withdraw), QCoreApplication::translate("tldashboard", "Withdraw", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tldashboard: public Ui_tldashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TLDASHBOARD_H
