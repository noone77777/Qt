/********************************************************************************
** Form generated from reading UI file 'instrdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRDLG_H
#define UI_INSTRDLG_H

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

class Ui_InputStrDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *Label10;
    QLabel *Label5;
    QLabel *Label6;
    QLabel *Label11;
    QLabel *Label7;
    QLabel *Label1;
    QCheckBox *StreamC1;
    QComboBox *Stream1;
    QPushButton *BtnStr1;
    QPushButton *BtnCmd1;
    QComboBox *Format1;
    QPushButton *BtnRcvOpt1;
    QCheckBox *StreamC2;
    QComboBox *Stream2;
    QPushButton *BtnStr2;
    QPushButton *BtnCmd2;
    QComboBox *Format2;
    QPushButton *BtnRcvOpt2;
    QCheckBox *StreamC3;
    QComboBox *Stream3;
    QPushButton *BtnStr3;
    QPushButton *BtnCmd3;
    QComboBox *Format3;
    QPushButton *BtnRcvOpt3;
    QLabel *LabelNmea;
    QComboBox *NmeaReqL;
    QLineEdit *NmeaPos1;
    QLineEdit *NmeaPos2;
    QPushButton *BtnPos;
    QLabel *LabelF1;
    QLineEdit *FilePath1;
    QPushButton *BtnFile1;
    QLineEdit *FilePath2;
    QPushButton *BtnFile2;
    QLineEdit *FilePath3;
    QPushButton *BtnFile3;
    QCheckBox *TimeTagC;
    QComboBox *TimeSpeedL;
    QLabel *LabelF3;
    QLineEdit *TimeStartE;
    QLabel *LabelF2;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *InputStrDialog)
    {
        if (InputStrDialog->objectName().isEmpty())
            InputStrDialog->setObjectName(QString::fromUtf8("InputStrDialog"));
        InputStrDialog->resize(662, 339);
        gridLayout = new QGridLayout(InputStrDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Label10 = new QLabel(InputStrDialog);
        Label10->setObjectName(QString::fromUtf8("Label10"));
        Label10->setEnabled(true);

        gridLayout->addWidget(Label10, 0, 0, 1, 2);

        Label5 = new QLabel(InputStrDialog);
        Label5->setObjectName(QString::fromUtf8("Label5"));
        Label5->setEnabled(true);

        gridLayout->addWidget(Label5, 0, 5, 1, 2);

        Label6 = new QLabel(InputStrDialog);
        Label6->setObjectName(QString::fromUtf8("Label6"));
        Label6->setEnabled(true);

        gridLayout->addWidget(Label6, 0, 7, 1, 2);

        Label11 = new QLabel(InputStrDialog);
        Label11->setObjectName(QString::fromUtf8("Label11"));
        Label11->setEnabled(true);

        gridLayout->addWidget(Label11, 0, 9, 1, 2);

        Label7 = new QLabel(InputStrDialog);
        Label7->setObjectName(QString::fromUtf8("Label7"));
        Label7->setEnabled(true);

        gridLayout->addWidget(Label7, 0, 12, 1, 1);

        Label1 = new QLabel(InputStrDialog);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 0, 13, 1, 1);

        StreamC1 = new QCheckBox(InputStrDialog);
        StreamC1->setObjectName(QString::fromUtf8("StreamC1"));

        gridLayout->addWidget(StreamC1, 1, 0, 1, 4);

        Stream1 = new QComboBox(InputStrDialog);
        Stream1->addItem(QString());
        Stream1->addItem(QString());
        Stream1->addItem(QString());
        Stream1->addItem(QString());
        Stream1->addItem(QString());
        Stream1->setObjectName(QString::fromUtf8("Stream1"));
        Stream1->setEnabled(true);

        gridLayout->addWidget(Stream1, 1, 4, 1, 4);

        BtnStr1 = new QPushButton(InputStrDialog);
        BtnStr1->setObjectName(QString::fromUtf8("BtnStr1"));
        BtnStr1->setEnabled(true);

        gridLayout->addWidget(BtnStr1, 1, 8, 1, 1);

        BtnCmd1 = new QPushButton(InputStrDialog);
        BtnCmd1->setObjectName(QString::fromUtf8("BtnCmd1"));
        BtnCmd1->setEnabled(true);

        gridLayout->addWidget(BtnCmd1, 1, 9, 1, 2);

        Format1 = new QComboBox(InputStrDialog);
        Format1->setObjectName(QString::fromUtf8("Format1"));
        Format1->setEnabled(true);

        gridLayout->addWidget(Format1, 1, 11, 1, 2);

        BtnRcvOpt1 = new QPushButton(InputStrDialog);
        BtnRcvOpt1->setObjectName(QString::fromUtf8("BtnRcvOpt1"));
        BtnRcvOpt1->setEnabled(true);

        gridLayout->addWidget(BtnRcvOpt1, 1, 13, 1, 1);

        StreamC2 = new QCheckBox(InputStrDialog);
        StreamC2->setObjectName(QString::fromUtf8("StreamC2"));

        gridLayout->addWidget(StreamC2, 2, 0, 1, 4);

        Stream2 = new QComboBox(InputStrDialog);
        Stream2->addItem(QString());
        Stream2->addItem(QString());
        Stream2->addItem(QString());
        Stream2->addItem(QString());
        Stream2->addItem(QString());
        Stream2->setObjectName(QString::fromUtf8("Stream2"));
        Stream2->setEnabled(true);

        gridLayout->addWidget(Stream2, 2, 4, 1, 4);

        BtnStr2 = new QPushButton(InputStrDialog);
        BtnStr2->setObjectName(QString::fromUtf8("BtnStr2"));
        BtnStr2->setEnabled(true);

        gridLayout->addWidget(BtnStr2, 2, 8, 1, 1);

        BtnCmd2 = new QPushButton(InputStrDialog);
        BtnCmd2->setObjectName(QString::fromUtf8("BtnCmd2"));
        BtnCmd2->setEnabled(true);

        gridLayout->addWidget(BtnCmd2, 2, 9, 1, 2);

        Format2 = new QComboBox(InputStrDialog);
        Format2->setObjectName(QString::fromUtf8("Format2"));
        Format2->setEnabled(true);

        gridLayout->addWidget(Format2, 2, 11, 1, 2);

        BtnRcvOpt2 = new QPushButton(InputStrDialog);
        BtnRcvOpt2->setObjectName(QString::fromUtf8("BtnRcvOpt2"));
        BtnRcvOpt2->setEnabled(true);

        gridLayout->addWidget(BtnRcvOpt2, 2, 13, 1, 1);

        StreamC3 = new QCheckBox(InputStrDialog);
        StreamC3->setObjectName(QString::fromUtf8("StreamC3"));

        gridLayout->addWidget(StreamC3, 3, 0, 1, 4);

        Stream3 = new QComboBox(InputStrDialog);
        Stream3->addItem(QString());
        Stream3->addItem(QString());
        Stream3->addItem(QString());
        Stream3->addItem(QString());
        Stream3->addItem(QString());
        Stream3->addItem(QString());
        Stream3->addItem(QString());
        Stream3->setObjectName(QString::fromUtf8("Stream3"));
        Stream3->setEnabled(true);

        gridLayout->addWidget(Stream3, 3, 4, 1, 4);

        BtnStr3 = new QPushButton(InputStrDialog);
        BtnStr3->setObjectName(QString::fromUtf8("BtnStr3"));
        BtnStr3->setEnabled(true);

        gridLayout->addWidget(BtnStr3, 3, 8, 1, 1);

        BtnCmd3 = new QPushButton(InputStrDialog);
        BtnCmd3->setObjectName(QString::fromUtf8("BtnCmd3"));
        BtnCmd3->setEnabled(true);

        gridLayout->addWidget(BtnCmd3, 3, 9, 1, 2);

        Format3 = new QComboBox(InputStrDialog);
        Format3->setObjectName(QString::fromUtf8("Format3"));
        Format3->setEnabled(true);

        gridLayout->addWidget(Format3, 3, 11, 1, 2);

        BtnRcvOpt3 = new QPushButton(InputStrDialog);
        BtnRcvOpt3->setObjectName(QString::fromUtf8("BtnRcvOpt3"));
        BtnRcvOpt3->setEnabled(true);

        gridLayout->addWidget(BtnRcvOpt3, 3, 13, 1, 1);

        LabelNmea = new QLabel(InputStrDialog);
        LabelNmea->setObjectName(QString::fromUtf8("LabelNmea"));
        LabelNmea->setEnabled(true);

        gridLayout->addWidget(LabelNmea, 4, 0, 1, 7);

        NmeaReqL = new QComboBox(InputStrDialog);
        NmeaReqL->addItem(QString());
        NmeaReqL->addItem(QString());
        NmeaReqL->addItem(QString());
        NmeaReqL->setObjectName(QString::fromUtf8("NmeaReqL"));
        NmeaReqL->setEnabled(true);

        gridLayout->addWidget(NmeaReqL, 5, 0, 1, 4);

        NmeaPos1 = new QLineEdit(InputStrDialog);
        NmeaPos1->setObjectName(QString::fromUtf8("NmeaPos1"));
        NmeaPos1->setEnabled(true);

        gridLayout->addWidget(NmeaPos1, 5, 4, 1, 6);

        NmeaPos2 = new QLineEdit(InputStrDialog);
        NmeaPos2->setObjectName(QString::fromUtf8("NmeaPos2"));
        NmeaPos2->setEnabled(true);

        gridLayout->addWidget(NmeaPos2, 5, 10, 1, 3);

        BtnPos = new QPushButton(InputStrDialog);
        BtnPos->setObjectName(QString::fromUtf8("BtnPos"));
        BtnPos->setEnabled(true);

        gridLayout->addWidget(BtnPos, 5, 13, 1, 1);

        LabelF1 = new QLabel(InputStrDialog);
        LabelF1->setObjectName(QString::fromUtf8("LabelF1"));
        LabelF1->setEnabled(true);

        gridLayout->addWidget(LabelF1, 6, 0, 1, 2);

        FilePath1 = new QLineEdit(InputStrDialog);
        FilePath1->setObjectName(QString::fromUtf8("FilePath1"));
        FilePath1->setEnabled(true);

        gridLayout->addWidget(FilePath1, 7, 0, 1, 13);

        BtnFile1 = new QPushButton(InputStrDialog);
        BtnFile1->setObjectName(QString::fromUtf8("BtnFile1"));
        BtnFile1->setEnabled(true);

        gridLayout->addWidget(BtnFile1, 7, 13, 1, 1);

        FilePath2 = new QLineEdit(InputStrDialog);
        FilePath2->setObjectName(QString::fromUtf8("FilePath2"));
        FilePath2->setEnabled(true);

        gridLayout->addWidget(FilePath2, 8, 0, 1, 13);

        BtnFile2 = new QPushButton(InputStrDialog);
        BtnFile2->setObjectName(QString::fromUtf8("BtnFile2"));
        BtnFile2->setEnabled(true);

        gridLayout->addWidget(BtnFile2, 8, 13, 1, 1);

        FilePath3 = new QLineEdit(InputStrDialog);
        FilePath3->setObjectName(QString::fromUtf8("FilePath3"));
        FilePath3->setEnabled(true);

        gridLayout->addWidget(FilePath3, 9, 0, 1, 13);

        BtnFile3 = new QPushButton(InputStrDialog);
        BtnFile3->setObjectName(QString::fromUtf8("BtnFile3"));
        BtnFile3->setEnabled(true);

        gridLayout->addWidget(BtnFile3, 9, 13, 1, 1);

        TimeTagC = new QCheckBox(InputStrDialog);
        TimeTagC->setObjectName(QString::fromUtf8("TimeTagC"));

        gridLayout->addWidget(TimeTagC, 10, 0, 1, 1);

        TimeSpeedL = new QComboBox(InputStrDialog);
        TimeSpeedL->addItem(QString());
        TimeSpeedL->addItem(QString());
        TimeSpeedL->addItem(QString());
        TimeSpeedL->addItem(QString());
        TimeSpeedL->addItem(QString());
        TimeSpeedL->addItem(QString());
        TimeSpeedL->addItem(QString());
        TimeSpeedL->addItem(QString());
        TimeSpeedL->setObjectName(QString::fromUtf8("TimeSpeedL"));
        TimeSpeedL->setEnabled(true);

        gridLayout->addWidget(TimeSpeedL, 10, 1, 1, 1);

        LabelF3 = new QLabel(InputStrDialog);
        LabelF3->setObjectName(QString::fromUtf8("LabelF3"));
        LabelF3->setEnabled(true);

        gridLayout->addWidget(LabelF3, 10, 2, 1, 1);

        TimeStartE = new QLineEdit(InputStrDialog);
        TimeStartE->setObjectName(QString::fromUtf8("TimeStartE"));
        TimeStartE->setEnabled(true);

        gridLayout->addWidget(TimeStartE, 10, 3, 1, 2);

        LabelF2 = new QLabel(InputStrDialog);
        LabelF2->setObjectName(QString::fromUtf8("LabelF2"));
        LabelF2->setEnabled(true);

        gridLayout->addWidget(LabelF2, 10, 5, 1, 1);

        BtnOk = new QPushButton(InputStrDialog);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        gridLayout->addWidget(BtnOk, 10, 7, 1, 5);

        BtnCancel = new QPushButton(InputStrDialog);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);

        gridLayout->addWidget(BtnCancel, 10, 12, 1, 2);


        retranslateUi(InputStrDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(InputStrDialog);
    } // setupUi

    void retranslateUi(QWidget *InputStrDialog)
    {
        InputStrDialog->setWindowTitle(QCoreApplication::translate("InputStrDialog", "Input Streams", nullptr));
#if QT_CONFIG(tooltip)
        InputStrDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label10->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label10->setText(QCoreApplication::translate("InputStrDialog", "Input Stream", nullptr));
#if QT_CONFIG(tooltip)
        Label5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label5->setText(QCoreApplication::translate("InputStrDialog", "Type", nullptr));
#if QT_CONFIG(tooltip)
        Label6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label6->setText(QCoreApplication::translate("InputStrDialog", "Opt", nullptr));
#if QT_CONFIG(tooltip)
        Label11->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label11->setText(QCoreApplication::translate("InputStrDialog", "Cmd", nullptr));
#if QT_CONFIG(tooltip)
        Label7->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label7->setText(QCoreApplication::translate("InputStrDialog", "Format", nullptr));
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("InputStrDialog", "Opt", nullptr));
#if QT_CONFIG(tooltip)
        StreamC1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        StreamC1->setText(QCoreApplication::translate("InputStrDialog", "(1) Rover", nullptr));
        Stream1->setItemText(0, QCoreApplication::translate("InputStrDialog", "Serial", nullptr));
        Stream1->setItemText(1, QCoreApplication::translate("InputStrDialog", "TCP Client", nullptr));
        Stream1->setItemText(2, QCoreApplication::translate("InputStrDialog", "TCP Server", nullptr));
        Stream1->setItemText(3, QCoreApplication::translate("InputStrDialog", "NTRIP Client", nullptr));
        Stream1->setItemText(4, QCoreApplication::translate("InputStrDialog", "File", nullptr));

#if QT_CONFIG(tooltip)
        Stream1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnStr1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnStr1->setText(QCoreApplication::translate("InputStrDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnCmd1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCmd1->setText(QCoreApplication::translate("InputStrDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Format1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnRcvOpt1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnRcvOpt1->setText(QCoreApplication::translate("InputStrDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        StreamC2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        StreamC2->setText(QCoreApplication::translate("InputStrDialog", "(2) Base Station", nullptr));
        Stream2->setItemText(0, QCoreApplication::translate("InputStrDialog", "Serial", nullptr));
        Stream2->setItemText(1, QCoreApplication::translate("InputStrDialog", "TCP Client", nullptr));
        Stream2->setItemText(2, QCoreApplication::translate("InputStrDialog", "TCP Server", nullptr));
        Stream2->setItemText(3, QCoreApplication::translate("InputStrDialog", "NTRIP Client", nullptr));
        Stream2->setItemText(4, QCoreApplication::translate("InputStrDialog", "File", nullptr));

#if QT_CONFIG(tooltip)
        Stream2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnStr2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnStr2->setText(QCoreApplication::translate("InputStrDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnCmd2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCmd2->setText(QCoreApplication::translate("InputStrDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Format2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnRcvOpt2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnRcvOpt2->setText(QCoreApplication::translate("InputStrDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        StreamC3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        StreamC3->setText(QCoreApplication::translate("InputStrDialog", "(3) Correction", nullptr));
        Stream3->setItemText(0, QCoreApplication::translate("InputStrDialog", "Serial", nullptr));
        Stream3->setItemText(1, QCoreApplication::translate("InputStrDialog", "TCP Client", nullptr));
        Stream3->setItemText(2, QCoreApplication::translate("InputStrDialog", "TCP Server", nullptr));
        Stream3->setItemText(3, QCoreApplication::translate("InputStrDialog", "NTRIP Client", nullptr));
        Stream3->setItemText(4, QCoreApplication::translate("InputStrDialog", "File", nullptr));
        Stream3->setItemText(5, QCoreApplication::translate("InputStrDialog", "FTP", nullptr));
        Stream3->setItemText(6, QCoreApplication::translate("InputStrDialog", "HTTP", nullptr));

#if QT_CONFIG(tooltip)
        Stream3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnStr3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnStr3->setText(QCoreApplication::translate("InputStrDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnCmd3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCmd3->setText(QCoreApplication::translate("InputStrDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Format3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnRcvOpt3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnRcvOpt3->setText(QCoreApplication::translate("InputStrDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        LabelNmea->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelNmea->setText(QCoreApplication::translate("InputStrDialog", "Transmit NMEA GPGGA to Base Station", nullptr));
        NmeaReqL->setItemText(0, QCoreApplication::translate("InputStrDialog", "OFF", nullptr));
        NmeaReqL->setItemText(1, QCoreApplication::translate("InputStrDialog", "Latitude/Longitude", nullptr));
        NmeaReqL->setItemText(2, QCoreApplication::translate("InputStrDialog", "Single Solution", nullptr));

#if QT_CONFIG(tooltip)
        NmeaReqL->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        NmeaPos1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NmeaPos1->setText(QCoreApplication::translate("InputStrDialog", "0.000000000", nullptr));
#if QT_CONFIG(tooltip)
        NmeaPos2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NmeaPos2->setText(QCoreApplication::translate("InputStrDialog", "0.000000000", nullptr));
#if QT_CONFIG(tooltip)
        BtnPos->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnPos->setText(QCoreApplication::translate("InputStrDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        LabelF1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelF1->setText(QCoreApplication::translate("InputStrDialog", "Input File Paths", nullptr));
#if QT_CONFIG(tooltip)
        FilePath1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FilePath1->setText(QString());
#if QT_CONFIG(tooltip)
        BtnFile1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnFile1->setText(QCoreApplication::translate("InputStrDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        FilePath2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FilePath2->setText(QString());
#if QT_CONFIG(tooltip)
        BtnFile2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnFile2->setText(QCoreApplication::translate("InputStrDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        FilePath3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FilePath3->setText(QString());
#if QT_CONFIG(tooltip)
        BtnFile3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnFile3->setText(QCoreApplication::translate("InputStrDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        TimeTagC->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeTagC->setText(QCoreApplication::translate("InputStrDialog", "Time", nullptr));
        TimeSpeedL->setItemText(0, QString());
        TimeSpeedL->setItemText(1, QCoreApplication::translate("InputStrDialog", "x0.1", nullptr));
        TimeSpeedL->setItemText(2, QCoreApplication::translate("InputStrDialog", "x0.2", nullptr));
        TimeSpeedL->setItemText(3, QCoreApplication::translate("InputStrDialog", "x0.5", nullptr));
        TimeSpeedL->setItemText(4, QCoreApplication::translate("InputStrDialog", "x1", nullptr));
        TimeSpeedL->setItemText(5, QCoreApplication::translate("InputStrDialog", "x2", nullptr));
        TimeSpeedL->setItemText(6, QCoreApplication::translate("InputStrDialog", "x5", nullptr));
        TimeSpeedL->setItemText(7, QCoreApplication::translate("InputStrDialog", "x10", nullptr));

#if QT_CONFIG(tooltip)
        TimeSpeedL->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        LabelF3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelF3->setText(QCoreApplication::translate("InputStrDialog", "+", nullptr));
#if QT_CONFIG(tooltip)
        TimeStartE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeStartE->setText(QCoreApplication::translate("InputStrDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        LabelF2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelF2->setText(QCoreApplication::translate("InputStrDialog", "s", nullptr));
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("InputStrDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("InputStrDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputStrDialog: public Ui_InputStrDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRDLG_H
