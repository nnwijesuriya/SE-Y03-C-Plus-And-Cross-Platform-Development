/********************************************************************************
** Form generated from reading UI file 'tdashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDASHBOARD_H
#define UI_TDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_tdashboard
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *tdashboard)
    {
        if (tdashboard->objectName().isEmpty())
            tdashboard->setObjectName(QString::fromUtf8("tdashboard"));
        tdashboard->resize(400, 300);
        buttonBox = new QDialogButtonBox(tdashboard);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(tdashboard);
        QObject::connect(buttonBox, SIGNAL(accepted()), tdashboard, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), tdashboard, SLOT(reject()));

        QMetaObject::connectSlotsByName(tdashboard);
    } // setupUi

    void retranslateUi(QDialog *tdashboard)
    {
        tdashboard->setWindowTitle(QCoreApplication::translate("tdashboard", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tdashboard: public Ui_tdashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDASHBOARD_H
