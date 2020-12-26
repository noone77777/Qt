/********************************************************************************
** Form generated from reading UI file 'logstrdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGSTRDLG_H
#define UI_LOGSTRDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogStrDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *Label5;
    QCheckBox *Stream1C;
    QLabel *Label6;
    QComboBox *Stream2;
    QComboBox *Stream3;
    QPushButton *BtnStr3;
    QPushButton *BtnStr2;
    QPushButton *BtnStr1;
    QComboBox *SwapIntv;
    QLabel *Label2;
    QPushButton *BtnKey;
    QCheckBox *TimeTagC;
    QLabel *Label1;
    QCheckBox *Stream2C;
    QCheckBox *Stream3C;
    QLabel *LabelF1;
    QLabel *Label10;
    QComboBox *Stream1;
    QCheckBox *OutEventC;
    QPushButton *BtnFile1;
    QPushButton *BtnFile2;
    QPushButton *BtnFile3;
    QLineEdit *FilePath1;
    QLineEdit *FilePath2;
    QLineEdit *FilePath3;
    QPushButton *BtnCancel;
    QPushButton *BtnOk;

    void setupUi(QWidget *LogStrDialog)
    {
        if (LogStrDialog->objectName().isEmpty())
            LogStrDialog->setObjectName(QString::fromUtf8("LogStrDialog"));
        LogStrDialog->resize(542, 307);
        gridLayout = new QGridLayout(LogStrDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Label5 = new QLabel(LogStrDialog);
        Label5->setObjectName(QString::fromUtf8("Label5"));
        Label5->setEnabled(true);

        gridLayout->addWidget(Label5, 0, 2, 1, 3);

        Stream1C = new QCheckBox(LogStrDialog);
        Stream1C->setObjectName(QString::fromUtf8("Stream1C"));

        gridLayout->addWidget(Stream1C, 1, 0, 1, 2);

        Label6 = new QLabel(LogStrDialog);
        Label6->setObjectName(QString::fromUtf8("Label6"));
        Label6->setEnabled(true);

        gridLayout->addWidget(Label6, 0, 7, 1, 1);

        Stream2 = new QComboBox(LogStrDialog);
        Stream2->addItem(QString());
        Stream2->addItem(QString());
        Stream2->addItem(QString());
        Stream2->addItem(QString());
        Stream2->addItem(QString());
        Stream2->setObjectName(QString::fromUtf8("Stream2"));
        Stream2->setEnabled(true);

        gridLayout->addWidget(Stream2, 2, 2, 1, 5);

        Stream3 = new QComboBox(LogStrDialog);
        Stream3->addItem(QString());
        Stream3->addItem(QString());
        Stream3->addItem(QString());
        Stream3->addItem(QString());
        Stream3->addItem(QString());
        Stream3->setObjectName(QString::fromUtf8("Stream3"));
        Stream3->setEnabled(true);

        gridLayout->addWidget(Stream3, 3, 2, 1, 5);

        BtnStr3 = new QPushButton(LogStrDialog);
        BtnStr3->setObjectName(QString::fromUtf8("BtnStr3"));
        BtnStr3->setEnabled(true);

        gridLayout->addWidget(BtnStr3, 3, 7, 1, 1);

        BtnStr2 = new QPushButton(LogStrDialog);
        BtnStr2->setObjectName(QString::fromUtf8("BtnStr2"));
        BtnStr2->setEnabled(true);

        gridLayout->addWidget(BtnStr2, 2, 7, 1, 1);

        BtnStr1 = new QPushButton(LogStrDialog);
        BtnStr1->setObjectName(QString::fromUtf8("BtnStr1"));
        BtnStr1->setEnabled(true);

        gridLayout->addWidget(BtnStr1, 1, 7, 1, 1);

        SwapIntv = new QComboBox(LogStrDialog);
        SwapIntv->addItem(QString());
        SwapIntv->addItem(QString());
        SwapIntv->addItem(QString());
        SwapIntv->addItem(QString());
        SwapIntv->addItem(QString());
        SwapIntv->addItem(QString());
        SwapIntv->addItem(QString());
        SwapIntv->addItem(QString());
        SwapIntv->setObjectName(QString::fromUtf8("SwapIntv"));
        SwapIntv->setEnabled(true);

        gridLayout->addWidget(SwapIntv, 8, 2, 1, 1);

        Label2 = new QLabel(LogStrDialog);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setEnabled(true);

        gridLayout->addWidget(Label2, 8, 3, 1, 1);

        BtnKey = new QPushButton(LogStrDialog);
        BtnKey->setObjectName(QString::fromUtf8("BtnKey"));
        BtnKey->setEnabled(true);
        BtnKey->setFlat(true);

        gridLayout->addWidget(BtnKey, 8, 4, 1, 1);

        TimeTagC = new QCheckBox(LogStrDialog);
        TimeTagC->setObjectName(QString::fromUtf8("TimeTagC"));

        gridLayout->addWidget(TimeTagC, 8, 0, 1, 1);

        Label1 = new QLabel(LogStrDialog);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 8, 1, 1, 1);

        Stream2C = new QCheckBox(LogStrDialog);
        Stream2C->setObjectName(QString::fromUtf8("Stream2C"));

        gridLayout->addWidget(Stream2C, 2, 0, 1, 2);

        Stream3C = new QCheckBox(LogStrDialog);
        Stream3C->setObjectName(QString::fromUtf8("Stream3C"));

        gridLayout->addWidget(Stream3C, 3, 0, 1, 2);

        LabelF1 = new QLabel(LogStrDialog);
        LabelF1->setObjectName(QString::fromUtf8("LabelF1"));
        LabelF1->setEnabled(true);

        gridLayout->addWidget(LabelF1, 4, 0, 1, 1);

        Label10 = new QLabel(LogStrDialog);
        Label10->setObjectName(QString::fromUtf8("Label10"));
        Label10->setEnabled(true);

        gridLayout->addWidget(Label10, 0, 0, 1, 2);

        Stream1 = new QComboBox(LogStrDialog);
        Stream1->addItem(QString());
        Stream1->addItem(QString());
        Stream1->addItem(QString());
        Stream1->addItem(QString());
        Stream1->addItem(QString());
        Stream1->setObjectName(QString::fromUtf8("Stream1"));
        Stream1->setEnabled(true);

        gridLayout->addWidget(Stream1, 1, 2, 1, 5);

        OutEventC = new QCheckBox(LogStrDialog);
        OutEventC->setObjectName(QString::fromUtf8("OutEventC"));

        gridLayout->addWidget(OutEventC, 1, 8, 1, 1);

        BtnFile1 = new QPushButton(LogStrDialog);
        BtnFile1->setObjectName(QString::fromUtf8("BtnFile1"));
        BtnFile1->setEnabled(true);

        gridLayout->addWidget(BtnFile1, 5, 8, 1, 1);

        BtnFile2 = new QPushButton(LogStrDialog);
        BtnFile2->setObjectName(QString::fromUtf8("BtnFile2"));
        BtnFile2->setEnabled(true);

        gridLayout->addWidget(BtnFile2, 6, 8, 1, 1);

        BtnFile3 = new QPushButton(LogStrDialog);
        BtnFile3->setObjectName(QString::fromUtf8("BtnFile3"));
        BtnFile3->setEnabled(true);

        gridLayout->addWidget(BtnFile3, 7, 8, 1, 1);

        FilePath1 = new QLineEdit(LogStrDialog);
        FilePath1->setObjectName(QString::fromUtf8("FilePath1"));
        FilePath1->setEnabled(true);

        gridLayout->addWidget(FilePath1, 5, 0, 1, 8);

        FilePath2 = new QLineEdit(LogStrDialog);
        FilePath2->setObjectName(QString::fromUtf8("FilePath2"));
        FilePath2->setEnabled(true);

        gridLayout->addWidget(FilePath2, 6, 0, 1, 8);

        FilePath3 = new QLineEdit(LogStrDialog);
        FilePath3->setObjectName(QString::fromUtf8("FilePath3"));
        FilePath3->setEnabled(true);

        gridLayout->addWidget(FilePath3, 7, 0, 1, 8);

        BtnCancel = new QPushButton(LogStrDialog);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);

        gridLayout->addWidget(BtnCancel, 8, 8, 1, 1);

        BtnOk = new QPushButton(LogStrDialog);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        gridLayout->addWidget(BtnOk, 8, 7, 1, 1);


        retranslateUi(LogStrDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(LogStrDialog);
    } // setupUi

    void retranslateUi(QWidget *LogStrDialog)
    {
        LogStrDialog->setWindowTitle(QCoreApplication::translate("LogStrDialog", "Log Streams", nullptr));
#if QT_CONFIG(tooltip)
        LogStrDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label5->setText(QCoreApplication::translate("LogStrDialog", "Type", nullptr));
#if QT_CONFIG(tooltip)
        Stream1C->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Stream1C->setText(QCoreApplication::translate("LogStrDialog", "(6) Rover", nullptr));
#if QT_CONFIG(tooltip)
        Label6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label6->setText(QCoreApplication::translate("LogStrDialog", "Option", nullptr));
        Stream2->setItemText(0, QCoreApplication::translate("LogStrDialog", "Serial", nullptr));
        Stream2->setItemText(1, QCoreApplication::translate("LogStrDialog", "TCP Client", nullptr));
        Stream2->setItemText(2, QCoreApplication::translate("LogStrDialog", "TCP Server", nullptr));
        Stream2->setItemText(3, QCoreApplication::translate("LogStrDialog", "NTRIP Server", nullptr));
        Stream2->setItemText(4, QCoreApplication::translate("LogStrDialog", "File", nullptr));

#if QT_CONFIG(tooltip)
        Stream2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Stream3->setItemText(0, QCoreApplication::translate("LogStrDialog", "Serial", nullptr));
        Stream3->setItemText(1, QCoreApplication::translate("LogStrDialog", "TCP Client", nullptr));
        Stream3->setItemText(2, QCoreApplication::translate("LogStrDialog", "TCP Server", nullptr));
        Stream3->setItemText(3, QCoreApplication::translate("LogStrDialog", "NTRIP Server", nullptr));
        Stream3->setItemText(4, QCoreApplication::translate("LogStrDialog", "File", nullptr));

#if QT_CONFIG(tooltip)
        Stream3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnStr3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnStr3->setText(QCoreApplication::translate("LogStrDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnStr2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnStr2->setText(QCoreApplication::translate("LogStrDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnStr1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnStr1->setText(QCoreApplication::translate("LogStrDialog", "...", nullptr));
        SwapIntv->setItemText(0, QString());
        SwapIntv->setItemText(1, QCoreApplication::translate("LogStrDialog", "0.25", nullptr));
        SwapIntv->setItemText(2, QCoreApplication::translate("LogStrDialog", "0.5", nullptr));
        SwapIntv->setItemText(3, QCoreApplication::translate("LogStrDialog", "1", nullptr));
        SwapIntv->setItemText(4, QCoreApplication::translate("LogStrDialog", "3", nullptr));
        SwapIntv->setItemText(5, QCoreApplication::translate("LogStrDialog", "6", nullptr));
        SwapIntv->setItemText(6, QCoreApplication::translate("LogStrDialog", "12", nullptr));
        SwapIntv->setItemText(7, QCoreApplication::translate("LogStrDialog", "24", nullptr));

#if QT_CONFIG(tooltip)
        SwapIntv->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label2->setText(QCoreApplication::translate("LogStrDialog", "H", nullptr));
#if QT_CONFIG(tooltip)
        BtnKey->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnKey->setText(QCoreApplication::translate("LogStrDialog", "?", nullptr));
#if QT_CONFIG(tooltip)
        TimeTagC->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeTagC->setText(QCoreApplication::translate("LogStrDialog", "Time-Tag", nullptr));
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("LogStrDialog", "Swap Intv", nullptr));
#if QT_CONFIG(tooltip)
        Stream2C->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Stream2C->setText(QCoreApplication::translate("LogStrDialog", "(7) Base Station", nullptr));
#if QT_CONFIG(tooltip)
        Stream3C->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Stream3C->setText(QCoreApplication::translate("LogStrDialog", "(8) Correction", nullptr));
#if QT_CONFIG(tooltip)
        LabelF1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelF1->setText(QCoreApplication::translate("LogStrDialog", "Log File Paths", nullptr));
#if QT_CONFIG(tooltip)
        Label10->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label10->setText(QCoreApplication::translate("LogStrDialog", "Log Stream", nullptr));
        Stream1->setItemText(0, QCoreApplication::translate("LogStrDialog", "Serial", nullptr));
        Stream1->setItemText(1, QCoreApplication::translate("LogStrDialog", "TCP Client", nullptr));
        Stream1->setItemText(2, QCoreApplication::translate("LogStrDialog", "TCP Server", nullptr));
        Stream1->setItemText(3, QCoreApplication::translate("LogStrDialog", "NTRIP Server", nullptr));
        Stream1->setItemText(4, QCoreApplication::translate("LogStrDialog", "File", nullptr));

#if QT_CONFIG(tooltip)
        Stream1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        OutEventC->setText(QCoreApplication::translate("LogStrDialog", "Output Event", nullptr));
#if QT_CONFIG(tooltip)
        BtnFile1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnFile1->setText(QCoreApplication::translate("LogStrDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnFile2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnFile2->setText(QCoreApplication::translate("LogStrDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnFile3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnFile3->setText(QCoreApplication::translate("LogStrDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        FilePath1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FilePath1->setText(QString());
#if QT_CONFIG(tooltip)
        FilePath2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FilePath2->setText(QString());
#if QT_CONFIG(tooltip)
        FilePath3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FilePath3->setText(QString());
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("LogStrDialog", "&Cancel", nullptr));
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("LogStrDialog", "&OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogStrDialog: public Ui_LogStrDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGSTRDLG_H
