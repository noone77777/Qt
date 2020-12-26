/********************************************************************************
** Form generated from reading UI file 'outstrdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTSTRDLG_H
#define UI_OUTSTRDLG_H

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

class Ui_OutputStrDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *Label10;
    QLabel *Label5;
    QLabel *Label6;
    QLabel *Label7;
    QCheckBox *Stream1C;
    QComboBox *Stream1;
    QPushButton *BtnStr1;
    QComboBox *Format1;
    QCheckBox *Stream2C;
    QComboBox *Stream2;
    QPushButton *BtnStr2;
    QComboBox *Format2;
    QLabel *LabelF1;
    QLineEdit *FilePath1;
    QPushButton *BtnFile1;
    QLineEdit *FilePath2;
    QPushButton *BtnFile2;
    QCheckBox *TimeTagC;
    QLabel *Label1;
    QComboBox *SwapIntv;
    QLabel *Label2;
    QPushButton *BtnKey;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *OutputStrDialog)
    {
        if (OutputStrDialog->objectName().isEmpty())
            OutputStrDialog->setObjectName(QString::fromUtf8("OutputStrDialog"));
        OutputStrDialog->resize(595, 233);
        gridLayout = new QGridLayout(OutputStrDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Label10 = new QLabel(OutputStrDialog);
        Label10->setObjectName(QString::fromUtf8("Label10"));
        Label10->setEnabled(true);

        gridLayout->addWidget(Label10, 0, 0, 1, 2);

        Label5 = new QLabel(OutputStrDialog);
        Label5->setObjectName(QString::fromUtf8("Label5"));
        Label5->setEnabled(true);

        gridLayout->addWidget(Label5, 0, 3, 1, 3);

        Label6 = new QLabel(OutputStrDialog);
        Label6->setObjectName(QString::fromUtf8("Label6"));
        Label6->setEnabled(true);

        gridLayout->addWidget(Label6, 0, 6, 1, 2);

        Label7 = new QLabel(OutputStrDialog);
        Label7->setObjectName(QString::fromUtf8("Label7"));
        Label7->setEnabled(true);

        gridLayout->addWidget(Label7, 0, 9, 1, 1);

        Stream1C = new QCheckBox(OutputStrDialog);
        Stream1C->setObjectName(QString::fromUtf8("Stream1C"));

        gridLayout->addWidget(Stream1C, 1, 0, 1, 3);

        Stream1 = new QComboBox(OutputStrDialog);
        Stream1->addItem(QString());
        Stream1->addItem(QString());
        Stream1->addItem(QString());
        Stream1->addItem(QString());
        Stream1->addItem(QString());
        Stream1->setObjectName(QString::fromUtf8("Stream1"));
        Stream1->setEnabled(true);

        gridLayout->addWidget(Stream1, 1, 3, 1, 4);

        BtnStr1 = new QPushButton(OutputStrDialog);
        BtnStr1->setObjectName(QString::fromUtf8("BtnStr1"));
        BtnStr1->setEnabled(true);

        gridLayout->addWidget(BtnStr1, 1, 7, 1, 1);

        Format1 = new QComboBox(OutputStrDialog);
        Format1->addItem(QString());
        Format1->addItem(QString());
        Format1->addItem(QString());
        Format1->addItem(QString());
        Format1->addItem(QString());
        Format1->setObjectName(QString::fromUtf8("Format1"));
        Format1->setEnabled(true);

        gridLayout->addWidget(Format1, 1, 8, 1, 3);

        Stream2C = new QCheckBox(OutputStrDialog);
        Stream2C->setObjectName(QString::fromUtf8("Stream2C"));

        gridLayout->addWidget(Stream2C, 2, 0, 1, 3);

        Stream2 = new QComboBox(OutputStrDialog);
        Stream2->addItem(QString());
        Stream2->addItem(QString());
        Stream2->addItem(QString());
        Stream2->addItem(QString());
        Stream2->addItem(QString());
        Stream2->setObjectName(QString::fromUtf8("Stream2"));
        Stream2->setEnabled(true);

        gridLayout->addWidget(Stream2, 2, 3, 1, 4);

        BtnStr2 = new QPushButton(OutputStrDialog);
        BtnStr2->setObjectName(QString::fromUtf8("BtnStr2"));
        BtnStr2->setEnabled(true);

        gridLayout->addWidget(BtnStr2, 2, 7, 1, 1);

        Format2 = new QComboBox(OutputStrDialog);
        Format2->addItem(QString());
        Format2->addItem(QString());
        Format2->addItem(QString());
        Format2->addItem(QString());
        Format2->addItem(QString());
        Format2->setObjectName(QString::fromUtf8("Format2"));
        Format2->setEnabled(true);

        gridLayout->addWidget(Format2, 2, 8, 1, 3);

        LabelF1 = new QLabel(OutputStrDialog);
        LabelF1->setObjectName(QString::fromUtf8("LabelF1"));
        LabelF1->setEnabled(true);

        gridLayout->addWidget(LabelF1, 3, 0, 1, 2);

        FilePath1 = new QLineEdit(OutputStrDialog);
        FilePath1->setObjectName(QString::fromUtf8("FilePath1"));
        FilePath1->setEnabled(true);

        gridLayout->addWidget(FilePath1, 4, 0, 1, 10);

        BtnFile1 = new QPushButton(OutputStrDialog);
        BtnFile1->setObjectName(QString::fromUtf8("BtnFile1"));
        BtnFile1->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnFile1->setPalette(palette);

        gridLayout->addWidget(BtnFile1, 4, 10, 1, 1);

        FilePath2 = new QLineEdit(OutputStrDialog);
        FilePath2->setObjectName(QString::fromUtf8("FilePath2"));
        FilePath2->setEnabled(true);

        gridLayout->addWidget(FilePath2, 5, 0, 1, 10);

        BtnFile2 = new QPushButton(OutputStrDialog);
        BtnFile2->setObjectName(QString::fromUtf8("BtnFile2"));
        BtnFile2->setEnabled(true);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnFile2->setPalette(palette1);

        gridLayout->addWidget(BtnFile2, 5, 10, 1, 1);

        TimeTagC = new QCheckBox(OutputStrDialog);
        TimeTagC->setObjectName(QString::fromUtf8("TimeTagC"));

        gridLayout->addWidget(TimeTagC, 6, 0, 1, 1);

        Label1 = new QLabel(OutputStrDialog);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 6, 1, 1, 1);

        SwapIntv = new QComboBox(OutputStrDialog);
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
        SwapIntv->setEditable(true);

        gridLayout->addWidget(SwapIntv, 6, 2, 1, 2);

        Label2 = new QLabel(OutputStrDialog);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setEnabled(true);

        gridLayout->addWidget(Label2, 6, 4, 1, 1);

        BtnKey = new QPushButton(OutputStrDialog);
        BtnKey->setObjectName(QString::fromUtf8("BtnKey"));
        BtnKey->setEnabled(true);
        BtnKey->setFlat(true);

        gridLayout->addWidget(BtnKey, 6, 5, 1, 1);

        BtnOk = new QPushButton(OutputStrDialog);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        gridLayout->addWidget(BtnOk, 6, 6, 1, 3);

        BtnCancel = new QPushButton(OutputStrDialog);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);

        gridLayout->addWidget(BtnCancel, 6, 9, 1, 2);


        retranslateUi(OutputStrDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(OutputStrDialog);
    } // setupUi

    void retranslateUi(QWidget *OutputStrDialog)
    {
        OutputStrDialog->setWindowTitle(QCoreApplication::translate("OutputStrDialog", "Output Streams", nullptr));
#if QT_CONFIG(tooltip)
        OutputStrDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label10->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label10->setText(QCoreApplication::translate("OutputStrDialog", "Output Stream", nullptr));
#if QT_CONFIG(tooltip)
        Label5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label5->setText(QCoreApplication::translate("OutputStrDialog", "Type", nullptr));
#if QT_CONFIG(tooltip)
        Label6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label6->setText(QCoreApplication::translate("OutputStrDialog", "Option", nullptr));
#if QT_CONFIG(tooltip)
        Label7->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label7->setText(QCoreApplication::translate("OutputStrDialog", "Format", nullptr));
#if QT_CONFIG(tooltip)
        Stream1C->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Stream1C->setText(QCoreApplication::translate("OutputStrDialog", "(4) Solution 1", nullptr));
        Stream1->setItemText(0, QCoreApplication::translate("OutputStrDialog", "Serial", nullptr));
        Stream1->setItemText(1, QCoreApplication::translate("OutputStrDialog", "TCP Client", nullptr));
        Stream1->setItemText(2, QCoreApplication::translate("OutputStrDialog", "TCP Server", nullptr));
        Stream1->setItemText(3, QCoreApplication::translate("OutputStrDialog", "NTRIP Server", nullptr));
        Stream1->setItemText(4, QCoreApplication::translate("OutputStrDialog", "File", nullptr));

#if QT_CONFIG(tooltip)
        Stream1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnStr1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnStr1->setText(QCoreApplication::translate("OutputStrDialog", "...", nullptr));
        Format1->setItemText(0, QCoreApplication::translate("OutputStrDialog", "Lat/Lon/Height", nullptr));
        Format1->setItemText(1, QCoreApplication::translate("OutputStrDialog", "X/Y/Z-ECEF", nullptr));
        Format1->setItemText(2, QCoreApplication::translate("OutputStrDialog", "E/N/U-Baseline", nullptr));
        Format1->setItemText(3, QCoreApplication::translate("OutputStrDialog", "NMEA0183", nullptr));
        Format1->setItemText(4, QCoreApplication::translate("OutputStrDialog", "Solution Status", nullptr));

#if QT_CONFIG(tooltip)
        Format1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Stream2C->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Stream2C->setText(QCoreApplication::translate("OutputStrDialog", "(5) Solution 2", nullptr));
        Stream2->setItemText(0, QCoreApplication::translate("OutputStrDialog", "Serial", nullptr));
        Stream2->setItemText(1, QCoreApplication::translate("OutputStrDialog", "TCP Client", nullptr));
        Stream2->setItemText(2, QCoreApplication::translate("OutputStrDialog", "TCP Server", nullptr));
        Stream2->setItemText(3, QCoreApplication::translate("OutputStrDialog", "NTRIP Server", nullptr));
        Stream2->setItemText(4, QCoreApplication::translate("OutputStrDialog", "File", nullptr));

#if QT_CONFIG(tooltip)
        Stream2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnStr2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnStr2->setText(QCoreApplication::translate("OutputStrDialog", "...", nullptr));
        Format2->setItemText(0, QCoreApplication::translate("OutputStrDialog", "Lat/Lon/Height", nullptr));
        Format2->setItemText(1, QCoreApplication::translate("OutputStrDialog", "X/Y/Z-ECEF", nullptr));
        Format2->setItemText(2, QCoreApplication::translate("OutputStrDialog", "E/N/U-Baseline", nullptr));
        Format2->setItemText(3, QCoreApplication::translate("OutputStrDialog", "NMEA0183", nullptr));
        Format2->setItemText(4, QCoreApplication::translate("OutputStrDialog", "Solution Status", nullptr));

#if QT_CONFIG(tooltip)
        Format2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        LabelF1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelF1->setText(QCoreApplication::translate("OutputStrDialog", "Output File Paths", nullptr));
#if QT_CONFIG(tooltip)
        FilePath1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FilePath1->setText(QString());
#if QT_CONFIG(tooltip)
        BtnFile1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnFile1->setText(QCoreApplication::translate("OutputStrDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        FilePath2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FilePath2->setText(QString());
#if QT_CONFIG(tooltip)
        BtnFile2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnFile2->setText(QCoreApplication::translate("OutputStrDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        TimeTagC->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeTagC->setText(QCoreApplication::translate("OutputStrDialog", "Time-Tag", nullptr));
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("OutputStrDialog", "Swap Intv", nullptr));
        SwapIntv->setItemText(0, QString());
        SwapIntv->setItemText(1, QCoreApplication::translate("OutputStrDialog", "0.25", nullptr));
        SwapIntv->setItemText(2, QCoreApplication::translate("OutputStrDialog", "0.5", nullptr));
        SwapIntv->setItemText(3, QCoreApplication::translate("OutputStrDialog", "1", nullptr));
        SwapIntv->setItemText(4, QCoreApplication::translate("OutputStrDialog", "3", nullptr));
        SwapIntv->setItemText(5, QCoreApplication::translate("OutputStrDialog", "6", nullptr));
        SwapIntv->setItemText(6, QCoreApplication::translate("OutputStrDialog", "12", nullptr));
        SwapIntv->setItemText(7, QCoreApplication::translate("OutputStrDialog", "24", nullptr));

#if QT_CONFIG(tooltip)
        SwapIntv->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label2->setText(QCoreApplication::translate("OutputStrDialog", "H", nullptr));
#if QT_CONFIG(tooltip)
        BtnKey->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnKey->setText(QCoreApplication::translate("OutputStrDialog", "?", nullptr));
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("OutputStrDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("OutputStrDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OutputStrDialog: public Ui_OutputStrDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTSTRDLG_H
