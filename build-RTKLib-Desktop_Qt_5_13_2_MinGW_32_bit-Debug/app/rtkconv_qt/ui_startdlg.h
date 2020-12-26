/********************************************************************************
** Form generated from reading UI file 'startdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTDLG_H
#define UI_STARTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel1;
    QGridLayout *gridLayout;
    QLabel *Label1;
    QDateEdit *TimeY1;
    QTimeEdit *TimeH1;
    QPushButton *BtnFileTime;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *StartDialog)
    {
        if (StartDialog->objectName().isEmpty())
            StartDialog->setObjectName(QString::fromUtf8("StartDialog"));
        StartDialog->resize(324, 115);
        verticalLayout = new QVBoxLayout(StartDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Panel1 = new QWidget(StartDialog);
        Panel1->setObjectName(QString::fromUtf8("Panel1"));
        Panel1->setEnabled(true);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(Panel1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Label1 = new QLabel(Panel1);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 0, 0, 1, 3);

        TimeY1 = new QDateEdit(Panel1);
        TimeY1->setObjectName(QString::fromUtf8("TimeY1"));
        TimeY1->setEnabled(true);

        gridLayout->addWidget(TimeY1, 1, 0, 1, 1);

        TimeH1 = new QTimeEdit(Panel1);
        TimeH1->setObjectName(QString::fromUtf8("TimeH1"));
        TimeH1->setEnabled(true);

        gridLayout->addWidget(TimeH1, 1, 1, 1, 1);

        BtnFileTime = new QPushButton(Panel1);
        BtnFileTime->setObjectName(QString::fromUtf8("BtnFileTime"));

        gridLayout->addWidget(BtnFileTime, 1, 2, 1, 1);


        verticalLayout->addWidget(Panel1);

        widget = new QWidget(StartDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
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


        retranslateUi(StartDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(StartDialog);
    } // setupUi

    void retranslateUi(QWidget *StartDialog)
    {
        StartDialog->setWindowTitle(QCoreApplication::translate("StartDialog", "Start Time", nullptr));
#if QT_CONFIG(tooltip)
        StartDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel1->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("StartDialog", "Input Approx. Log Start Time (GPST)", nullptr));
#if QT_CONFIG(tooltip)
        TimeY1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeY1->setDisplayFormat(QCoreApplication::translate("StartDialog", "dd.MM.yyyy", nullptr));
#if QT_CONFIG(tooltip)
        TimeH1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeH1->setDisplayFormat(QCoreApplication::translate("StartDialog", "HH:mm:ss", nullptr));
        BtnFileTime->setText(QCoreApplication::translate("StartDialog", "File Time", nullptr));
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("StartDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("StartDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartDialog: public Ui_StartDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTDLG_H
