/********************************************************************************
** Form generated from reading UI file 'getoptdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETOPTDLG_H
#define UI_GETOPTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DownOptDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel1;
    QGridLayout *gridLayout;
    QComboBox *TraceLevel;
    QLabel *Label3;
    QLineEdit *NCol;
    QLabel *Label6;
    QLabel *Label5;
    QLineEdit *Proxy;
    QLineEdit *UrlFile;
    QLabel *Label4;
    QCheckBox *LogAppend;
    QPushButton *BtnUrlFile;
    QCheckBox *HoldErr;
    QCheckBox *HoldList;
    QLineEdit *LogFile;
    QLabel *Label1;
    QComboBox *DateFormat;
    QLabel *Label2;
    QPushButton *BtnLogFile;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *DownOptDialog)
    {
        if (DownOptDialog->objectName().isEmpty())
            DownOptDialog->setObjectName(QString::fromUtf8("DownOptDialog"));
        DownOptDialog->resize(427, 389);
        verticalLayout = new QVBoxLayout(DownOptDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Panel1 = new QWidget(DownOptDialog);
        Panel1->setObjectName(QString::fromUtf8("Panel1"));
        Panel1->setEnabled(true);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(Panel1);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        TraceLevel = new QComboBox(Panel1);
        TraceLevel->addItem(QString());
        TraceLevel->addItem(QString());
        TraceLevel->addItem(QString());
        TraceLevel->addItem(QString());
        TraceLevel->addItem(QString());
        TraceLevel->addItem(QString());
        TraceLevel->setObjectName(QString::fromUtf8("TraceLevel"));
        TraceLevel->setEnabled(true);

        gridLayout->addWidget(TraceLevel, 4, 1, 1, 1);

        Label3 = new QLabel(Panel1);
        Label3->setObjectName(QString::fromUtf8("Label3"));
        Label3->setEnabled(true);

        gridLayout->addWidget(Label3, 5, 0, 1, 1);

        NCol = new QLineEdit(Panel1);
        NCol->setObjectName(QString::fromUtf8("NCol"));
        NCol->setEnabled(true);

        gridLayout->addWidget(NCol, 2, 1, 1, 1);

        Label6 = new QLabel(Panel1);
        Label6->setObjectName(QString::fromUtf8("Label6"));
        Label6->setEnabled(true);

        gridLayout->addWidget(Label6, 2, 0, 1, 1);

        Label5 = new QLabel(Panel1);
        Label5->setObjectName(QString::fromUtf8("Label5"));
        Label5->setEnabled(true);

        gridLayout->addWidget(Label5, 3, 0, 1, 1);

        Proxy = new QLineEdit(Panel1);
        Proxy->setObjectName(QString::fromUtf8("Proxy"));
        Proxy->setEnabled(false);

        gridLayout->addWidget(Proxy, 5, 1, 1, 2);

        UrlFile = new QLineEdit(Panel1);
        UrlFile->setObjectName(QString::fromUtf8("UrlFile"));
        UrlFile->setEnabled(true);

        gridLayout->addWidget(UrlFile, 9, 0, 1, 3);

        Label4 = new QLabel(Panel1);
        Label4->setObjectName(QString::fromUtf8("Label4"));
        Label4->setEnabled(true);

        gridLayout->addWidget(Label4, 6, 0, 1, 1);

        LogAppend = new QCheckBox(Panel1);
        LogAppend->setObjectName(QString::fromUtf8("LogAppend"));
        LogAppend->setChecked(false);

        gridLayout->addWidget(LogAppend, 6, 1, 1, 1);

        BtnUrlFile = new QPushButton(Panel1);
        BtnUrlFile->setObjectName(QString::fromUtf8("BtnUrlFile"));
        BtnUrlFile->setEnabled(true);
        BtnUrlFile->setFlat(false);

        gridLayout->addWidget(BtnUrlFile, 8, 2, 1, 1);

        HoldErr = new QCheckBox(Panel1);
        HoldErr->setObjectName(QString::fromUtf8("HoldErr"));
        HoldErr->setChecked(false);

        gridLayout->addWidget(HoldErr, 0, 0, 1, 2);

        HoldList = new QCheckBox(Panel1);
        HoldList->setObjectName(QString::fromUtf8("HoldList"));
        HoldList->setChecked(false);

        gridLayout->addWidget(HoldList, 1, 0, 1, 2);

        LogFile = new QLineEdit(Panel1);
        LogFile->setObjectName(QString::fromUtf8("LogFile"));
        LogFile->setEnabled(true);

        gridLayout->addWidget(LogFile, 7, 0, 1, 3);

        Label1 = new QLabel(Panel1);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 8, 0, 1, 2);

        DateFormat = new QComboBox(Panel1);
        DateFormat->addItem(QString());
        DateFormat->addItem(QString());
        DateFormat->addItem(QString());
        DateFormat->setObjectName(QString::fromUtf8("DateFormat"));
        DateFormat->setEnabled(true);

        gridLayout->addWidget(DateFormat, 3, 1, 1, 1);

        Label2 = new QLabel(Panel1);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setEnabled(true);

        gridLayout->addWidget(Label2, 4, 0, 1, 1);

        BtnLogFile = new QPushButton(Panel1);
        BtnLogFile->setObjectName(QString::fromUtf8("BtnLogFile"));
        BtnLogFile->setEnabled(true);
        BtnLogFile->setFlat(false);

        gridLayout->addWidget(BtnLogFile, 6, 2, 1, 1);


        verticalLayout->addWidget(Panel1);

        widget = new QWidget(DownOptDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
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


        retranslateUi(DownOptDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(DownOptDialog);
    } // setupUi

    void retranslateUi(QWidget *DownOptDialog)
    {
        DownOptDialog->setWindowTitle(QCoreApplication::translate("DownOptDialog", "Options", nullptr));
#if QT_CONFIG(tooltip)
        DownOptDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel1->setProperty("text", QVariant(QString()));
        TraceLevel->setItemText(0, QCoreApplication::translate("DownOptDialog", "OFF", nullptr));
        TraceLevel->setItemText(1, QCoreApplication::translate("DownOptDialog", "Level 1", nullptr));
        TraceLevel->setItemText(2, QCoreApplication::translate("DownOptDialog", "Level 2", nullptr));
        TraceLevel->setItemText(3, QCoreApplication::translate("DownOptDialog", "Level 3", nullptr));
        TraceLevel->setItemText(4, QCoreApplication::translate("DownOptDialog", "Level 4", nullptr));
        TraceLevel->setItemText(5, QCoreApplication::translate("DownOptDialog", "Level 5", nullptr));

#if QT_CONFIG(tooltip)
        TraceLevel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label3->setText(QCoreApplication::translate("DownOptDialog", "Proxy Address", nullptr));
#if QT_CONFIG(tooltip)
        NCol->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NCol->setText(QCoreApplication::translate("DownOptDialog", "35", nullptr));
#if QT_CONFIG(tooltip)
        Label6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label6->setText(QCoreApplication::translate("DownOptDialog", "# Columns for Test", nullptr));
#if QT_CONFIG(tooltip)
        Label5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label5->setText(QCoreApplication::translate("DownOptDialog", "Date Format for Test", nullptr));
#if QT_CONFIG(tooltip)
        Proxy->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Proxy->setText(QString());
#if QT_CONFIG(tooltip)
        UrlFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        UrlFile->setText(QString());
#if QT_CONFIG(tooltip)
        Label4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label4->setText(QCoreApplication::translate("DownOptDialog", "Download Log File", nullptr));
#if QT_CONFIG(tooltip)
        LogAppend->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LogAppend->setText(QCoreApplication::translate("DownOptDialog", "Append", nullptr));
#if QT_CONFIG(tooltip)
        BtnUrlFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnUrlFile->setText(QCoreApplication::translate("DownOptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        HoldErr->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        HoldErr->setText(QCoreApplication::translate("DownOptDialog", " Keep Error Info on Download Error (*.err)", nullptr));
#if QT_CONFIG(tooltip)
        HoldList->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        HoldList->setText(QCoreApplication::translate("DownOptDialog", " Keep Remote Directory Listings (.listing)", nullptr));
#if QT_CONFIG(tooltip)
        LogFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LogFile->setText(QString());
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("DownOptDialog", "URL List File for GNSS Data", nullptr));
        DateFormat->setItemText(0, QCoreApplication::translate("DownOptDialog", "YYYY-DOY", nullptr));
        DateFormat->setItemText(1, QCoreApplication::translate("DownOptDialog", "YYYY/mm/dd", nullptr));
        DateFormat->setItemText(2, QCoreApplication::translate("DownOptDialog", "Week", nullptr));

#if QT_CONFIG(tooltip)
        DateFormat->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label2->setText(QCoreApplication::translate("DownOptDialog", "Output Debug Trace", nullptr));
#if QT_CONFIG(tooltip)
        BtnLogFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnLogFile->setText(QCoreApplication::translate("DownOptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("DownOptDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("DownOptDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DownOptDialog: public Ui_DownOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETOPTDLG_H
