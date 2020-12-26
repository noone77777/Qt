/********************************************************************************
** Form generated from reading UI file 'timedlg.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMEDLG_H
#define UI_TIMEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TimeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *Message;
    QPushButton *BtnOk;

    void setupUi(QWidget *TimeDialog)
    {
        if (TimeDialog->objectName().isEmpty())
            TimeDialog->setObjectName(QString::fromUtf8("TimeDialog"));
        TimeDialog->resize(170, 143);
        verticalLayout = new QVBoxLayout(TimeDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Message = new QLabel(TimeDialog);
        Message->setObjectName(QString::fromUtf8("Message"));
        Message->setEnabled(true);

        verticalLayout->addWidget(Message);

        BtnOk = new QPushButton(TimeDialog);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        verticalLayout->addWidget(BtnOk);


        retranslateUi(TimeDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(TimeDialog);
    } // setupUi

    void retranslateUi(QWidget *TimeDialog)
    {
        TimeDialog->setWindowTitle(QCoreApplication::translate("TimeDialog", "Time", nullptr));
#if QT_CONFIG(tooltip)
        TimeDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Message->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Message->setText(QCoreApplication::translate("TimeDialog", "message", nullptr));
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("TimeDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TimeDialog: public Ui_TimeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMEDLG_H
