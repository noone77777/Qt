/********************************************************************************
** Form generated from reading UI file 'rcvoptdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RCVOPTDLG_H
#define UI_RCVOPTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RcvOptDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *OptionE;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *RcvOptDialog)
    {
        if (RcvOptDialog->objectName().isEmpty())
            RcvOptDialog->setObjectName(QString::fromUtf8("RcvOptDialog"));
        RcvOptDialog->resize(220, 78);
        verticalLayout = new QVBoxLayout(RcvOptDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        OptionE = new QLineEdit(RcvOptDialog);
        OptionE->setObjectName(QString::fromUtf8("OptionE"));
        OptionE->setEnabled(true);

        verticalLayout->addWidget(OptionE);

        widget = new QWidget(RcvOptDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        BtnOk = new QPushButton(widget);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        horizontalLayout->addWidget(BtnOk);

        BtnCancel = new QPushButton(widget);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);

        horizontalLayout->addWidget(BtnCancel);


        verticalLayout->addWidget(widget);


        retranslateUi(RcvOptDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(RcvOptDialog);
    } // setupUi

    void retranslateUi(QWidget *RcvOptDialog)
    {
        RcvOptDialog->setWindowTitle(QCoreApplication::translate("RcvOptDialog", "Receiver Option", nullptr));
#if QT_CONFIG(tooltip)
        RcvOptDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        OptionE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        OptionE->setText(QString());
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("RcvOptDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("RcvOptDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RcvOptDialog: public Ui_RcvOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RCVOPTDLG_H
