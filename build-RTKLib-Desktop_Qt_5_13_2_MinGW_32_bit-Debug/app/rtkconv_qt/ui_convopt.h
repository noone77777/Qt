/********************************************************************************
** Form generated from reading UI file 'convopt.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVOPT_H
#define UI_CONVOPT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConvOptDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *Label9;
    QComboBox *RnxVer;
    QLabel *Label12;
    QLineEdit *RnxCode;
    QCheckBox *RnxFile;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout;
    QLabel *Label2;
    QLineEdit *RunBy;
    QLineEdit *Name0;
    QLineEdit *Name1;
    QLabel *Label10;
    QLineEdit *Comment0;
    QLineEdit *Comment1;
    QLabel *Label1;
    QLineEdit *Marker;
    QLineEdit *MarkerNo;
    QLineEdit *MarkerType;
    QLabel *Label4;
    QLineEdit *Rec0;
    QLineEdit *Rec1;
    QLineEdit *Rec2;
    QLineEdit *Ant0;
    QLineEdit *Ant1;
    QLineEdit *Ant2;
    QLabel *Label6;
    QCheckBox *AutoPos;
    QLineEdit *AppPos0;
    QLineEdit *AppPos1;
    QLineEdit *AppPos2;
    QLineEdit *AntDel0;
    QLineEdit *AntDel1;
    QLineEdit *AntDel2;
    QCheckBox *ScanObs;
    QCheckBox *OutIono;
    QCheckBox *OutTime;
    QCheckBox *OutLeaps;
    QLabel *Label7;
    QLabel *Label5;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QLineEdit *ExSats;
    QLabel *Label11;
    QGroupBox *GroupBox2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *Nav1;
    QCheckBox *Nav2;
    QCheckBox *Nav3;
    QCheckBox *Nav4;
    QCheckBox *Nav5;
    QCheckBox *Nav6;
    QCheckBox *Nav7;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *GroupBox3;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *Obs1;
    QCheckBox *Obs2;
    QCheckBox *Obs3;
    QCheckBox *Obs4;
    QGroupBox *GroupBox4;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *Freq1;
    QCheckBox *Freq2;
    QCheckBox *Freq3;
    QCheckBox *Freq4;
    QCheckBox *Freq5;
    QCheckBox *Freq6;
    QCheckBox *Freq7;
    QPushButton *BtnMask;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Label8;
    QLineEdit *RcvOption;
    QLabel *Label3;
    QComboBox *TraceLevel;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *ConvOptDialog)
    {
        if (ConvOptDialog->objectName().isEmpty())
            ConvOptDialog->setObjectName(QString::fromUtf8("ConvOptDialog"));
        ConvOptDialog->resize(636, 559);
        verticalLayout = new QVBoxLayout(ConvOptDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_2 = new QWidget(ConvOptDialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_5 = new QHBoxLayout(widget_2);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, -1, 0, 0);
        Label9 = new QLabel(widget_2);
        Label9->setObjectName(QString::fromUtf8("Label9"));
        Label9->setEnabled(true);

        horizontalLayout_5->addWidget(Label9);

        RnxVer = new QComboBox(widget_2);
        RnxVer->addItem(QString());
        RnxVer->addItem(QString());
        RnxVer->addItem(QString());
        RnxVer->addItem(QString());
        RnxVer->addItem(QString());
        RnxVer->addItem(QString());
        RnxVer->addItem(QString());
        RnxVer->setObjectName(QString::fromUtf8("RnxVer"));
        RnxVer->setEnabled(true);

        horizontalLayout_5->addWidget(RnxVer);

        Label12 = new QLabel(widget_2);
        Label12->setObjectName(QString::fromUtf8("Label12"));
        Label12->setEnabled(true);

        horizontalLayout_5->addWidget(Label12);

        RnxCode = new QLineEdit(widget_2);
        RnxCode->setObjectName(QString::fromUtf8("RnxCode"));
        RnxCode->setEnabled(true);

        horizontalLayout_5->addWidget(RnxCode);

        RnxFile = new QCheckBox(widget_2);
        RnxFile->setObjectName(QString::fromUtf8("RnxFile"));
        RnxFile->setChecked(false);

        horizontalLayout_5->addWidget(RnxFile);


        verticalLayout->addWidget(widget_2);

        GroupBox1 = new QGroupBox(ConvOptDialog);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        gridLayout = new QGridLayout(GroupBox1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Label2 = new QLabel(GroupBox1);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setEnabled(true);

        gridLayout->addWidget(Label2, 0, 0, 1, 1);

        RunBy = new QLineEdit(GroupBox1);
        RunBy->setObjectName(QString::fromUtf8("RunBy"));
        RunBy->setEnabled(true);

        gridLayout->addWidget(RunBy, 0, 2, 1, 1);

        Name0 = new QLineEdit(GroupBox1);
        Name0->setObjectName(QString::fromUtf8("Name0"));
        Name0->setEnabled(true);

        gridLayout->addWidget(Name0, 0, 3, 1, 2);

        Name1 = new QLineEdit(GroupBox1);
        Name1->setObjectName(QString::fromUtf8("Name1"));
        Name1->setEnabled(true);

        gridLayout->addWidget(Name1, 0, 5, 1, 2);

        Label10 = new QLabel(GroupBox1);
        Label10->setObjectName(QString::fromUtf8("Label10"));
        Label10->setEnabled(true);

        gridLayout->addWidget(Label10, 1, 0, 2, 1);

        Comment0 = new QLineEdit(GroupBox1);
        Comment0->setObjectName(QString::fromUtf8("Comment0"));
        Comment0->setEnabled(true);

        gridLayout->addWidget(Comment0, 1, 2, 1, 5);

        Comment1 = new QLineEdit(GroupBox1);
        Comment1->setObjectName(QString::fromUtf8("Comment1"));
        Comment1->setEnabled(true);

        gridLayout->addWidget(Comment1, 2, 2, 1, 5);

        Label1 = new QLabel(GroupBox1);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 3, 0, 1, 1);

        Marker = new QLineEdit(GroupBox1);
        Marker->setObjectName(QString::fromUtf8("Marker"));
        Marker->setEnabled(true);

        gridLayout->addWidget(Marker, 3, 2, 1, 1);

        MarkerNo = new QLineEdit(GroupBox1);
        MarkerNo->setObjectName(QString::fromUtf8("MarkerNo"));
        MarkerNo->setEnabled(true);

        gridLayout->addWidget(MarkerNo, 3, 3, 1, 2);

        MarkerType = new QLineEdit(GroupBox1);
        MarkerType->setObjectName(QString::fromUtf8("MarkerType"));
        MarkerType->setEnabled(true);

        gridLayout->addWidget(MarkerType, 3, 5, 1, 2);

        Label4 = new QLabel(GroupBox1);
        Label4->setObjectName(QString::fromUtf8("Label4"));
        Label4->setEnabled(true);

        gridLayout->addWidget(Label4, 4, 0, 1, 1);

        Rec0 = new QLineEdit(GroupBox1);
        Rec0->setObjectName(QString::fromUtf8("Rec0"));
        Rec0->setEnabled(true);

        gridLayout->addWidget(Rec0, 4, 2, 1, 1);

        Rec1 = new QLineEdit(GroupBox1);
        Rec1->setObjectName(QString::fromUtf8("Rec1"));
        Rec1->setEnabled(true);

        gridLayout->addWidget(Rec1, 4, 3, 1, 2);

        Rec2 = new QLineEdit(GroupBox1);
        Rec2->setObjectName(QString::fromUtf8("Rec2"));
        Rec2->setEnabled(true);

        gridLayout->addWidget(Rec2, 4, 5, 1, 2);

        Ant0 = new QLineEdit(GroupBox1);
        Ant0->setObjectName(QString::fromUtf8("Ant0"));
        Ant0->setEnabled(true);

        gridLayout->addWidget(Ant0, 5, 2, 1, 1);

        Ant1 = new QLineEdit(GroupBox1);
        Ant1->setObjectName(QString::fromUtf8("Ant1"));
        Ant1->setEnabled(true);

        gridLayout->addWidget(Ant1, 5, 3, 1, 2);

        Ant2 = new QLineEdit(GroupBox1);
        Ant2->setObjectName(QString::fromUtf8("Ant2"));
        Ant2->setEnabled(true);

        gridLayout->addWidget(Ant2, 5, 5, 1, 2);

        Label6 = new QLabel(GroupBox1);
        Label6->setObjectName(QString::fromUtf8("Label6"));
        Label6->setEnabled(true);

        gridLayout->addWidget(Label6, 6, 0, 1, 1);

        AutoPos = new QCheckBox(GroupBox1);
        AutoPos->setObjectName(QString::fromUtf8("AutoPos"));
        AutoPos->setChecked(false);

        gridLayout->addWidget(AutoPos, 6, 1, 1, 1);

        AppPos0 = new QLineEdit(GroupBox1);
        AppPos0->setObjectName(QString::fromUtf8("AppPos0"));
        AppPos0->setEnabled(true);

        gridLayout->addWidget(AppPos0, 6, 2, 1, 1);

        AppPos1 = new QLineEdit(GroupBox1);
        AppPos1->setObjectName(QString::fromUtf8("AppPos1"));
        AppPos1->setEnabled(true);

        gridLayout->addWidget(AppPos1, 6, 3, 1, 2);

        AppPos2 = new QLineEdit(GroupBox1);
        AppPos2->setObjectName(QString::fromUtf8("AppPos2"));
        AppPos2->setEnabled(true);

        gridLayout->addWidget(AppPos2, 6, 5, 1, 2);

        AntDel0 = new QLineEdit(GroupBox1);
        AntDel0->setObjectName(QString::fromUtf8("AntDel0"));
        AntDel0->setEnabled(true);

        gridLayout->addWidget(AntDel0, 7, 2, 1, 1);

        AntDel1 = new QLineEdit(GroupBox1);
        AntDel1->setObjectName(QString::fromUtf8("AntDel1"));
        AntDel1->setEnabled(true);

        gridLayout->addWidget(AntDel1, 7, 3, 1, 2);

        AntDel2 = new QLineEdit(GroupBox1);
        AntDel2->setObjectName(QString::fromUtf8("AntDel2"));
        AntDel2->setEnabled(true);

        gridLayout->addWidget(AntDel2, 7, 5, 1, 2);

        ScanObs = new QCheckBox(GroupBox1);
        ScanObs->setObjectName(QString::fromUtf8("ScanObs"));
        ScanObs->setChecked(false);

        gridLayout->addWidget(ScanObs, 8, 0, 1, 1);

        OutIono = new QCheckBox(GroupBox1);
        OutIono->setObjectName(QString::fromUtf8("OutIono"));
        OutIono->setChecked(false);

        gridLayout->addWidget(OutIono, 8, 2, 1, 2);

        OutTime = new QCheckBox(GroupBox1);
        OutTime->setObjectName(QString::fromUtf8("OutTime"));
        OutTime->setChecked(false);

        gridLayout->addWidget(OutTime, 8, 4, 1, 2);

        OutLeaps = new QCheckBox(GroupBox1);
        OutLeaps->setObjectName(QString::fromUtf8("OutLeaps"));
        OutLeaps->setChecked(false);

        gridLayout->addWidget(OutLeaps, 8, 6, 1, 1);

        Label7 = new QLabel(GroupBox1);
        Label7->setObjectName(QString::fromUtf8("Label7"));
        Label7->setEnabled(true);

        gridLayout->addWidget(Label7, 7, 0, 1, 1);

        Label5 = new QLabel(GroupBox1);
        Label5->setObjectName(QString::fromUtf8("Label5"));
        Label5->setEnabled(true);

        gridLayout->addWidget(Label5, 5, 0, 1, 1);


        verticalLayout->addWidget(GroupBox1);

        widget_3 = new QWidget(ConvOptDialog);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        ExSats = new QLineEdit(widget_3);
        ExSats->setObjectName(QString::fromUtf8("ExSats"));
        ExSats->setEnabled(true);

        gridLayout_2->addWidget(ExSats, 2, 2, 1, 1);

        Label11 = new QLabel(widget_3);
        Label11->setObjectName(QString::fromUtf8("Label11"));
        Label11->setEnabled(true);

        gridLayout_2->addWidget(Label11, 1, 2, 1, 1);

        GroupBox2 = new QGroupBox(widget_3);
        GroupBox2->setObjectName(QString::fromUtf8("GroupBox2"));
        horizontalLayout = new QHBoxLayout(GroupBox2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Nav1 = new QCheckBox(GroupBox2);
        Nav1->setObjectName(QString::fromUtf8("Nav1"));
        Nav1->setChecked(true);

        horizontalLayout->addWidget(Nav1);

        Nav2 = new QCheckBox(GroupBox2);
        Nav2->setObjectName(QString::fromUtf8("Nav2"));
        Nav2->setChecked(false);

        horizontalLayout->addWidget(Nav2);

        Nav3 = new QCheckBox(GroupBox2);
        Nav3->setObjectName(QString::fromUtf8("Nav3"));
        Nav3->setChecked(false);

        horizontalLayout->addWidget(Nav3);

        Nav4 = new QCheckBox(GroupBox2);
        Nav4->setObjectName(QString::fromUtf8("Nav4"));
        Nav4->setChecked(false);

        horizontalLayout->addWidget(Nav4);

        Nav5 = new QCheckBox(GroupBox2);
        Nav5->setObjectName(QString::fromUtf8("Nav5"));
        Nav5->setChecked(false);

        horizontalLayout->addWidget(Nav5);

        Nav6 = new QCheckBox(GroupBox2);
        Nav6->setObjectName(QString::fromUtf8("Nav6"));
        Nav6->setChecked(false);

        horizontalLayout->addWidget(Nav6);

        Nav7 = new QCheckBox(GroupBox2);
        Nav7->setObjectName(QString::fromUtf8("Nav7"));

        horizontalLayout->addWidget(Nav7);


        gridLayout_2->addWidget(GroupBox2, 1, 1, 2, 1);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(ConvOptDialog);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_6 = new QHBoxLayout(widget_4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        GroupBox3 = new QGroupBox(widget_4);
        GroupBox3->setObjectName(QString::fromUtf8("GroupBox3"));
        horizontalLayout_2 = new QHBoxLayout(GroupBox3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Obs1 = new QCheckBox(GroupBox3);
        Obs1->setObjectName(QString::fromUtf8("Obs1"));
        Obs1->setChecked(true);

        horizontalLayout_2->addWidget(Obs1);

        Obs2 = new QCheckBox(GroupBox3);
        Obs2->setObjectName(QString::fromUtf8("Obs2"));
        Obs2->setChecked(true);

        horizontalLayout_2->addWidget(Obs2);

        Obs3 = new QCheckBox(GroupBox3);
        Obs3->setObjectName(QString::fromUtf8("Obs3"));
        Obs3->setChecked(true);

        horizontalLayout_2->addWidget(Obs3);

        Obs4 = new QCheckBox(GroupBox3);
        Obs4->setObjectName(QString::fromUtf8("Obs4"));
        Obs4->setChecked(true);

        horizontalLayout_2->addWidget(Obs4);


        horizontalLayout_6->addWidget(GroupBox3);

        GroupBox4 = new QGroupBox(widget_4);
        GroupBox4->setObjectName(QString::fromUtf8("GroupBox4"));
        horizontalLayout_3 = new QHBoxLayout(GroupBox4);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Freq1 = new QCheckBox(GroupBox4);
        Freq1->setObjectName(QString::fromUtf8("Freq1"));
        Freq1->setChecked(true);

        horizontalLayout_3->addWidget(Freq1);

        Freq2 = new QCheckBox(GroupBox4);
        Freq2->setObjectName(QString::fromUtf8("Freq2"));
        Freq2->setChecked(true);

        horizontalLayout_3->addWidget(Freq2);

        Freq3 = new QCheckBox(GroupBox4);
        Freq3->setObjectName(QString::fromUtf8("Freq3"));
        Freq3->setChecked(false);

        horizontalLayout_3->addWidget(Freq3);

        Freq4 = new QCheckBox(GroupBox4);
        Freq4->setObjectName(QString::fromUtf8("Freq4"));
        Freq4->setChecked(false);

        horizontalLayout_3->addWidget(Freq4);

        Freq5 = new QCheckBox(GroupBox4);
        Freq5->setObjectName(QString::fromUtf8("Freq5"));
        Freq5->setChecked(false);

        horizontalLayout_3->addWidget(Freq5);

        Freq6 = new QCheckBox(GroupBox4);
        Freq6->setObjectName(QString::fromUtf8("Freq6"));
        Freq6->setChecked(false);

        horizontalLayout_3->addWidget(Freq6);

        Freq7 = new QCheckBox(GroupBox4);
        Freq7->setObjectName(QString::fromUtf8("Freq7"));

        horizontalLayout_3->addWidget(Freq7);

        BtnMask = new QPushButton(GroupBox4);
        BtnMask->setObjectName(QString::fromUtf8("BtnMask"));
        BtnMask->setEnabled(true);

        horizontalLayout_3->addWidget(BtnMask);


        horizontalLayout_6->addWidget(GroupBox4);


        verticalLayout->addWidget(widget_4);

        widget = new QWidget(ConvOptDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        Label8 = new QLabel(widget);
        Label8->setObjectName(QString::fromUtf8("Label8"));
        Label8->setEnabled(true);

        horizontalLayout_4->addWidget(Label8);

        RcvOption = new QLineEdit(widget);
        RcvOption->setObjectName(QString::fromUtf8("RcvOption"));
        RcvOption->setEnabled(true);

        horizontalLayout_4->addWidget(RcvOption);

        Label3 = new QLabel(widget);
        Label3->setObjectName(QString::fromUtf8("Label3"));
        Label3->setEnabled(true);

        horizontalLayout_4->addWidget(Label3);

        TraceLevel = new QComboBox(widget);
        TraceLevel->addItem(QString());
        TraceLevel->addItem(QString());
        TraceLevel->addItem(QString());
        TraceLevel->addItem(QString());
        TraceLevel->addItem(QString());
        TraceLevel->addItem(QString());
        TraceLevel->setObjectName(QString::fromUtf8("TraceLevel"));
        TraceLevel->setEnabled(true);

        horizontalLayout_4->addWidget(TraceLevel);

        BtnOk = new QPushButton(widget);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        horizontalLayout_4->addWidget(BtnOk);

        BtnCancel = new QPushButton(widget);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);

        horizontalLayout_4->addWidget(BtnCancel);


        verticalLayout->addWidget(widget);

        GroupBox1->raise();
        widget->raise();
        widget_2->raise();
        widget_3->raise();
        widget_4->raise();

        retranslateUi(ConvOptDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(ConvOptDialog);
    } // setupUi

    void retranslateUi(QWidget *ConvOptDialog)
    {
        ConvOptDialog->setWindowTitle(QCoreApplication::translate("ConvOptDialog", "Options", nullptr));
#if QT_CONFIG(tooltip)
        ConvOptDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label9->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label9->setText(QCoreApplication::translate("ConvOptDialog", "RINEX Version", nullptr));
        RnxVer->setItemText(0, QCoreApplication::translate("ConvOptDialog", "2.10", nullptr));
        RnxVer->setItemText(1, QCoreApplication::translate("ConvOptDialog", "2.11", nullptr));
        RnxVer->setItemText(2, QCoreApplication::translate("ConvOptDialog", "2.12", nullptr));
        RnxVer->setItemText(3, QCoreApplication::translate("ConvOptDialog", "3.00", nullptr));
        RnxVer->setItemText(4, QCoreApplication::translate("ConvOptDialog", "3.01", nullptr));
        RnxVer->setItemText(5, QCoreApplication::translate("ConvOptDialog", "3.02", nullptr));
        RnxVer->setItemText(6, QCoreApplication::translate("ConvOptDialog", "3.03", nullptr));

#if QT_CONFIG(tooltip)
        RnxVer->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label12->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label12->setText(QCoreApplication::translate("ConvOptDialog", "Station ID", nullptr));
#if QT_CONFIG(tooltip)
        RnxCode->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RnxCode->setText(QCoreApplication::translate("ConvOptDialog", "0000", nullptr));
#if QT_CONFIG(tooltip)
        RnxFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RnxFile->setText(QCoreApplication::translate("ConvOptDialog", "RINEX Name", nullptr));
#if QT_CONFIG(tooltip)
        GroupBox1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        GroupBox1->setTitle(QString());
#if QT_CONFIG(tooltip)
        Label2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label2->setText(QCoreApplication::translate("ConvOptDialog", "RunBy/Obsv/Agency", nullptr));
#if QT_CONFIG(tooltip)
        RunBy->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RunBy->setText(QString());
#if QT_CONFIG(tooltip)
        Name0->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Name0->setText(QString());
#if QT_CONFIG(tooltip)
        Name1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Name1->setText(QString());
#if QT_CONFIG(tooltip)
        Label10->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label10->setText(QCoreApplication::translate("ConvOptDialog", "Comment", nullptr));
#if QT_CONFIG(tooltip)
        Comment0->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Comment0->setText(QString());
#if QT_CONFIG(tooltip)
        Comment1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Comment1->setText(QString());
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("ConvOptDialog", "Maker Name/#/Type", nullptr));
#if QT_CONFIG(tooltip)
        Marker->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Marker->setText(QString());
#if QT_CONFIG(tooltip)
        MarkerNo->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MarkerNo->setText(QString());
#if QT_CONFIG(tooltip)
        MarkerType->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MarkerType->setText(QString());
#if QT_CONFIG(tooltip)
        Label4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label4->setText(QCoreApplication::translate("ConvOptDialog", "Rec #/Type/Vers", nullptr));
#if QT_CONFIG(tooltip)
        Rec0->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Rec0->setText(QString());
#if QT_CONFIG(tooltip)
        Rec1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Rec1->setText(QString());
#if QT_CONFIG(tooltip)
        Rec2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Rec2->setText(QString());
#if QT_CONFIG(tooltip)
        Ant0->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Ant0->setText(QString());
#if QT_CONFIG(tooltip)
        Ant1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Ant1->setText(QString());
#if QT_CONFIG(tooltip)
        Ant2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Ant2->setText(QString());
#if QT_CONFIG(tooltip)
        Label6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label6->setText(QCoreApplication::translate("ConvOptDialog", "Approx Pos XYZ", nullptr));
#if QT_CONFIG(tooltip)
        AutoPos->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        AutoPos->setText(QString());
#if QT_CONFIG(tooltip)
        AppPos0->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        AppPos0->setText(QCoreApplication::translate("ConvOptDialog", "0.0000", nullptr));
#if QT_CONFIG(tooltip)
        AppPos1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        AppPos1->setText(QCoreApplication::translate("ConvOptDialog", "0.0000", nullptr));
#if QT_CONFIG(tooltip)
        AppPos2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        AppPos2->setText(QCoreApplication::translate("ConvOptDialog", "0.0000", nullptr));
#if QT_CONFIG(tooltip)
        AntDel0->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        AntDel0->setText(QCoreApplication::translate("ConvOptDialog", "0.0000", nullptr));
#if QT_CONFIG(tooltip)
        AntDel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        AntDel1->setText(QCoreApplication::translate("ConvOptDialog", "0.0000", nullptr));
#if QT_CONFIG(tooltip)
        AntDel2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        AntDel2->setText(QCoreApplication::translate("ConvOptDialog", "0.0000", nullptr));
#if QT_CONFIG(tooltip)
        ScanObs->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ScanObs->setText(QCoreApplication::translate("ConvOptDialog", "Scan Obs Types", nullptr));
#if QT_CONFIG(tooltip)
        OutIono->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        OutIono->setText(QCoreApplication::translate("ConvOptDialog", "Iono Corr", nullptr));
#if QT_CONFIG(tooltip)
        OutTime->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        OutTime->setText(QCoreApplication::translate("ConvOptDialog", "Time Corr", nullptr));
#if QT_CONFIG(tooltip)
        OutLeaps->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        OutLeaps->setText(QCoreApplication::translate("ConvOptDialog", "Leap Sec", nullptr));
#if QT_CONFIG(tooltip)
        Label7->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label7->setText(QCoreApplication::translate("ConvOptDialog", "Ant Delta H/E/N", nullptr));
#if QT_CONFIG(tooltip)
        Label5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label5->setText(QCoreApplication::translate("ConvOptDialog", "Ant #/Type", nullptr));
#if QT_CONFIG(tooltip)
        ExSats->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ExSats->setText(QString());
#if QT_CONFIG(tooltip)
        Label11->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label11->setText(QCoreApplication::translate("ConvOptDialog", "Excluded Satellites", nullptr));
#if QT_CONFIG(tooltip)
        GroupBox2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        GroupBox2->setTitle(QCoreApplication::translate("ConvOptDialog", "Satellite Systems", nullptr));
#if QT_CONFIG(tooltip)
        Nav1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Nav1->setText(QCoreApplication::translate("ConvOptDialog", "GPS", nullptr));
#if QT_CONFIG(tooltip)
        Nav2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Nav2->setText(QCoreApplication::translate("ConvOptDialog", "GLO", nullptr));
#if QT_CONFIG(tooltip)
        Nav3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Nav3->setText(QCoreApplication::translate("ConvOptDialog", "GAL", nullptr));
#if QT_CONFIG(tooltip)
        Nav4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Nav4->setText(QCoreApplication::translate("ConvOptDialog", "QZS", nullptr));
#if QT_CONFIG(tooltip)
        Nav5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Nav5->setText(QCoreApplication::translate("ConvOptDialog", "SBS", nullptr));
#if QT_CONFIG(tooltip)
        Nav6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Nav6->setText(QCoreApplication::translate("ConvOptDialog", "BDS", nullptr));
        Nav7->setText(QCoreApplication::translate("ConvOptDialog", "IRN", nullptr));
#if QT_CONFIG(tooltip)
        GroupBox3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        GroupBox3->setTitle(QCoreApplication::translate("ConvOptDialog", "Observation Types", nullptr));
#if QT_CONFIG(tooltip)
        Obs1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Obs1->setText(QCoreApplication::translate("ConvOptDialog", "C", nullptr));
#if QT_CONFIG(tooltip)
        Obs2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Obs2->setText(QCoreApplication::translate("ConvOptDialog", "L", nullptr));
#if QT_CONFIG(tooltip)
        Obs3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Obs3->setText(QCoreApplication::translate("ConvOptDialog", "D", nullptr));
#if QT_CONFIG(tooltip)
        Obs4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Obs4->setText(QCoreApplication::translate("ConvOptDialog", "S", nullptr));
#if QT_CONFIG(tooltip)
        GroupBox4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        GroupBox4->setTitle(QCoreApplication::translate("ConvOptDialog", "Frequencies", nullptr));
#if QT_CONFIG(tooltip)
        Freq1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Freq1->setText(QCoreApplication::translate("ConvOptDialog", "L1", nullptr));
#if QT_CONFIG(tooltip)
        Freq2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Freq2->setText(QCoreApplication::translate("ConvOptDialog", "L2", nullptr));
#if QT_CONFIG(tooltip)
        Freq3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Freq3->setText(QCoreApplication::translate("ConvOptDialog", "L5/L3", nullptr));
#if QT_CONFIG(tooltip)
        Freq4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Freq4->setText(QCoreApplication::translate("ConvOptDialog", "L6", nullptr));
#if QT_CONFIG(tooltip)
        Freq5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Freq5->setText(QCoreApplication::translate("ConvOptDialog", "L7", nullptr));
#if QT_CONFIG(tooltip)
        Freq6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Freq6->setText(QCoreApplication::translate("ConvOptDialog", "L8", nullptr));
        Freq7->setText(QCoreApplication::translate("ConvOptDialog", "L9", nullptr));
#if QT_CONFIG(tooltip)
        BtnMask->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnMask->setText(QCoreApplication::translate("ConvOptDialog", "Mask...", nullptr));
#if QT_CONFIG(tooltip)
        Label8->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label8->setText(QCoreApplication::translate("ConvOptDialog", "Option", nullptr));
#if QT_CONFIG(tooltip)
        RcvOption->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RcvOption->setText(QString());
#if QT_CONFIG(tooltip)
        Label3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label3->setText(QCoreApplication::translate("ConvOptDialog", "Debug", nullptr));
        TraceLevel->setItemText(0, QCoreApplication::translate("ConvOptDialog", "OFF", nullptr));
        TraceLevel->setItemText(1, QCoreApplication::translate("ConvOptDialog", "Level 1", nullptr));
        TraceLevel->setItemText(2, QCoreApplication::translate("ConvOptDialog", "Level 2", nullptr));
        TraceLevel->setItemText(3, QCoreApplication::translate("ConvOptDialog", "Level 3", nullptr));
        TraceLevel->setItemText(4, QCoreApplication::translate("ConvOptDialog", "Level 4", nullptr));
        TraceLevel->setItemText(5, QCoreApplication::translate("ConvOptDialog", "Level 5", nullptr));

#if QT_CONFIG(tooltip)
        TraceLevel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("ConvOptDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("ConvOptDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConvOptDialog: public Ui_ConvOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVOPT_H
