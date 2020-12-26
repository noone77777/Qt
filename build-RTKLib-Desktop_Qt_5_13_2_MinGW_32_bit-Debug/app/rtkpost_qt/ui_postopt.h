/********************************************************************************
** Form generated from reading UI file 'postopt.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTOPT_H
#define UI_POSTOPT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptDialog
{
public:
    QGridLayout *gridLayout_10;
    QPushButton *BtnExtOpt;
    QPushButton *BtnOk;
    QPushButton *BtnLoad;
    QPushButton *BtnSave;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *Label87;
    QLabel *Label5;
    QLabel *Label82;
    QLabel *Label83;
    QLabel *Label86;
    QPushButton *BtnCancel;
    QTabWidget *Misc;
    QWidget *TabSheet1;
    QGridLayout *gridLayout;
    QComboBox *PosMode;
    QLabel *LabelPosMode;
    QLabel *Label8;
    QComboBox *Solution;
    QComboBox *ElMask;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *PosOpt1;
    QCheckBox *PosOpt2;
    QCheckBox *PosOpt3;
    QCheckBox *PosOpt4;
    QCheckBox *PosOpt5;
    QCheckBox *PosOpt6;
    QLabel *LabelFreq;
    QComboBox *Freq;
    QLabel *LabelElMask;
    QComboBox *TideCorr;
    QComboBox *DynamicModel;
    QLabel *Label3;
    QComboBox *IonoOpt;
    QPushButton *BtnMask;
    QLabel *Label9;
    QComboBox *TropOpt;
    QLabel *Label32;
    QComboBox *SatEphem;
    QLabel *Label35;
    QLineEdit *ExSats;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *NavSys1;
    QCheckBox *NavSys2;
    QCheckBox *NavSys3;
    QCheckBox *NavSys4;
    QCheckBox *NavSys5;
    QCheckBox *NavSys6;
    QCheckBox *NavSys7;
    QWidget *TabSheet2;
    QGridLayout *gridLayout_2;
    QLabel *Label25;
    QComboBox *AmbRes;
    QComboBox *GloAmbRes;
    QComboBox *BdsAmbRes;
    QLabel *LabelRatio;
    QLineEdit *ValidThresAR;
    QLabel *LabelConf;
    QLineEdit *ThresAR2;
    QLineEdit *ThresAR3;
    QLabel *Label13;
    QLineEdit *LockCntFixAmb;
    QLineEdit *ElMaskAR;
    QLabel *LabelHold;
    QLineEdit *FixCntHoldAmb;
    QLineEdit *ElMaskHold;
    QLabel *Label22;
    QLineEdit *OutCntResetAmb;
    QLineEdit *SlipThres;
    QLabel *Label14;
    QLineEdit *MaxAgeDiff;
    QComboBox *SyncSol;
    QLabel *Label11;
    QLineEdit *RejectGdop;
    QLineEdit *RejectThres;
    QLabel *Label37;
    QLineEdit *ARIter;
    QLineEdit *NumIter;
    QCheckBox *BaselineConst;
    QLineEdit *BaselineLen;
    QLineEdit *BaselineSig;
    QWidget *TabSheet3;
    QGridLayout *gridLayout_3;
    QLabel *LabelSolFormat;
    QComboBox *SolFormat;
    QLabel *Label20;
    QComboBox *OutputHead;
    QComboBox *OutputOpt;
    QLabel *LabelTimeFormat;
    QComboBox *TimeFormat;
    QLineEdit *TimeDecimal;
    QLabel *LabelLatLonFormat;
    QComboBox *LatLonFormat;
    QLabel *LabelFieldSep;
    QLineEdit *FieldSep;
    QLabel *Label2;
    QComboBox *OutputDatum;
    QComboBox *OutputHeight;
    QLabel *Label18;
    QComboBox *OutputGeoid;
    QLabel *Label31;
    QComboBox *SolStatic;
    QLabel *Label21;
    QLineEdit *NmeaIntv1;
    QLineEdit *NmeaIntv2;
    QLabel *Label36;
    QComboBox *DebugStatus;
    QComboBox *DebugTrace;
    QWidget *TabSheet4;
    QGridLayout *gridLayout_11;
    QGroupBox *GroupBox3;
    QGridLayout *gridLayout_4;
    QLineEdit *MeasErrR1;
    QLineEdit *MeasErrR2;
    QLabel *Label7;
    QLineEdit *MeasErr2;
    QLineEdit *MeasErr3;
    QLabel *Label16;
    QLineEdit *MeasErr4;
    QLabel *Label64;
    QLineEdit *MeasErr5;
    QLabel *Label6;
    QLabel *Label29;
    QLineEdit *SatClkStab;
    QGroupBox *GroupBox4;
    QGridLayout *gridLayout_5;
    QLabel *Label26;
    QLineEdit *PrNoise2;
    QLabel *Label27;
    QLabel *Label10;
    QLineEdit *PrNoise4;
    QLineEdit *PrNoise5;
    QLabel *Label28;
    QLineEdit *PrNoise3;
    QLineEdit *PrNoise1;
    QWidget *TabSheet5;
    QGridLayout *gridLayout_13;
    QPushButton *BtnStaPosView;
    QPushButton *BtnStaPosFile;
    QLineEdit *StaPosFile;
    QLabel *Label4;
    QLabel *Label30;
    QGroupBox *GroupRefAnt;
    QGridLayout *gridLayout_6;
    QComboBox *RefPosType;
    QPushButton *BtnRefPos;
    QLineEdit *RefPos1;
    QLineEdit *RefPos2;
    QLineEdit *RefPos3;
    QCheckBox *RefAntPcv;
    QLabel *LabelRefAntD;
    QComboBox *RefAnt;
    QLineEdit *RefAntE;
    QLineEdit *RefAntN;
    QLineEdit *RefAntU;
    QGroupBox *GroupRovAnt;
    QGridLayout *gridLayout_7;
    QComboBox *RovPosType;
    QPushButton *BtnRovPos;
    QLineEdit *RovPos1;
    QLineEdit *RovPos2;
    QLineEdit *RovPos3;
    QCheckBox *RovAntPcv;
    QLabel *LabelRovAntD;
    QComboBox *RovAnt;
    QLineEdit *RovAntE;
    QLineEdit *RovAntN;
    QLineEdit *RovAntU;
    QWidget *TabSheet7;
    QGridLayout *gridLayout_8;
    QLabel *Label38;
    QPushButton *BtnSatPcvView;
    QPushButton *BtnAntPcvView;
    QLineEdit *SatPcvFile;
    QPushButton *BtnSatPcvFile;
    QLineEdit *AntPcvFile;
    QPushButton *BtnAntPcvFile;
    QLineEdit *GeoidDataFile;
    QPushButton *BtnGeoidDataFile;
    QLabel *Label15;
    QPushButton *BtnDCBView;
    QLineEdit *DCBFile;
    QPushButton *BtnDCBFile;
    QLabel *Label17;
    QPushButton *BtnEOPView;
    QLineEdit *EOPFile;
    QPushButton *BtnEOPFile;
    QLabel *Label34;
    QPushButton *BtnBLQFileView;
    QLineEdit *BLQFile;
    QPushButton *BtnBLQFile;
    QLabel *Label1;
    QLineEdit *IonoFile;
    QPushButton *BtnIonoFile;
    QLabel *Label63;
    QWidget *TabSheet6;
    QGridLayout *gridLayout_9;
    QWidget *Panel1;
    QGridLayout *gridLayout_12;
    QPushButton *BtnHelp;
    QLabel *Label46;
    QLabel *Label62;
    QLabel *Label43;
    QLabel *Label65;
    QLabel *Label41;
    QComboBox *IntpRefObs;
    QLabel *Label42;
    QComboBox *ComboBox1;
    QLabel *Label40;
    QLineEdit *SbasSat;
    QLabel *Label60;
    QLineEdit *RnxOpts1;
    QLabel *Label12;
    QLineEdit *RnxOpts2;
    QLabel *Label23;
    QLineEdit *PPPOpts;
    QLabel *Label45;
    QLabel *Label19;
    QLabel *Label44;
    QPlainTextEdit *RovList;
    QPlainTextEdit *BaseList;

    void setupUi(QWidget *OptDialog)
    {
        if (OptDialog->objectName().isEmpty())
            OptDialog->setObjectName(QString::fromUtf8("OptDialog"));
        OptDialog->resize(643, 587);
        gridLayout_10 = new QGridLayout(OptDialog);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        BtnExtOpt = new QPushButton(OptDialog);
        BtnExtOpt->setObjectName(QString::fromUtf8("BtnExtOpt"));
        BtnExtOpt->setEnabled(false);
        BtnExtOpt->setFlat(false);

        gridLayout_10->addWidget(BtnExtOpt, 2, 0, 1, 1);

        BtnOk = new QPushButton(OptDialog);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setFlat(false);

        gridLayout_10->addWidget(BtnOk, 2, 6, 1, 2);

        BtnLoad = new QPushButton(OptDialog);
        BtnLoad->setObjectName(QString::fromUtf8("BtnLoad"));
        BtnLoad->setEnabled(true);
        BtnLoad->setFlat(false);

        gridLayout_10->addWidget(BtnLoad, 2, 1, 1, 2);

        BtnSave = new QPushButton(OptDialog);
        BtnSave->setObjectName(QString::fromUtf8("BtnSave"));
        BtnSave->setEnabled(true);
        BtnSave->setFlat(false);

        gridLayout_10->addWidget(BtnSave, 2, 3, 1, 2);

        widget = new QWidget(OptDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Label87 = new QLabel(widget);
        Label87->setObjectName(QString::fromUtf8("Label87"));
        Label87->setEnabled(true);

        horizontalLayout->addWidget(Label87);

        Label5 = new QLabel(widget);
        Label5->setObjectName(QString::fromUtf8("Label5"));
        Label5->setEnabled(true);

        horizontalLayout->addWidget(Label5);

        Label82 = new QLabel(widget);
        Label82->setObjectName(QString::fromUtf8("Label82"));
        Label82->setEnabled(true);

        horizontalLayout->addWidget(Label82);

        Label83 = new QLabel(widget);
        Label83->setObjectName(QString::fromUtf8("Label83"));
        Label83->setEnabled(true);

        horizontalLayout->addWidget(Label83);

        Label86 = new QLabel(widget);
        Label86->setObjectName(QString::fromUtf8("Label86"));
        Label86->setEnabled(true);

        horizontalLayout->addWidget(Label86);


        gridLayout_10->addWidget(widget, 3, 5, 1, 4);

        BtnCancel = new QPushButton(OptDialog);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);
        BtnCancel->setFlat(false);

        gridLayout_10->addWidget(BtnCancel, 2, 8, 1, 1);

        Misc = new QTabWidget(OptDialog);
        Misc->setObjectName(QString::fromUtf8("Misc"));
        Misc->setTabPosition(QTabWidget::North);
        TabSheet1 = new QWidget();
        TabSheet1->setObjectName(QString::fromUtf8("TabSheet1"));
        gridLayout = new QGridLayout(TabSheet1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        PosMode = new QComboBox(TabSheet1);
        PosMode->addItem(QString());
        PosMode->addItem(QString());
        PosMode->addItem(QString());
        PosMode->addItem(QString());
        PosMode->addItem(QString());
        PosMode->addItem(QString());
        PosMode->addItem(QString());
        PosMode->addItem(QString());
        PosMode->addItem(QString());
        PosMode->setObjectName(QString::fromUtf8("PosMode"));
        PosMode->setEnabled(true);

        gridLayout->addWidget(PosMode, 1, 1, 1, 2);

        LabelPosMode = new QLabel(TabSheet1);
        LabelPosMode->setObjectName(QString::fromUtf8("LabelPosMode"));
        LabelPosMode->setEnabled(true);

        gridLayout->addWidget(LabelPosMode, 1, 0, 1, 1);

        Label8 = new QLabel(TabSheet1);
        Label8->setObjectName(QString::fromUtf8("Label8"));
        Label8->setEnabled(true);

        gridLayout->addWidget(Label8, 5, 0, 1, 1);

        Solution = new QComboBox(TabSheet1);
        Solution->addItem(QString());
        Solution->addItem(QString());
        Solution->addItem(QString());
        Solution->setObjectName(QString::fromUtf8("Solution"));
        Solution->setEnabled(true);

        gridLayout->addWidget(Solution, 2, 2, 1, 1);

        ElMask = new QComboBox(TabSheet1);
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->setObjectName(QString::fromUtf8("ElMask"));
        ElMask->setEnabled(true);

        gridLayout->addWidget(ElMask, 3, 1, 1, 1);

        widget_2 = new QWidget(TabSheet1);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        PosOpt1 = new QCheckBox(widget_2);
        PosOpt1->setObjectName(QString::fromUtf8("PosOpt1"));
        PosOpt1->setChecked(false);

        horizontalLayout_2->addWidget(PosOpt1);

        PosOpt2 = new QCheckBox(widget_2);
        PosOpt2->setObjectName(QString::fromUtf8("PosOpt2"));
        PosOpt2->setChecked(false);

        horizontalLayout_2->addWidget(PosOpt2);

        PosOpt3 = new QCheckBox(widget_2);
        PosOpt3->setObjectName(QString::fromUtf8("PosOpt3"));
        PosOpt3->setChecked(false);

        horizontalLayout_2->addWidget(PosOpt3);

        PosOpt4 = new QCheckBox(widget_2);
        PosOpt4->setObjectName(QString::fromUtf8("PosOpt4"));
        PosOpt4->setChecked(false);

        horizontalLayout_2->addWidget(PosOpt4);

        PosOpt5 = new QCheckBox(widget_2);
        PosOpt5->setObjectName(QString::fromUtf8("PosOpt5"));
        PosOpt5->setChecked(false);

        horizontalLayout_2->addWidget(PosOpt5);

        PosOpt6 = new QCheckBox(widget_2);
        PosOpt6->setObjectName(QString::fromUtf8("PosOpt6"));
        PosOpt6->setChecked(false);

        horizontalLayout_2->addWidget(PosOpt6);


        gridLayout->addWidget(widget_2, 11, 0, 1, 3);

        LabelFreq = new QLabel(TabSheet1);
        LabelFreq->setObjectName(QString::fromUtf8("LabelFreq"));
        LabelFreq->setEnabled(true);

        gridLayout->addWidget(LabelFreq, 2, 0, 1, 1);

        Freq = new QComboBox(TabSheet1);
        Freq->addItem(QString());
        Freq->addItem(QString());
        Freq->addItem(QString());
        Freq->addItem(QString());
        Freq->setObjectName(QString::fromUtf8("Freq"));
        Freq->setEnabled(true);

        gridLayout->addWidget(Freq, 2, 1, 1, 1);

        LabelElMask = new QLabel(TabSheet1);
        LabelElMask->setObjectName(QString::fromUtf8("LabelElMask"));
        LabelElMask->setEnabled(true);

        gridLayout->addWidget(LabelElMask, 3, 0, 1, 1);

        TideCorr = new QComboBox(TabSheet1);
        TideCorr->addItem(QString());
        TideCorr->addItem(QString());
        TideCorr->addItem(QString());
        TideCorr->setObjectName(QString::fromUtf8("TideCorr"));
        TideCorr->setEnabled(true);

        gridLayout->addWidget(TideCorr, 4, 2, 1, 1);

        DynamicModel = new QComboBox(TabSheet1);
        DynamicModel->addItem(QString());
        DynamicModel->addItem(QString());
        DynamicModel->setObjectName(QString::fromUtf8("DynamicModel"));
        DynamicModel->setEnabled(true);

        gridLayout->addWidget(DynamicModel, 4, 1, 1, 1);

        Label3 = new QLabel(TabSheet1);
        Label3->setObjectName(QString::fromUtf8("Label3"));
        Label3->setEnabled(true);

        gridLayout->addWidget(Label3, 4, 0, 1, 1);

        IonoOpt = new QComboBox(TabSheet1);
        IonoOpt->addItem(QString());
        IonoOpt->addItem(QString());
        IonoOpt->addItem(QString());
        IonoOpt->addItem(QString());
        IonoOpt->addItem(QString());
        IonoOpt->addItem(QString());
        IonoOpt->addItem(QString());
        IonoOpt->addItem(QString());
        IonoOpt->addItem(QString());
        IonoOpt->setObjectName(QString::fromUtf8("IonoOpt"));
        IonoOpt->setEnabled(true);

        gridLayout->addWidget(IonoOpt, 5, 1, 1, 2);

        BtnMask = new QPushButton(TabSheet1);
        BtnMask->setObjectName(QString::fromUtf8("BtnMask"));
        BtnMask->setEnabled(true);
        BtnMask->setFlat(false);

        gridLayout->addWidget(BtnMask, 3, 2, 1, 1);

        Label9 = new QLabel(TabSheet1);
        Label9->setObjectName(QString::fromUtf8("Label9"));
        Label9->setEnabled(true);

        gridLayout->addWidget(Label9, 6, 0, 1, 1);

        TropOpt = new QComboBox(TabSheet1);
        TropOpt->addItem(QString());
        TropOpt->addItem(QString());
        TropOpt->addItem(QString());
        TropOpt->addItem(QString());
        TropOpt->addItem(QString());
        TropOpt->addItem(QString());
        TropOpt->setObjectName(QString::fromUtf8("TropOpt"));
        TropOpt->setEnabled(true);

        gridLayout->addWidget(TropOpt, 6, 1, 1, 2);

        Label32 = new QLabel(TabSheet1);
        Label32->setObjectName(QString::fromUtf8("Label32"));
        Label32->setEnabled(true);

        gridLayout->addWidget(Label32, 7, 0, 1, 1);

        SatEphem = new QComboBox(TabSheet1);
        SatEphem->addItem(QString());
        SatEphem->addItem(QString());
        SatEphem->addItem(QString());
        SatEphem->addItem(QString());
        SatEphem->addItem(QString());
        SatEphem->addItem(QString());
        SatEphem->setObjectName(QString::fromUtf8("SatEphem"));
        SatEphem->setEnabled(true);

        gridLayout->addWidget(SatEphem, 7, 1, 1, 2);

        Label35 = new QLabel(TabSheet1);
        Label35->setObjectName(QString::fromUtf8("Label35"));
        Label35->setEnabled(true);

        gridLayout->addWidget(Label35, 12, 0, 1, 1);

        ExSats = new QLineEdit(TabSheet1);
        ExSats->setObjectName(QString::fromUtf8("ExSats"));
        ExSats->setEnabled(true);

        gridLayout->addWidget(ExSats, 12, 1, 1, 2);

        widget_3 = new QWidget(TabSheet1);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        NavSys1 = new QCheckBox(widget_3);
        NavSys1->setObjectName(QString::fromUtf8("NavSys1"));
        NavSys1->setChecked(true);

        horizontalLayout_3->addWidget(NavSys1);

        NavSys2 = new QCheckBox(widget_3);
        NavSys2->setObjectName(QString::fromUtf8("NavSys2"));
        NavSys2->setChecked(false);

        horizontalLayout_3->addWidget(NavSys2);

        NavSys3 = new QCheckBox(widget_3);
        NavSys3->setObjectName(QString::fromUtf8("NavSys3"));
        NavSys3->setChecked(false);

        horizontalLayout_3->addWidget(NavSys3);

        NavSys4 = new QCheckBox(widget_3);
        NavSys4->setObjectName(QString::fromUtf8("NavSys4"));
        NavSys4->setChecked(false);

        horizontalLayout_3->addWidget(NavSys4);

        NavSys5 = new QCheckBox(widget_3);
        NavSys5->setObjectName(QString::fromUtf8("NavSys5"));
        NavSys5->setChecked(false);

        horizontalLayout_3->addWidget(NavSys5);

        NavSys6 = new QCheckBox(widget_3);
        NavSys6->setObjectName(QString::fromUtf8("NavSys6"));
        NavSys6->setChecked(false);

        horizontalLayout_3->addWidget(NavSys6);

        NavSys7 = new QCheckBox(widget_3);
        NavSys7->setObjectName(QString::fromUtf8("NavSys7"));

        horizontalLayout_3->addWidget(NavSys7);


        gridLayout->addWidget(widget_3, 14, 0, 1, 3);

        Misc->addTab(TabSheet1, QString());
        TabSheet2 = new QWidget();
        TabSheet2->setObjectName(QString::fromUtf8("TabSheet2"));
        gridLayout_2 = new QGridLayout(TabSheet2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Label25 = new QLabel(TabSheet2);
        Label25->setObjectName(QString::fromUtf8("Label25"));
        Label25->setEnabled(true);

        gridLayout_2->addWidget(Label25, 0, 0, 1, 1);

        AmbRes = new QComboBox(TabSheet2);
        AmbRes->addItem(QString());
        AmbRes->addItem(QString());
        AmbRes->addItem(QString());
        AmbRes->addItem(QString());
        AmbRes->addItem(QString());
        AmbRes->setObjectName(QString::fromUtf8("AmbRes"));
        AmbRes->setEnabled(true);

        gridLayout_2->addWidget(AmbRes, 0, 1, 1, 1);

        GloAmbRes = new QComboBox(TabSheet2);
        GloAmbRes->addItem(QString());
        GloAmbRes->addItem(QString());
        GloAmbRes->addItem(QString());
        GloAmbRes->setObjectName(QString::fromUtf8("GloAmbRes"));
        GloAmbRes->setEnabled(true);

        gridLayout_2->addWidget(GloAmbRes, 0, 2, 1, 2);

        BdsAmbRes = new QComboBox(TabSheet2);
        BdsAmbRes->addItem(QString());
        BdsAmbRes->addItem(QString());
        BdsAmbRes->setObjectName(QString::fromUtf8("BdsAmbRes"));
        BdsAmbRes->setEnabled(true);

        gridLayout_2->addWidget(BdsAmbRes, 0, 4, 1, 1);

        LabelRatio = new QLabel(TabSheet2);
        LabelRatio->setObjectName(QString::fromUtf8("LabelRatio"));
        LabelRatio->setEnabled(true);

        gridLayout_2->addWidget(LabelRatio, 1, 0, 1, 1);

        ValidThresAR = new QLineEdit(TabSheet2);
        ValidThresAR->setObjectName(QString::fromUtf8("ValidThresAR"));
        ValidThresAR->setEnabled(true);

        gridLayout_2->addWidget(ValidThresAR, 1, 1, 1, 4);

        LabelConf = new QLabel(TabSheet2);
        LabelConf->setObjectName(QString::fromUtf8("LabelConf"));
        LabelConf->setEnabled(true);

        gridLayout_2->addWidget(LabelConf, 2, 0, 1, 1);

        ThresAR2 = new QLineEdit(TabSheet2);
        ThresAR2->setObjectName(QString::fromUtf8("ThresAR2"));
        ThresAR2->setEnabled(true);

        gridLayout_2->addWidget(ThresAR2, 2, 1, 1, 2);

        ThresAR3 = new QLineEdit(TabSheet2);
        ThresAR3->setObjectName(QString::fromUtf8("ThresAR3"));
        ThresAR3->setEnabled(true);

        gridLayout_2->addWidget(ThresAR3, 2, 3, 1, 2);

        Label13 = new QLabel(TabSheet2);
        Label13->setObjectName(QString::fromUtf8("Label13"));
        Label13->setEnabled(true);

        gridLayout_2->addWidget(Label13, 3, 0, 1, 1);

        LockCntFixAmb = new QLineEdit(TabSheet2);
        LockCntFixAmb->setObjectName(QString::fromUtf8("LockCntFixAmb"));
        LockCntFixAmb->setEnabled(true);

        gridLayout_2->addWidget(LockCntFixAmb, 3, 1, 1, 2);

        ElMaskAR = new QLineEdit(TabSheet2);
        ElMaskAR->setObjectName(QString::fromUtf8("ElMaskAR"));
        ElMaskAR->setEnabled(true);

        gridLayout_2->addWidget(ElMaskAR, 3, 3, 1, 2);

        LabelHold = new QLabel(TabSheet2);
        LabelHold->setObjectName(QString::fromUtf8("LabelHold"));
        LabelHold->setEnabled(true);

        gridLayout_2->addWidget(LabelHold, 4, 0, 1, 1);

        FixCntHoldAmb = new QLineEdit(TabSheet2);
        FixCntHoldAmb->setObjectName(QString::fromUtf8("FixCntHoldAmb"));
        FixCntHoldAmb->setEnabled(true);

        gridLayout_2->addWidget(FixCntHoldAmb, 4, 1, 1, 2);

        ElMaskHold = new QLineEdit(TabSheet2);
        ElMaskHold->setObjectName(QString::fromUtf8("ElMaskHold"));
        ElMaskHold->setEnabled(true);

        gridLayout_2->addWidget(ElMaskHold, 4, 3, 1, 2);

        Label22 = new QLabel(TabSheet2);
        Label22->setObjectName(QString::fromUtf8("Label22"));
        Label22->setEnabled(true);

        gridLayout_2->addWidget(Label22, 5, 0, 1, 1);

        OutCntResetAmb = new QLineEdit(TabSheet2);
        OutCntResetAmb->setObjectName(QString::fromUtf8("OutCntResetAmb"));
        OutCntResetAmb->setEnabled(true);

        gridLayout_2->addWidget(OutCntResetAmb, 5, 1, 1, 2);

        SlipThres = new QLineEdit(TabSheet2);
        SlipThres->setObjectName(QString::fromUtf8("SlipThres"));
        SlipThres->setEnabled(true);

        gridLayout_2->addWidget(SlipThres, 5, 3, 1, 2);

        Label14 = new QLabel(TabSheet2);
        Label14->setObjectName(QString::fromUtf8("Label14"));
        Label14->setEnabled(true);

        gridLayout_2->addWidget(Label14, 6, 0, 1, 1);

        MaxAgeDiff = new QLineEdit(TabSheet2);
        MaxAgeDiff->setObjectName(QString::fromUtf8("MaxAgeDiff"));
        MaxAgeDiff->setEnabled(true);

        gridLayout_2->addWidget(MaxAgeDiff, 6, 1, 1, 2);

        SyncSol = new QComboBox(TabSheet2);
        SyncSol->addItem(QString());
        SyncSol->addItem(QString());
        SyncSol->addItem(QString());
        SyncSol->setObjectName(QString::fromUtf8("SyncSol"));
        SyncSol->setEnabled(false);

        gridLayout_2->addWidget(SyncSol, 6, 3, 1, 2);

        Label11 = new QLabel(TabSheet2);
        Label11->setObjectName(QString::fromUtf8("Label11"));
        Label11->setEnabled(true);

        gridLayout_2->addWidget(Label11, 7, 0, 1, 1);

        RejectGdop = new QLineEdit(TabSheet2);
        RejectGdop->setObjectName(QString::fromUtf8("RejectGdop"));
        RejectGdop->setEnabled(true);

        gridLayout_2->addWidget(RejectGdop, 7, 1, 1, 2);

        RejectThres = new QLineEdit(TabSheet2);
        RejectThres->setObjectName(QString::fromUtf8("RejectThres"));
        RejectThres->setEnabled(true);

        gridLayout_2->addWidget(RejectThres, 7, 3, 1, 2);

        Label37 = new QLabel(TabSheet2);
        Label37->setObjectName(QString::fromUtf8("Label37"));
        Label37->setEnabled(true);

        gridLayout_2->addWidget(Label37, 8, 0, 1, 1);

        ARIter = new QLineEdit(TabSheet2);
        ARIter->setObjectName(QString::fromUtf8("ARIter"));
        ARIter->setEnabled(true);

        gridLayout_2->addWidget(ARIter, 8, 1, 1, 2);

        NumIter = new QLineEdit(TabSheet2);
        NumIter->setObjectName(QString::fromUtf8("NumIter"));
        NumIter->setEnabled(true);

        gridLayout_2->addWidget(NumIter, 8, 3, 1, 2);

        BaselineConst = new QCheckBox(TabSheet2);
        BaselineConst->setObjectName(QString::fromUtf8("BaselineConst"));
        BaselineConst->setChecked(false);

        gridLayout_2->addWidget(BaselineConst, 9, 0, 1, 1);

        BaselineLen = new QLineEdit(TabSheet2);
        BaselineLen->setObjectName(QString::fromUtf8("BaselineLen"));
        BaselineLen->setEnabled(true);

        gridLayout_2->addWidget(BaselineLen, 9, 1, 1, 2);

        BaselineSig = new QLineEdit(TabSheet2);
        BaselineSig->setObjectName(QString::fromUtf8("BaselineSig"));
        BaselineSig->setEnabled(true);

        gridLayout_2->addWidget(BaselineSig, 9, 3, 1, 2);

        Misc->addTab(TabSheet2, QString());
        TabSheet3 = new QWidget();
        TabSheet3->setObjectName(QString::fromUtf8("TabSheet3"));
        gridLayout_3 = new QGridLayout(TabSheet3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        LabelSolFormat = new QLabel(TabSheet3);
        LabelSolFormat->setObjectName(QString::fromUtf8("LabelSolFormat"));
        LabelSolFormat->setEnabled(true);

        gridLayout_3->addWidget(LabelSolFormat, 0, 0, 1, 1);

        SolFormat = new QComboBox(TabSheet3);
        SolFormat->addItem(QString());
        SolFormat->addItem(QString());
        SolFormat->addItem(QString());
        SolFormat->addItem(QString());
        SolFormat->setObjectName(QString::fromUtf8("SolFormat"));
        SolFormat->setEnabled(true);

        gridLayout_3->addWidget(SolFormat, 0, 1, 1, 3);

        Label20 = new QLabel(TabSheet3);
        Label20->setObjectName(QString::fromUtf8("Label20"));
        Label20->setEnabled(true);

        gridLayout_3->addWidget(Label20, 1, 0, 1, 1);

        OutputHead = new QComboBox(TabSheet3);
        OutputHead->addItem(QString());
        OutputHead->addItem(QString());
        OutputHead->setObjectName(QString::fromUtf8("OutputHead"));
        OutputHead->setEnabled(true);

        gridLayout_3->addWidget(OutputHead, 1, 1, 1, 1);

        OutputOpt = new QComboBox(TabSheet3);
        OutputOpt->addItem(QString());
        OutputOpt->addItem(QString());
        OutputOpt->setObjectName(QString::fromUtf8("OutputOpt"));
        OutputOpt->setEnabled(true);

        gridLayout_3->addWidget(OutputOpt, 1, 2, 1, 2);

        LabelTimeFormat = new QLabel(TabSheet3);
        LabelTimeFormat->setObjectName(QString::fromUtf8("LabelTimeFormat"));
        LabelTimeFormat->setEnabled(true);

        gridLayout_3->addWidget(LabelTimeFormat, 2, 0, 1, 1);

        TimeFormat = new QComboBox(TabSheet3);
        TimeFormat->addItem(QString());
        TimeFormat->addItem(QString());
        TimeFormat->addItem(QString());
        TimeFormat->addItem(QString());
        TimeFormat->setObjectName(QString::fromUtf8("TimeFormat"));
        TimeFormat->setEnabled(true);

        gridLayout_3->addWidget(TimeFormat, 2, 1, 1, 2);

        TimeDecimal = new QLineEdit(TabSheet3);
        TimeDecimal->setObjectName(QString::fromUtf8("TimeDecimal"));
        TimeDecimal->setEnabled(true);

        gridLayout_3->addWidget(TimeDecimal, 2, 3, 1, 1);

        LabelLatLonFormat = new QLabel(TabSheet3);
        LabelLatLonFormat->setObjectName(QString::fromUtf8("LabelLatLonFormat"));
        LabelLatLonFormat->setEnabled(true);

        gridLayout_3->addWidget(LabelLatLonFormat, 3, 0, 1, 1);

        LatLonFormat = new QComboBox(TabSheet3);
        LatLonFormat->addItem(QString());
        LatLonFormat->addItem(QString());
        LatLonFormat->setObjectName(QString::fromUtf8("LatLonFormat"));
        LatLonFormat->setEnabled(true);

        gridLayout_3->addWidget(LatLonFormat, 3, 1, 1, 3);

        LabelFieldSep = new QLabel(TabSheet3);
        LabelFieldSep->setObjectName(QString::fromUtf8("LabelFieldSep"));
        LabelFieldSep->setEnabled(true);

        gridLayout_3->addWidget(LabelFieldSep, 4, 0, 1, 1);

        FieldSep = new QLineEdit(TabSheet3);
        FieldSep->setObjectName(QString::fromUtf8("FieldSep"));
        FieldSep->setEnabled(true);

        gridLayout_3->addWidget(FieldSep, 4, 1, 1, 3);

        Label2 = new QLabel(TabSheet3);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setEnabled(true);

        gridLayout_3->addWidget(Label2, 5, 0, 1, 1);

        OutputDatum = new QComboBox(TabSheet3);
        OutputDatum->addItem(QString());
        OutputDatum->setObjectName(QString::fromUtf8("OutputDatum"));
        OutputDatum->setEnabled(true);

        gridLayout_3->addWidget(OutputDatum, 5, 1, 1, 1);

        OutputHeight = new QComboBox(TabSheet3);
        OutputHeight->addItem(QString());
        OutputHeight->addItem(QString());
        OutputHeight->setObjectName(QString::fromUtf8("OutputHeight"));
        OutputHeight->setEnabled(true);

        gridLayout_3->addWidget(OutputHeight, 5, 2, 1, 2);

        Label18 = new QLabel(TabSheet3);
        Label18->setObjectName(QString::fromUtf8("Label18"));
        Label18->setEnabled(true);

        gridLayout_3->addWidget(Label18, 6, 0, 1, 1);

        OutputGeoid = new QComboBox(TabSheet3);
        OutputGeoid->addItem(QString());
        OutputGeoid->addItem(QString());
        OutputGeoid->addItem(QString());
        OutputGeoid->addItem(QString());
        OutputGeoid->addItem(QString());
        OutputGeoid->setObjectName(QString::fromUtf8("OutputGeoid"));
        OutputGeoid->setEnabled(true);

        gridLayout_3->addWidget(OutputGeoid, 6, 1, 1, 3);

        Label31 = new QLabel(TabSheet3);
        Label31->setObjectName(QString::fromUtf8("Label31"));
        Label31->setEnabled(true);

        gridLayout_3->addWidget(Label31, 7, 0, 1, 1);

        SolStatic = new QComboBox(TabSheet3);
        SolStatic->addItem(QString());
        SolStatic->addItem(QString());
        SolStatic->setObjectName(QString::fromUtf8("SolStatic"));
        SolStatic->setEnabled(true);

        gridLayout_3->addWidget(SolStatic, 7, 1, 1, 3);

        Label21 = new QLabel(TabSheet3);
        Label21->setObjectName(QString::fromUtf8("Label21"));
        Label21->setEnabled(false);

        gridLayout_3->addWidget(Label21, 8, 0, 1, 1);

        NmeaIntv1 = new QLineEdit(TabSheet3);
        NmeaIntv1->setObjectName(QString::fromUtf8("NmeaIntv1"));
        NmeaIntv1->setEnabled(false);

        gridLayout_3->addWidget(NmeaIntv1, 8, 1, 1, 1);

        NmeaIntv2 = new QLineEdit(TabSheet3);
        NmeaIntv2->setObjectName(QString::fromUtf8("NmeaIntv2"));
        NmeaIntv2->setEnabled(false);

        gridLayout_3->addWidget(NmeaIntv2, 8, 2, 1, 2);

        Label36 = new QLabel(TabSheet3);
        Label36->setObjectName(QString::fromUtf8("Label36"));
        Label36->setEnabled(true);

        gridLayout_3->addWidget(Label36, 9, 0, 1, 1);

        DebugStatus = new QComboBox(TabSheet3);
        DebugStatus->addItem(QString());
        DebugStatus->addItem(QString());
        DebugStatus->addItem(QString());
        DebugStatus->setObjectName(QString::fromUtf8("DebugStatus"));
        DebugStatus->setEnabled(true);

        gridLayout_3->addWidget(DebugStatus, 9, 1, 1, 1);

        DebugTrace = new QComboBox(TabSheet3);
        DebugTrace->addItem(QString());
        DebugTrace->addItem(QString());
        DebugTrace->addItem(QString());
        DebugTrace->addItem(QString());
        DebugTrace->addItem(QString());
        DebugTrace->addItem(QString());
        DebugTrace->setObjectName(QString::fromUtf8("DebugTrace"));
        DebugTrace->setEnabled(true);

        gridLayout_3->addWidget(DebugTrace, 9, 2, 1, 2);

        Misc->addTab(TabSheet3, QString());
        TabSheet4 = new QWidget();
        TabSheet4->setObjectName(QString::fromUtf8("TabSheet4"));
        gridLayout_11 = new QGridLayout(TabSheet4);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        GroupBox3 = new QGroupBox(TabSheet4);
        GroupBox3->setObjectName(QString::fromUtf8("GroupBox3"));
        gridLayout_4 = new QGridLayout(GroupBox3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        MeasErrR1 = new QLineEdit(GroupBox3);
        MeasErrR1->setObjectName(QString::fromUtf8("MeasErrR1"));
        MeasErrR1->setEnabled(true);

        gridLayout_4->addWidget(MeasErrR1, 0, 1, 1, 1);

        MeasErrR2 = new QLineEdit(GroupBox3);
        MeasErrR2->setObjectName(QString::fromUtf8("MeasErrR2"));
        MeasErrR2->setEnabled(true);

        gridLayout_4->addWidget(MeasErrR2, 0, 2, 1, 1);

        Label7 = new QLabel(GroupBox3);
        Label7->setObjectName(QString::fromUtf8("Label7"));
        Label7->setEnabled(true);

        gridLayout_4->addWidget(Label7, 1, 0, 1, 1);

        MeasErr2 = new QLineEdit(GroupBox3);
        MeasErr2->setObjectName(QString::fromUtf8("MeasErr2"));
        MeasErr2->setEnabled(true);

        gridLayout_4->addWidget(MeasErr2, 1, 1, 1, 1);

        MeasErr3 = new QLineEdit(GroupBox3);
        MeasErr3->setObjectName(QString::fromUtf8("MeasErr3"));
        MeasErr3->setEnabled(true);

        gridLayout_4->addWidget(MeasErr3, 1, 2, 1, 1);

        Label16 = new QLabel(GroupBox3);
        Label16->setObjectName(QString::fromUtf8("Label16"));
        Label16->setEnabled(true);

        gridLayout_4->addWidget(Label16, 2, 0, 1, 1);

        MeasErr4 = new QLineEdit(GroupBox3);
        MeasErr4->setObjectName(QString::fromUtf8("MeasErr4"));
        MeasErr4->setEnabled(true);

        gridLayout_4->addWidget(MeasErr4, 2, 1, 1, 2);

        Label64 = new QLabel(GroupBox3);
        Label64->setObjectName(QString::fromUtf8("Label64"));
        Label64->setEnabled(true);

        gridLayout_4->addWidget(Label64, 3, 0, 1, 1);

        MeasErr5 = new QLineEdit(GroupBox3);
        MeasErr5->setObjectName(QString::fromUtf8("MeasErr5"));
        MeasErr5->setEnabled(true);

        gridLayout_4->addWidget(MeasErr5, 3, 1, 1, 2);

        Label6 = new QLabel(GroupBox3);
        Label6->setObjectName(QString::fromUtf8("Label6"));
        Label6->setEnabled(true);

        gridLayout_4->addWidget(Label6, 0, 0, 1, 1);


        gridLayout_11->addWidget(GroupBox3, 0, 0, 1, 2);

        Label29 = new QLabel(TabSheet4);
        Label29->setObjectName(QString::fromUtf8("Label29"));
        Label29->setEnabled(true);

        gridLayout_11->addWidget(Label29, 5, 0, 1, 1);

        SatClkStab = new QLineEdit(TabSheet4);
        SatClkStab->setObjectName(QString::fromUtf8("SatClkStab"));
        SatClkStab->setEnabled(true);

        gridLayout_11->addWidget(SatClkStab, 5, 1, 1, 1);

        GroupBox4 = new QGroupBox(TabSheet4);
        GroupBox4->setObjectName(QString::fromUtf8("GroupBox4"));
        gridLayout_5 = new QGridLayout(GroupBox4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        Label26 = new QLabel(GroupBox4);
        Label26->setObjectName(QString::fromUtf8("Label26"));
        Label26->setEnabled(true);

        gridLayout_5->addWidget(Label26, 1, 0, 1, 1);

        PrNoise2 = new QLineEdit(GroupBox4);
        PrNoise2->setObjectName(QString::fromUtf8("PrNoise2"));
        PrNoise2->setEnabled(true);

        gridLayout_5->addWidget(PrNoise2, 2, 1, 1, 2);

        Label27 = new QLabel(GroupBox4);
        Label27->setObjectName(QString::fromUtf8("Label27"));
        Label27->setEnabled(true);

        gridLayout_5->addWidget(Label27, 2, 0, 1, 1);

        Label10 = new QLabel(GroupBox4);
        Label10->setObjectName(QString::fromUtf8("Label10"));
        Label10->setEnabled(true);

        gridLayout_5->addWidget(Label10, 0, 0, 1, 1);

        PrNoise4 = new QLineEdit(GroupBox4);
        PrNoise4->setObjectName(QString::fromUtf8("PrNoise4"));
        PrNoise4->setEnabled(true);

        gridLayout_5->addWidget(PrNoise4, 0, 1, 1, 1);

        PrNoise5 = new QLineEdit(GroupBox4);
        PrNoise5->setObjectName(QString::fromUtf8("PrNoise5"));
        PrNoise5->setEnabled(true);

        gridLayout_5->addWidget(PrNoise5, 0, 2, 1, 1);

        Label28 = new QLabel(GroupBox4);
        Label28->setObjectName(QString::fromUtf8("Label28"));
        Label28->setEnabled(true);

        gridLayout_5->addWidget(Label28, 3, 0, 1, 1);

        PrNoise3 = new QLineEdit(GroupBox4);
        PrNoise3->setObjectName(QString::fromUtf8("PrNoise3"));
        PrNoise3->setEnabled(true);

        gridLayout_5->addWidget(PrNoise3, 3, 1, 1, 2);

        PrNoise1 = new QLineEdit(GroupBox4);
        PrNoise1->setObjectName(QString::fromUtf8("PrNoise1"));
        PrNoise1->setEnabled(true);

        gridLayout_5->addWidget(PrNoise1, 1, 1, 1, 2);


        gridLayout_11->addWidget(GroupBox4, 4, 0, 1, 2);

        Misc->addTab(TabSheet4, QString());
        TabSheet5 = new QWidget();
        TabSheet5->setObjectName(QString::fromUtf8("TabSheet5"));
        gridLayout_13 = new QGridLayout(TabSheet5);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        BtnStaPosView = new QPushButton(TabSheet5);
        BtnStaPosView->setObjectName(QString::fromUtf8("BtnStaPosView"));
        BtnStaPosView->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/doc.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnStaPosView->setIcon(icon);
        BtnStaPosView->setFlat(true);

        gridLayout_13->addWidget(BtnStaPosView, 5, 2, 1, 1);

        BtnStaPosFile = new QPushButton(TabSheet5);
        BtnStaPosFile->setObjectName(QString::fromUtf8("BtnStaPosFile"));
        BtnStaPosFile->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnStaPosFile->setPalette(palette);
        BtnStaPosFile->setFlat(false);

        gridLayout_13->addWidget(BtnStaPosFile, 5, 3, 1, 1);

        StaPosFile = new QLineEdit(TabSheet5);
        StaPosFile->setObjectName(QString::fromUtf8("StaPosFile"));
        StaPosFile->setEnabled(true);

        gridLayout_13->addWidget(StaPosFile, 5, 1, 1, 1);

        Label4 = new QLabel(TabSheet5);
        Label4->setObjectName(QString::fromUtf8("Label4"));
        Label4->setEnabled(true);
        sizePolicy.setHeightForWidth(Label4->sizePolicy().hasHeightForWidth());
        Label4->setSizePolicy(sizePolicy);

        gridLayout_13->addWidget(Label4, 6, 0, 1, 4);

        Label30 = new QLabel(TabSheet5);
        Label30->setObjectName(QString::fromUtf8("Label30"));
        Label30->setEnabled(true);

        gridLayout_13->addWidget(Label30, 5, 0, 1, 1);

        GroupRefAnt = new QGroupBox(TabSheet5);
        GroupRefAnt->setObjectName(QString::fromUtf8("GroupRefAnt"));
        sizePolicy.setHeightForWidth(GroupRefAnt->sizePolicy().hasHeightForWidth());
        GroupRefAnt->setSizePolicy(sizePolicy);
        gridLayout_6 = new QGridLayout(GroupRefAnt);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        RefPosType = new QComboBox(GroupRefAnt);
        RefPosType->addItem(QString());
        RefPosType->addItem(QString());
        RefPosType->addItem(QString());
        RefPosType->addItem(QString());
        RefPosType->addItem(QString());
        RefPosType->addItem(QString());
        RefPosType->setObjectName(QString::fromUtf8("RefPosType"));
        RefPosType->setEnabled(true);

        gridLayout_6->addWidget(RefPosType, 0, 0, 1, 1);

        BtnRefPos = new QPushButton(GroupRefAnt);
        BtnRefPos->setObjectName(QString::fromUtf8("BtnRefPos"));
        BtnRefPos->setEnabled(true);
        BtnRefPos->setFlat(false);

        gridLayout_6->addWidget(BtnRefPos, 0, 5, 1, 1);

        RefPos1 = new QLineEdit(GroupRefAnt);
        RefPos1->setObjectName(QString::fromUtf8("RefPos1"));
        RefPos1->setEnabled(true);

        gridLayout_6->addWidget(RefPos1, 1, 0, 1, 1);

        RefPos2 = new QLineEdit(GroupRefAnt);
        RefPos2->setObjectName(QString::fromUtf8("RefPos2"));
        RefPos2->setEnabled(true);

        gridLayout_6->addWidget(RefPos2, 1, 1, 1, 2);

        RefPos3 = new QLineEdit(GroupRefAnt);
        RefPos3->setObjectName(QString::fromUtf8("RefPos3"));
        RefPos3->setEnabled(true);

        gridLayout_6->addWidget(RefPos3, 1, 3, 1, 3);

        RefAntPcv = new QCheckBox(GroupRefAnt);
        RefAntPcv->setObjectName(QString::fromUtf8("RefAntPcv"));
        RefAntPcv->setChecked(false);

        gridLayout_6->addWidget(RefAntPcv, 2, 0, 1, 2);

        LabelRefAntD = new QLabel(GroupRefAnt);
        LabelRefAntD->setObjectName(QString::fromUtf8("LabelRefAntD"));
        LabelRefAntD->setEnabled(true);

        gridLayout_6->addWidget(LabelRefAntD, 2, 2, 1, 3);

        RefAnt = new QComboBox(GroupRefAnt);
        RefAnt->setObjectName(QString::fromUtf8("RefAnt"));
        RefAnt->setEnabled(true);

        gridLayout_6->addWidget(RefAnt, 3, 0, 1, 2);

        RefAntE = new QLineEdit(GroupRefAnt);
        RefAntE->setObjectName(QString::fromUtf8("RefAntE"));
        RefAntE->setEnabled(true);

        gridLayout_6->addWidget(RefAntE, 3, 2, 1, 2);

        RefAntN = new QLineEdit(GroupRefAnt);
        RefAntN->setObjectName(QString::fromUtf8("RefAntN"));
        RefAntN->setEnabled(true);

        gridLayout_6->addWidget(RefAntN, 3, 4, 1, 1);

        RefAntU = new QLineEdit(GroupRefAnt);
        RefAntU->setObjectName(QString::fromUtf8("RefAntU"));
        RefAntU->setEnabled(true);

        gridLayout_6->addWidget(RefAntU, 3, 5, 1, 1);


        gridLayout_13->addWidget(GroupRefAnt, 4, 0, 1, 4);

        GroupRovAnt = new QGroupBox(TabSheet5);
        GroupRovAnt->setObjectName(QString::fromUtf8("GroupRovAnt"));
        sizePolicy.setHeightForWidth(GroupRovAnt->sizePolicy().hasHeightForWidth());
        GroupRovAnt->setSizePolicy(sizePolicy);
        gridLayout_7 = new QGridLayout(GroupRovAnt);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        RovPosType = new QComboBox(GroupRovAnt);
        RovPosType->addItem(QString());
        RovPosType->addItem(QString());
        RovPosType->addItem(QString());
        RovPosType->addItem(QString());
        RovPosType->addItem(QString());
        RovPosType->addItem(QString());
        RovPosType->setObjectName(QString::fromUtf8("RovPosType"));
        RovPosType->setEnabled(false);

        gridLayout_7->addWidget(RovPosType, 0, 0, 1, 1);

        BtnRovPos = new QPushButton(GroupRovAnt);
        BtnRovPos->setObjectName(QString::fromUtf8("BtnRovPos"));
        BtnRovPos->setEnabled(true);
        BtnRovPos->setFlat(false);

        gridLayout_7->addWidget(BtnRovPos, 0, 5, 1, 1);

        RovPos1 = new QLineEdit(GroupRovAnt);
        RovPos1->setObjectName(QString::fromUtf8("RovPos1"));
        RovPos1->setEnabled(true);

        gridLayout_7->addWidget(RovPos1, 1, 0, 1, 1);

        RovPos2 = new QLineEdit(GroupRovAnt);
        RovPos2->setObjectName(QString::fromUtf8("RovPos2"));
        RovPos2->setEnabled(true);

        gridLayout_7->addWidget(RovPos2, 1, 1, 1, 2);

        RovPos3 = new QLineEdit(GroupRovAnt);
        RovPos3->setObjectName(QString::fromUtf8("RovPos3"));
        RovPos3->setEnabled(true);

        gridLayout_7->addWidget(RovPos3, 1, 3, 1, 3);

        RovAntPcv = new QCheckBox(GroupRovAnt);
        RovAntPcv->setObjectName(QString::fromUtf8("RovAntPcv"));
        RovAntPcv->setChecked(false);

        gridLayout_7->addWidget(RovAntPcv, 2, 0, 1, 2);

        LabelRovAntD = new QLabel(GroupRovAnt);
        LabelRovAntD->setObjectName(QString::fromUtf8("LabelRovAntD"));
        LabelRovAntD->setEnabled(true);

        gridLayout_7->addWidget(LabelRovAntD, 2, 2, 1, 3);

        RovAnt = new QComboBox(GroupRovAnt);
        RovAnt->setObjectName(QString::fromUtf8("RovAnt"));
        RovAnt->setEnabled(true);

        gridLayout_7->addWidget(RovAnt, 3, 0, 1, 2);

        RovAntE = new QLineEdit(GroupRovAnt);
        RovAntE->setObjectName(QString::fromUtf8("RovAntE"));
        RovAntE->setEnabled(true);

        gridLayout_7->addWidget(RovAntE, 3, 2, 1, 2);

        RovAntN = new QLineEdit(GroupRovAnt);
        RovAntN->setObjectName(QString::fromUtf8("RovAntN"));
        RovAntN->setEnabled(true);

        gridLayout_7->addWidget(RovAntN, 3, 4, 1, 1);

        RovAntU = new QLineEdit(GroupRovAnt);
        RovAntU->setObjectName(QString::fromUtf8("RovAntU"));
        RovAntU->setEnabled(true);

        gridLayout_7->addWidget(RovAntU, 3, 5, 1, 1);


        gridLayout_13->addWidget(GroupRovAnt, 0, 0, 2, 5);

        Misc->addTab(TabSheet5, QString());
        TabSheet7 = new QWidget();
        TabSheet7->setObjectName(QString::fromUtf8("TabSheet7"));
        gridLayout_8 = new QGridLayout(TabSheet7);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        Label38 = new QLabel(TabSheet7);
        Label38->setObjectName(QString::fromUtf8("Label38"));
        Label38->setEnabled(true);

        gridLayout_8->addWidget(Label38, 0, 0, 1, 1);

        BtnSatPcvView = new QPushButton(TabSheet7);
        BtnSatPcvView->setObjectName(QString::fromUtf8("BtnSatPcvView"));
        BtnSatPcvView->setEnabled(true);
        BtnSatPcvView->setIcon(icon);
        BtnSatPcvView->setFlat(true);

        gridLayout_8->addWidget(BtnSatPcvView, 0, 1, 1, 1);

        BtnAntPcvView = new QPushButton(TabSheet7);
        BtnAntPcvView->setObjectName(QString::fromUtf8("BtnAntPcvView"));
        BtnAntPcvView->setEnabled(true);
        BtnAntPcvView->setIcon(icon);
        BtnAntPcvView->setFlat(true);

        gridLayout_8->addWidget(BtnAntPcvView, 0, 2, 1, 1);

        SatPcvFile = new QLineEdit(TabSheet7);
        SatPcvFile->setObjectName(QString::fromUtf8("SatPcvFile"));
        SatPcvFile->setEnabled(true);

        gridLayout_8->addWidget(SatPcvFile, 1, 0, 1, 2);

        BtnSatPcvFile = new QPushButton(TabSheet7);
        BtnSatPcvFile->setObjectName(QString::fromUtf8("BtnSatPcvFile"));
        BtnSatPcvFile->setEnabled(true);
        BtnSatPcvFile->setFlat(false);

        gridLayout_8->addWidget(BtnSatPcvFile, 1, 2, 1, 1);

        AntPcvFile = new QLineEdit(TabSheet7);
        AntPcvFile->setObjectName(QString::fromUtf8("AntPcvFile"));
        AntPcvFile->setEnabled(true);

        gridLayout_8->addWidget(AntPcvFile, 2, 0, 1, 2);

        BtnAntPcvFile = new QPushButton(TabSheet7);
        BtnAntPcvFile->setObjectName(QString::fromUtf8("BtnAntPcvFile"));
        BtnAntPcvFile->setEnabled(true);
        BtnAntPcvFile->setFlat(false);

        gridLayout_8->addWidget(BtnAntPcvFile, 2, 2, 1, 1);

        GeoidDataFile = new QLineEdit(TabSheet7);
        GeoidDataFile->setObjectName(QString::fromUtf8("GeoidDataFile"));
        GeoidDataFile->setEnabled(true);

        gridLayout_8->addWidget(GeoidDataFile, 5, 0, 1, 2);

        BtnGeoidDataFile = new QPushButton(TabSheet7);
        BtnGeoidDataFile->setObjectName(QString::fromUtf8("BtnGeoidDataFile"));
        BtnGeoidDataFile->setEnabled(true);
        BtnGeoidDataFile->setFlat(false);

        gridLayout_8->addWidget(BtnGeoidDataFile, 5, 2, 1, 1);

        Label15 = new QLabel(TabSheet7);
        Label15->setObjectName(QString::fromUtf8("Label15"));
        Label15->setEnabled(true);

        gridLayout_8->addWidget(Label15, 6, 0, 1, 1);

        BtnDCBView = new QPushButton(TabSheet7);
        BtnDCBView->setObjectName(QString::fromUtf8("BtnDCBView"));
        BtnDCBView->setEnabled(true);
        BtnDCBView->setIcon(icon);
        BtnDCBView->setFlat(true);

        gridLayout_8->addWidget(BtnDCBView, 6, 2, 1, 1);

        DCBFile = new QLineEdit(TabSheet7);
        DCBFile->setObjectName(QString::fromUtf8("DCBFile"));
        DCBFile->setEnabled(true);

        gridLayout_8->addWidget(DCBFile, 7, 0, 1, 2);

        BtnDCBFile = new QPushButton(TabSheet7);
        BtnDCBFile->setObjectName(QString::fromUtf8("BtnDCBFile"));
        BtnDCBFile->setEnabled(true);
        BtnDCBFile->setFlat(false);

        gridLayout_8->addWidget(BtnDCBFile, 7, 2, 1, 1);

        Label17 = new QLabel(TabSheet7);
        Label17->setObjectName(QString::fromUtf8("Label17"));
        Label17->setEnabled(true);

        gridLayout_8->addWidget(Label17, 8, 0, 1, 1);

        BtnEOPView = new QPushButton(TabSheet7);
        BtnEOPView->setObjectName(QString::fromUtf8("BtnEOPView"));
        BtnEOPView->setEnabled(true);
        BtnEOPView->setIcon(icon);
        BtnEOPView->setFlat(true);

        gridLayout_8->addWidget(BtnEOPView, 8, 2, 1, 1);

        EOPFile = new QLineEdit(TabSheet7);
        EOPFile->setObjectName(QString::fromUtf8("EOPFile"));
        EOPFile->setEnabled(true);

        gridLayout_8->addWidget(EOPFile, 9, 0, 1, 2);

        BtnEOPFile = new QPushButton(TabSheet7);
        BtnEOPFile->setObjectName(QString::fromUtf8("BtnEOPFile"));
        BtnEOPFile->setEnabled(true);
        BtnEOPFile->setFlat(false);

        gridLayout_8->addWidget(BtnEOPFile, 9, 2, 1, 1);

        Label34 = new QLabel(TabSheet7);
        Label34->setObjectName(QString::fromUtf8("Label34"));
        Label34->setEnabled(true);

        gridLayout_8->addWidget(Label34, 10, 0, 1, 1);

        BtnBLQFileView = new QPushButton(TabSheet7);
        BtnBLQFileView->setObjectName(QString::fromUtf8("BtnBLQFileView"));
        BtnBLQFileView->setEnabled(true);
        BtnBLQFileView->setIcon(icon);
        BtnBLQFileView->setFlat(true);

        gridLayout_8->addWidget(BtnBLQFileView, 10, 2, 1, 1);

        BLQFile = new QLineEdit(TabSheet7);
        BLQFile->setObjectName(QString::fromUtf8("BLQFile"));
        BLQFile->setEnabled(true);

        gridLayout_8->addWidget(BLQFile, 11, 0, 1, 2);

        BtnBLQFile = new QPushButton(TabSheet7);
        BtnBLQFile->setObjectName(QString::fromUtf8("BtnBLQFile"));
        BtnBLQFile->setEnabled(true);
        BtnBLQFile->setFlat(false);

        gridLayout_8->addWidget(BtnBLQFile, 11, 2, 1, 1);

        Label1 = new QLabel(TabSheet7);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);
        sizePolicy.setHeightForWidth(Label1->sizePolicy().hasHeightForWidth());
        Label1->setSizePolicy(sizePolicy);

        gridLayout_8->addWidget(Label1, 12, 0, 1, 1);

        IonoFile = new QLineEdit(TabSheet7);
        IonoFile->setObjectName(QString::fromUtf8("IonoFile"));
        IonoFile->setEnabled(true);

        gridLayout_8->addWidget(IonoFile, 13, 0, 1, 2);

        BtnIonoFile = new QPushButton(TabSheet7);
        BtnIonoFile->setObjectName(QString::fromUtf8("BtnIonoFile"));
        BtnIonoFile->setEnabled(true);
        BtnIonoFile->setFlat(false);

        gridLayout_8->addWidget(BtnIonoFile, 13, 2, 1, 1);

        Label63 = new QLabel(TabSheet7);
        Label63->setObjectName(QString::fromUtf8("Label63"));
        Label63->setEnabled(true);
        sizePolicy.setHeightForWidth(Label63->sizePolicy().hasHeightForWidth());
        Label63->setSizePolicy(sizePolicy);

        gridLayout_8->addWidget(Label63, 3, 0, 1, 1);

        Misc->addTab(TabSheet7, QString());
        TabSheet6 = new QWidget();
        TabSheet6->setObjectName(QString::fromUtf8("TabSheet6"));
        gridLayout_9 = new QGridLayout(TabSheet6);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        Panel1 = new QWidget(TabSheet6);
        Panel1->setObjectName(QString::fromUtf8("Panel1"));
        Panel1->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Panel1->sizePolicy().hasHeightForWidth());
        Panel1->setSizePolicy(sizePolicy1);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        gridLayout_12 = new QGridLayout(Panel1);
        gridLayout_12->setSpacing(0);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, -1);
        BtnHelp = new QPushButton(Panel1);
        BtnHelp->setObjectName(QString::fromUtf8("BtnHelp"));
        BtnHelp->setEnabled(true);
        BtnHelp->setFlat(true);

        gridLayout_12->addWidget(BtnHelp, 0, 0, 1, 1);

        Label46 = new QLabel(Panel1);
        Label46->setObjectName(QString::fromUtf8("Label46"));
        Label46->setEnabled(true);

        gridLayout_12->addWidget(Label46, 0, 1, 1, 1);

        Label62 = new QLabel(Panel1);
        Label62->setObjectName(QString::fromUtf8("Label62"));
        Label62->setEnabled(true);

        gridLayout_12->addWidget(Label62, 0, 2, 1, 1);

        Label43 = new QLabel(Panel1);
        Label43->setObjectName(QString::fromUtf8("Label43"));
        Label43->setEnabled(true);

        gridLayout_12->addWidget(Label43, 1, 0, 1, 2);

        Label65 = new QLabel(Panel1);
        Label65->setObjectName(QString::fromUtf8("Label65"));
        Label65->setEnabled(true);

        gridLayout_12->addWidget(Label65, 1, 2, 1, 1);


        gridLayout_9->addWidget(Panel1, 7, 0, 1, 1);

        Label41 = new QLabel(TabSheet6);
        Label41->setObjectName(QString::fromUtf8("Label41"));
        Label41->setEnabled(true);

        gridLayout_9->addWidget(Label41, 0, 0, 1, 3);

        IntpRefObs = new QComboBox(TabSheet6);
        IntpRefObs->addItem(QString());
        IntpRefObs->addItem(QString());
        IntpRefObs->setObjectName(QString::fromUtf8("IntpRefObs"));
        IntpRefObs->setEnabled(true);

        gridLayout_9->addWidget(IntpRefObs, 0, 3, 1, 1);

        Label42 = new QLabel(TabSheet6);
        Label42->setObjectName(QString::fromUtf8("Label42"));
        Label42->setEnabled(false);

        gridLayout_9->addWidget(Label42, 1, 0, 1, 2);

        ComboBox1 = new QComboBox(TabSheet6);
        ComboBox1->addItem(QString());
        ComboBox1->addItem(QString());
        ComboBox1->setObjectName(QString::fromUtf8("ComboBox1"));
        ComboBox1->setEnabled(false);

        gridLayout_9->addWidget(ComboBox1, 1, 3, 1, 1);

        Label40 = new QLabel(TabSheet6);
        Label40->setObjectName(QString::fromUtf8("Label40"));
        Label40->setEnabled(true);

        gridLayout_9->addWidget(Label40, 2, 0, 1, 3);

        SbasSat = new QLineEdit(TabSheet6);
        SbasSat->setObjectName(QString::fromUtf8("SbasSat"));
        SbasSat->setEnabled(true);

        gridLayout_9->addWidget(SbasSat, 2, 3, 1, 1);

        Label60 = new QLabel(TabSheet6);
        Label60->setObjectName(QString::fromUtf8("Label60"));
        Label60->setEnabled(true);

        gridLayout_9->addWidget(Label60, 3, 0, 1, 1);

        RnxOpts1 = new QLineEdit(TabSheet6);
        RnxOpts1->setObjectName(QString::fromUtf8("RnxOpts1"));
        RnxOpts1->setEnabled(true);

        gridLayout_9->addWidget(RnxOpts1, 3, 1, 1, 3);

        Label12 = new QLabel(TabSheet6);
        Label12->setObjectName(QString::fromUtf8("Label12"));
        Label12->setEnabled(true);

        gridLayout_9->addWidget(Label12, 4, 0, 1, 1);

        RnxOpts2 = new QLineEdit(TabSheet6);
        RnxOpts2->setObjectName(QString::fromUtf8("RnxOpts2"));
        RnxOpts2->setEnabled(true);

        gridLayout_9->addWidget(RnxOpts2, 4, 1, 1, 3);

        Label23 = new QLabel(TabSheet6);
        Label23->setObjectName(QString::fromUtf8("Label23"));
        Label23->setEnabled(true);

        gridLayout_9->addWidget(Label23, 5, 0, 1, 1);

        PPPOpts = new QLineEdit(TabSheet6);
        PPPOpts->setObjectName(QString::fromUtf8("PPPOpts"));
        PPPOpts->setEnabled(true);

        gridLayout_9->addWidget(PPPOpts, 5, 1, 1, 3);

        Label45 = new QLabel(TabSheet6);
        Label45->setObjectName(QString::fromUtf8("Label45"));
        Label45->setEnabled(true);

        gridLayout_9->addWidget(Label45, 6, 0, 1, 1);

        Label19 = new QLabel(TabSheet6);
        Label19->setObjectName(QString::fromUtf8("Label19"));
        Label19->setEnabled(true);

        gridLayout_9->addWidget(Label19, 6, 2, 1, 1);

        Label44 = new QLabel(TabSheet6);
        Label44->setObjectName(QString::fromUtf8("Label44"));
        Label44->setEnabled(true);

        gridLayout_9->addWidget(Label44, 6, 3, 1, 1);

        RovList = new QPlainTextEdit(TabSheet6);
        RovList->setObjectName(QString::fromUtf8("RovList"));
        RovList->setEnabled(true);
        RovList->setFrameShape(QFrame::Panel);
        RovList->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(RovList, 7, 1, 1, 2);

        BaseList = new QPlainTextEdit(TabSheet6);
        BaseList->setObjectName(QString::fromUtf8("BaseList"));
        BaseList->setEnabled(true);
        BaseList->setFrameShape(QFrame::Panel);
        BaseList->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(BaseList, 7, 3, 1, 1);

        Misc->addTab(TabSheet6, QString());

        gridLayout_10->addWidget(Misc, 0, 0, 2, 9);


        retranslateUi(OptDialog);

        Misc->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OptDialog);
    } // setupUi

    void retranslateUi(QWidget *OptDialog)
    {
        OptDialog->setWindowTitle(QCoreApplication::translate("OptDialog", "Options", nullptr));
#if QT_CONFIG(tooltip)
        OptDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnExtOpt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnExtOpt->setText(QCoreApplication::translate("OptDialog", "Ext Opt...", nullptr));
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("OptDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnLoad->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnLoad->setText(QCoreApplication::translate("OptDialog", "&Load...", nullptr));
#if QT_CONFIG(tooltip)
        BtnSave->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnSave->setText(QCoreApplication::translate("OptDialog", "&Save...", nullptr));
#if QT_CONFIG(tooltip)
        Label87->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label87->setText(QCoreApplication::translate("OptDialog", "a", nullptr));
#if QT_CONFIG(tooltip)
        Label5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label5->setText(QCoreApplication::translate("OptDialog", "Correction File", nullptr));
#if QT_CONFIG(tooltip)
        Label82->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label82->setText(QCoreApplication::translate("OptDialog", "a", nullptr));
#if QT_CONFIG(tooltip)
        Label83->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label83->setText(QCoreApplication::translate("OptDialog", "b", nullptr));
#if QT_CONFIG(tooltip)
        Label86->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label86->setText(QCoreApplication::translate("OptDialog", "b", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("OptDialog", "&Cancel", nullptr));
#if QT_CONFIG(tooltip)
        Misc->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TabSheet1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PosMode->setItemText(0, QCoreApplication::translate("OptDialog", "Single", nullptr));
        PosMode->setItemText(1, QCoreApplication::translate("OptDialog", "DGPS/DGNSS", nullptr));
        PosMode->setItemText(2, QCoreApplication::translate("OptDialog", "Kinematic", nullptr));
        PosMode->setItemText(3, QCoreApplication::translate("OptDialog", "Static", nullptr));
        PosMode->setItemText(4, QCoreApplication::translate("OptDialog", "Moving-Base", nullptr));
        PosMode->setItemText(5, QCoreApplication::translate("OptDialog", "Fixed", nullptr));
        PosMode->setItemText(6, QCoreApplication::translate("OptDialog", "PPP Kinematic", nullptr));
        PosMode->setItemText(7, QCoreApplication::translate("OptDialog", "PPP Static", nullptr));
        PosMode->setItemText(8, QCoreApplication::translate("OptDialog", "PPP Fixed", nullptr));

#if QT_CONFIG(tooltip)
        PosMode->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        LabelPosMode->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelPosMode->setText(QCoreApplication::translate("OptDialog", "Positioning Mode", nullptr));
#if QT_CONFIG(tooltip)
        Label8->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label8->setText(QCoreApplication::translate("OptDialog", "Ionosphere Correction", nullptr));
        Solution->setItemText(0, QCoreApplication::translate("OptDialog", "Forward", nullptr));
        Solution->setItemText(1, QCoreApplication::translate("OptDialog", "Backward", nullptr));
        Solution->setItemText(2, QCoreApplication::translate("OptDialog", "Combined", nullptr));

#if QT_CONFIG(tooltip)
        Solution->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ElMask->setItemText(0, QCoreApplication::translate("OptDialog", "0", nullptr));
        ElMask->setItemText(1, QCoreApplication::translate("OptDialog", "5", nullptr));
        ElMask->setItemText(2, QCoreApplication::translate("OptDialog", "10", nullptr));
        ElMask->setItemText(3, QCoreApplication::translate("OptDialog", "15", nullptr));
        ElMask->setItemText(4, QCoreApplication::translate("OptDialog", "20", nullptr));
        ElMask->setItemText(5, QCoreApplication::translate("OptDialog", "25", nullptr));
        ElMask->setItemText(6, QCoreApplication::translate("OptDialog", "30", nullptr));
        ElMask->setItemText(7, QCoreApplication::translate("OptDialog", "35", nullptr));
        ElMask->setItemText(8, QCoreApplication::translate("OptDialog", "40", nullptr));
        ElMask->setItemText(9, QCoreApplication::translate("OptDialog", "45", nullptr));
        ElMask->setItemText(10, QCoreApplication::translate("OptDialog", "50", nullptr));
        ElMask->setItemText(11, QCoreApplication::translate("OptDialog", "55", nullptr));
        ElMask->setItemText(12, QCoreApplication::translate("OptDialog", "60", nullptr));
        ElMask->setItemText(13, QCoreApplication::translate("OptDialog", "65", nullptr));
        ElMask->setItemText(14, QCoreApplication::translate("OptDialog", "70", nullptr));

#if QT_CONFIG(tooltip)
        ElMask->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        PosOpt1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PosOpt1->setText(QCoreApplication::translate("OptDialog", "Sat PCV", nullptr));
#if QT_CONFIG(tooltip)
        PosOpt2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PosOpt2->setText(QCoreApplication::translate("OptDialog", "Rec PCV", nullptr));
#if QT_CONFIG(tooltip)
        PosOpt3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PosOpt3->setText(QCoreApplication::translate("OptDialog", "PhWU", nullptr));
#if QT_CONFIG(tooltip)
        PosOpt4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PosOpt4->setText(QCoreApplication::translate("OptDialog", "Rej Ecl", nullptr));
#if QT_CONFIG(tooltip)
        PosOpt5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PosOpt5->setText(QCoreApplication::translate("OptDialog", "RAIM FDE", nullptr));
#if QT_CONFIG(tooltip)
        PosOpt6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PosOpt6->setText(QCoreApplication::translate("OptDialog", "DBCorr", nullptr));
#if QT_CONFIG(tooltip)
        LabelFreq->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelFreq->setText(QCoreApplication::translate("OptDialog", "Frequencies / Filter Type", nullptr));
        Freq->setItemText(0, QCoreApplication::translate("OptDialog", "L1", nullptr));
        Freq->setItemText(1, QCoreApplication::translate("OptDialog", "L1+L2", nullptr));
        Freq->setItemText(2, QCoreApplication::translate("OptDialog", "L1+L2+L5", nullptr));
        Freq->setItemText(3, QCoreApplication::translate("OptDialog", "L1+L5", nullptr));

#if QT_CONFIG(tooltip)
        Freq->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        LabelElMask->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelElMask->setText(QCoreApplication::translate("OptDialog", "Elevation Mask (\302\260) / SNR Mask (dBHz)", nullptr));
        TideCorr->setItemText(0, QCoreApplication::translate("OptDialog", "OFF", nullptr));
        TideCorr->setItemText(1, QCoreApplication::translate("OptDialog", "Solid", nullptr));
        TideCorr->setItemText(2, QCoreApplication::translate("OptDialog", "Solid/OTL", nullptr));

#if QT_CONFIG(tooltip)
        TideCorr->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        DynamicModel->setItemText(0, QCoreApplication::translate("OptDialog", "OFF", nullptr));
        DynamicModel->setItemText(1, QCoreApplication::translate("OptDialog", "ON", nullptr));

#if QT_CONFIG(tooltip)
        DynamicModel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label3->setText(QCoreApplication::translate("OptDialog", "Rec Dynamics / Earth Tides Correction", nullptr));
        IonoOpt->setItemText(0, QCoreApplication::translate("OptDialog", "OFF", nullptr));
        IonoOpt->setItemText(1, QCoreApplication::translate("OptDialog", "Broadcast", nullptr));
        IonoOpt->setItemText(2, QCoreApplication::translate("OptDialog", "SBAS", nullptr));
        IonoOpt->setItemText(3, QCoreApplication::translate("OptDialog", "Iono-Free LC", nullptr));
        IonoOpt->setItemText(4, QCoreApplication::translate("OptDialog", "Estimate TEC", nullptr));
        IonoOpt->setItemText(5, QCoreApplication::translate("OptDialog", "IONEX TEC", nullptr));
        IonoOpt->setItemText(6, QCoreApplication::translate("OptDialog", "QZSS Broardcast", nullptr));
        IonoOpt->setItemText(7, QCoreApplication::translate("OptDialog", "QZSS LEX", nullptr));
        IonoOpt->setItemText(8, QCoreApplication::translate("OptDialog", "Input TEC", nullptr));

#if QT_CONFIG(tooltip)
        IonoOpt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnMask->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnMask->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Label9->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label9->setText(QCoreApplication::translate("OptDialog", "Troposphere Correction", nullptr));
        TropOpt->setItemText(0, QCoreApplication::translate("OptDialog", "OFF", nullptr));
        TropOpt->setItemText(1, QCoreApplication::translate("OptDialog", "Saastamoinen", nullptr));
        TropOpt->setItemText(2, QCoreApplication::translate("OptDialog", "SBAS", nullptr));
        TropOpt->setItemText(3, QCoreApplication::translate("OptDialog", "Estimate ZTD", nullptr));
        TropOpt->setItemText(4, QCoreApplication::translate("OptDialog", "Estimate ZTD+Grad", nullptr));
        TropOpt->setItemText(5, QCoreApplication::translate("OptDialog", "Input ZTD", nullptr));

#if QT_CONFIG(tooltip)
        TropOpt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label32->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label32->setText(QCoreApplication::translate("OptDialog", "Satellite Ephemeris/Clock", nullptr));
        SatEphem->setItemText(0, QCoreApplication::translate("OptDialog", "Broadcast", nullptr));
        SatEphem->setItemText(1, QCoreApplication::translate("OptDialog", "Precise", nullptr));
        SatEphem->setItemText(2, QCoreApplication::translate("OptDialog", "Broadcast+SBAS", nullptr));
        SatEphem->setItemText(3, QCoreApplication::translate("OptDialog", "Broadcast+SSR APC", nullptr));
        SatEphem->setItemText(4, QCoreApplication::translate("OptDialog", "Broadcast+SSR CoM", nullptr));
        SatEphem->setItemText(5, QCoreApplication::translate("OptDialog", "QZSS LEX", nullptr));

#if QT_CONFIG(tooltip)
        SatEphem->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label35->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label35->setText(QCoreApplication::translate("OptDialog", "Excluded Satellites (+PRN: Included)", nullptr));
#if QT_CONFIG(tooltip)
        ExSats->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ExSats->setText(QString());
#if QT_CONFIG(tooltip)
        NavSys1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NavSys1->setText(QCoreApplication::translate("OptDialog", "GPS", nullptr));
#if QT_CONFIG(tooltip)
        NavSys2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NavSys2->setText(QCoreApplication::translate("OptDialog", "GLO", nullptr));
#if QT_CONFIG(tooltip)
        NavSys3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NavSys3->setText(QCoreApplication::translate("OptDialog", "Galileo", nullptr));
#if QT_CONFIG(tooltip)
        NavSys4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NavSys4->setText(QCoreApplication::translate("OptDialog", "QZSS", nullptr));
#if QT_CONFIG(tooltip)
        NavSys5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NavSys5->setText(QCoreApplication::translate("OptDialog", "SBAS", nullptr));
#if QT_CONFIG(tooltip)
        NavSys6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NavSys6->setText(QCoreApplication::translate("OptDialog", "BeiDou", nullptr));
        NavSys7->setText(QCoreApplication::translate("OptDialog", "IRNSS", nullptr));
        Misc->setTabText(Misc->indexOf(TabSheet1), QCoreApplication::translate("OptDialog", "Setting&1", nullptr));
#if QT_CONFIG(tooltip)
        TabSheet2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label25->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label25->setText(QCoreApplication::translate("OptDialog", "Integer Ambiguity Res (GPS/GLO/BDS)", nullptr));
        AmbRes->setItemText(0, QCoreApplication::translate("OptDialog", "OFF", nullptr));
        AmbRes->setItemText(1, QCoreApplication::translate("OptDialog", "Continuous", nullptr));
        AmbRes->setItemText(2, QCoreApplication::translate("OptDialog", "Instantaneous", nullptr));
        AmbRes->setItemText(3, QCoreApplication::translate("OptDialog", "Fix and Hold", nullptr));
        AmbRes->setItemText(4, QCoreApplication::translate("OptDialog", "PPP-AR", nullptr));

#if QT_CONFIG(tooltip)
        AmbRes->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        GloAmbRes->setItemText(0, QCoreApplication::translate("OptDialog", "OFF", nullptr));
        GloAmbRes->setItemText(1, QCoreApplication::translate("OptDialog", "ON", nullptr));
        GloAmbRes->setItemText(2, QCoreApplication::translate("OptDialog", "Auto Calibration", nullptr));

#if QT_CONFIG(tooltip)
        GloAmbRes->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BdsAmbRes->setItemText(0, QCoreApplication::translate("OptDialog", "OFF", nullptr));
        BdsAmbRes->setItemText(1, QCoreApplication::translate("OptDialog", "ON", nullptr));

#if QT_CONFIG(tooltip)
        BdsAmbRes->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        LabelRatio->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelRatio->setText(QCoreApplication::translate("OptDialog", "Min Ratio to Fix Ambiguity", nullptr));
#if QT_CONFIG(tooltip)
        ValidThresAR->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ValidThresAR->setText(QCoreApplication::translate("OptDialog", "3.0", nullptr));
#if QT_CONFIG(tooltip)
        LabelConf->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelConf->setText(QCoreApplication::translate("OptDialog", "Min Confidence / Max FCB to Fix Amb", nullptr));
#if QT_CONFIG(tooltip)
        ThresAR2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ThresAR2->setText(QCoreApplication::translate("OptDialog", "0.99995", nullptr));
#if QT_CONFIG(tooltip)
        ThresAR3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ThresAR3->setText(QCoreApplication::translate("OptDialog", "0.20", nullptr));
#if QT_CONFIG(tooltip)
        Label13->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label13->setText(QCoreApplication::translate("OptDialog", "Min Lock / Elevation (\302\260) to Fix Amb", nullptr));
#if QT_CONFIG(tooltip)
        LockCntFixAmb->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LockCntFixAmb->setText(QCoreApplication::translate("OptDialog", "5", nullptr));
#if QT_CONFIG(tooltip)
        ElMaskAR->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ElMaskAR->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        LabelHold->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelHold->setText(QCoreApplication::translate("OptDialog", "Min Fix / Elevation (\302\260) to Hold Amb", nullptr));
#if QT_CONFIG(tooltip)
        FixCntHoldAmb->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FixCntHoldAmb->setText(QCoreApplication::translate("OptDialog", "10", nullptr));
#if QT_CONFIG(tooltip)
        ElMaskHold->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ElMaskHold->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        Label22->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label22->setText(QCoreApplication::translate("OptDialog", "Outage to Reset Amb/Slip Thres (m)", nullptr));
#if QT_CONFIG(tooltip)
        OutCntResetAmb->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        OutCntResetAmb->setText(QCoreApplication::translate("OptDialog", "5", nullptr));
#if QT_CONFIG(tooltip)
        SlipThres->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SlipThres->setText(QCoreApplication::translate("OptDialog", "0.05", nullptr));
#if QT_CONFIG(tooltip)
        Label14->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label14->setText(QCoreApplication::translate("OptDialog", "Max Age of Diff (s) / Sync Solution", nullptr));
#if QT_CONFIG(tooltip)
        MaxAgeDiff->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MaxAgeDiff->setText(QCoreApplication::translate("OptDialog", "30", nullptr));
        SyncSol->setItemText(0, QCoreApplication::translate("OptDialog", "OFF", nullptr));
        SyncSol->setItemText(1, QCoreApplication::translate("OptDialog", "ON", nullptr));
        SyncSol->setItemText(2, QCoreApplication::translate("OptDialog", "Auto Calibration", nullptr));

#if QT_CONFIG(tooltip)
        SyncSol->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label11->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label11->setText(QCoreApplication::translate("OptDialog", "Reject Threshold of GDOP/Innov (m)", nullptr));
#if QT_CONFIG(tooltip)
        RejectGdop->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RejectGdop->setText(QCoreApplication::translate("OptDialog", "30", nullptr));
#if QT_CONFIG(tooltip)
        RejectThres->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RejectThres->setText(QCoreApplication::translate("OptDialog", "30", nullptr));
#if QT_CONFIG(tooltip)
        Label37->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label37->setText(QCoreApplication::translate("OptDialog", "Max # of AR Iter/# of Filter Iter", nullptr));
#if QT_CONFIG(tooltip)
        ARIter->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ARIter->setText(QCoreApplication::translate("OptDialog", "1", nullptr));
#if QT_CONFIG(tooltip)
        NumIter->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NumIter->setText(QCoreApplication::translate("OptDialog", "1", nullptr));
#if QT_CONFIG(tooltip)
        BaselineConst->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BaselineConst->setText(QCoreApplication::translate("OptDialog", "Baseline Length Constraint (m)", nullptr));
#if QT_CONFIG(tooltip)
        BaselineLen->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BaselineLen->setText(QCoreApplication::translate("OptDialog", "0.0", nullptr));
#if QT_CONFIG(tooltip)
        BaselineSig->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BaselineSig->setText(QCoreApplication::translate("OptDialog", "0.001", nullptr));
        Misc->setTabText(Misc->indexOf(TabSheet2), QCoreApplication::translate("OptDialog", "Setting&2", nullptr));
#if QT_CONFIG(tooltip)
        TabSheet3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        LabelSolFormat->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelSolFormat->setText(QCoreApplication::translate("OptDialog", "Solution Format", nullptr));
        SolFormat->setItemText(0, QCoreApplication::translate("OptDialog", "Lat/Lon/Height", nullptr));
        SolFormat->setItemText(1, QCoreApplication::translate("OptDialog", "X/Y/Z-ECEF", nullptr));
        SolFormat->setItemText(2, QCoreApplication::translate("OptDialog", "E/N/U-Baseline", nullptr));
        SolFormat->setItemText(3, QCoreApplication::translate("OptDialog", "NMEA0183", nullptr));

#if QT_CONFIG(tooltip)
        SolFormat->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label20->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label20->setText(QCoreApplication::translate("OptDialog", "Output Header/Processing Options", nullptr));
        OutputHead->setItemText(0, QCoreApplication::translate("OptDialog", "OFF", nullptr));
        OutputHead->setItemText(1, QCoreApplication::translate("OptDialog", "ON", nullptr));

#if QT_CONFIG(tooltip)
        OutputHead->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        OutputOpt->setItemText(0, QCoreApplication::translate("OptDialog", "OFF", nullptr));
        OutputOpt->setItemText(1, QCoreApplication::translate("OptDialog", "ON", nullptr));

#if QT_CONFIG(tooltip)
        OutputOpt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        LabelTimeFormat->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelTimeFormat->setText(QCoreApplication::translate("OptDialog", "Time Format / # of Decimals", nullptr));
        TimeFormat->setItemText(0, QCoreApplication::translate("OptDialog", "ww ssss GPST", nullptr));
        TimeFormat->setItemText(1, QCoreApplication::translate("OptDialog", "hh:mm:ss GPST", nullptr));
        TimeFormat->setItemText(2, QCoreApplication::translate("OptDialog", "hh:mm:ss UTC", nullptr));
        TimeFormat->setItemText(3, QCoreApplication::translate("OptDialog", "hh:mm:ss JST", nullptr));

#if QT_CONFIG(tooltip)
        TimeFormat->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TimeDecimal->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeDecimal->setText(QCoreApplication::translate("OptDialog", "3", nullptr));
#if QT_CONFIG(tooltip)
        LabelLatLonFormat->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelLatLonFormat->setText(QCoreApplication::translate("OptDialog", "Latitude / Longitude Format", nullptr));
        LatLonFormat->setItemText(0, QCoreApplication::translate("OptDialog", "ddd.ddddddd", nullptr));
        LatLonFormat->setItemText(1, QCoreApplication::translate("OptDialog", "ddd mm ss.sss", nullptr));

#if QT_CONFIG(tooltip)
        LatLonFormat->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        LabelFieldSep->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelFieldSep->setText(QCoreApplication::translate("OptDialog", "Field Separator", nullptr));
#if QT_CONFIG(tooltip)
        FieldSep->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FieldSep->setText(QString());
#if QT_CONFIG(tooltip)
        Label2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label2->setText(QCoreApplication::translate("OptDialog", "Datum/Height", nullptr));
        OutputDatum->setItemText(0, QCoreApplication::translate("OptDialog", "WGS84", nullptr));

#if QT_CONFIG(tooltip)
        OutputDatum->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        OutputHeight->setItemText(0, QCoreApplication::translate("OptDialog", "Ellipsoidal", nullptr));
        OutputHeight->setItemText(1, QCoreApplication::translate("OptDialog", "Geodetic", nullptr));

#if QT_CONFIG(tooltip)
        OutputHeight->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label18->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label18->setText(QCoreApplication::translate("OptDialog", "Geoid Model", nullptr));
        OutputGeoid->setItemText(0, QCoreApplication::translate("OptDialog", "Internal", nullptr));
        OutputGeoid->setItemText(1, QCoreApplication::translate("OptDialog", "EGM96-BE 15\"", nullptr));
        OutputGeoid->setItemText(2, QCoreApplication::translate("OptDialog", "EGM2008-SE 2.5\"", nullptr));
        OutputGeoid->setItemText(3, QCoreApplication::translate("OptDialog", "EGM2008-SE 1.0\"", nullptr));
        OutputGeoid->setItemText(4, QCoreApplication::translate("OptDialog", "GSI2000 1x1.5\"", nullptr));

#if QT_CONFIG(tooltip)
        OutputGeoid->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label31->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label31->setText(QCoreApplication::translate("OptDialog", "Solution for Static Mode", nullptr));
        SolStatic->setItemText(0, QCoreApplication::translate("OptDialog", "All", nullptr));
        SolStatic->setItemText(1, QCoreApplication::translate("OptDialog", "Single", nullptr));

#if QT_CONFIG(tooltip)
        SolStatic->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label21->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label21->setText(QCoreApplication::translate("OptDialog", "NMEA Interval (s) RMC/GGA, GSA/GSV", nullptr));
#if QT_CONFIG(tooltip)
        NmeaIntv1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NmeaIntv1->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        NmeaIntv2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NmeaIntv2->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        Label36->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label36->setText(QCoreApplication::translate("OptDialog", "Output Solution Status / Debug Trace", nullptr));
        DebugStatus->setItemText(0, QCoreApplication::translate("OptDialog", "OFF", nullptr));
        DebugStatus->setItemText(1, QCoreApplication::translate("OptDialog", "State", nullptr));
        DebugStatus->setItemText(2, QCoreApplication::translate("OptDialog", "Residuals", nullptr));

#if QT_CONFIG(tooltip)
        DebugStatus->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        DebugTrace->setItemText(0, QCoreApplication::translate("OptDialog", "OFF", nullptr));
        DebugTrace->setItemText(1, QCoreApplication::translate("OptDialog", "Level1", nullptr));
        DebugTrace->setItemText(2, QCoreApplication::translate("OptDialog", "Level2", nullptr));
        DebugTrace->setItemText(3, QCoreApplication::translate("OptDialog", "Level3", nullptr));
        DebugTrace->setItemText(4, QCoreApplication::translate("OptDialog", "Level4", nullptr));
        DebugTrace->setItemText(5, QCoreApplication::translate("OptDialog", "Level5", nullptr));

#if QT_CONFIG(tooltip)
        DebugTrace->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Misc->setTabText(Misc->indexOf(TabSheet3), QCoreApplication::translate("OptDialog", "O&utput", nullptr));
#if QT_CONFIG(tooltip)
        TabSheet4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        GroupBox3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        GroupBox3->setTitle(QCoreApplication::translate("OptDialog", "Measurement Errors (1-sigma)", nullptr));
#if QT_CONFIG(tooltip)
        MeasErrR1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MeasErrR1->setText(QCoreApplication::translate("OptDialog", "100.0", nullptr));
#if QT_CONFIG(tooltip)
        MeasErrR2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MeasErrR2->setText(QCoreApplication::translate("OptDialog", "100.0", nullptr));
#if QT_CONFIG(tooltip)
        Label7->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label7->setText(QCoreApplication::translate("OptDialog", "Carrier-Phase Error a+b/sinEl (m)", nullptr));
#if QT_CONFIG(tooltip)
        MeasErr2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MeasErr2->setText(QCoreApplication::translate("OptDialog", "0.003", nullptr));
#if QT_CONFIG(tooltip)
        MeasErr3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MeasErr3->setText(QCoreApplication::translate("OptDialog", "0.003", nullptr));
#if QT_CONFIG(tooltip)
        Label16->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label16->setText(QCoreApplication::translate("OptDialog", "Carrier-Phase Error/Baseline (m/10km)", nullptr));
#if QT_CONFIG(tooltip)
        MeasErr4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MeasErr4->setText(QCoreApplication::translate("OptDialog", "0.000", nullptr));
#if QT_CONFIG(tooltip)
        Label64->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label64->setText(QCoreApplication::translate("OptDialog", "Doppler Frequency (Hz)", nullptr));
#if QT_CONFIG(tooltip)
        MeasErr5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MeasErr5->setText(QCoreApplication::translate("OptDialog", "0.100", nullptr));
#if QT_CONFIG(tooltip)
        Label6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label6->setText(QCoreApplication::translate("OptDialog", "Code/Carrier-Phase Error Ratio L1/L2", nullptr));
#if QT_CONFIG(tooltip)
        Label29->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label29->setText(QCoreApplication::translate("OptDialog", "Satellite Clock Stability (s/s)", nullptr));
#if QT_CONFIG(tooltip)
        SatClkStab->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SatClkStab->setText(QCoreApplication::translate("OptDialog", "5.0E-12", nullptr));
#if QT_CONFIG(tooltip)
        GroupBox4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        GroupBox4->setTitle(QCoreApplication::translate("OptDialog", "Process Noises (1-sigma/sqrt(s))", nullptr));
#if QT_CONFIG(tooltip)
        Label26->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label26->setText(QCoreApplication::translate("OptDialog", "Carrier-Phase Bias (cycle)", nullptr));
#if QT_CONFIG(tooltip)
        PrNoise2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PrNoise2->setText(QCoreApplication::translate("OptDialog", "1.0E-03", nullptr));
#if QT_CONFIG(tooltip)
        Label27->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label27->setText(QCoreApplication::translate("OptDialog", "Vertical Ionospheric Delay (m/10km)", nullptr));
#if QT_CONFIG(tooltip)
        Label10->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label10->setText(QCoreApplication::translate("OptDialog", "Receiver Accel Horiz/Vertical (m/s2)", nullptr));
#if QT_CONFIG(tooltip)
        PrNoise4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PrNoise4->setText(QCoreApplication::translate("OptDialog", "1.0E-04", nullptr));
#if QT_CONFIG(tooltip)
        PrNoise5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PrNoise5->setText(QCoreApplication::translate("OptDialog", "1.0E-04", nullptr));
#if QT_CONFIG(tooltip)
        Label28->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label28->setText(QCoreApplication::translate("OptDialog", "Zenith Tropospheric Delay (m)", nullptr));
#if QT_CONFIG(tooltip)
        PrNoise3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PrNoise3->setText(QCoreApplication::translate("OptDialog", "1.0E-04", nullptr));
#if QT_CONFIG(tooltip)
        PrNoise1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PrNoise1->setText(QCoreApplication::translate("OptDialog", "1.0E-04", nullptr));
        Misc->setTabText(Misc->indexOf(TabSheet4), QCoreApplication::translate("OptDialog", "S&tatistics", nullptr));
#if QT_CONFIG(tooltip)
        TabSheet5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnStaPosView->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnStaPosView->setText(QString());
#if QT_CONFIG(tooltip)
        BtnStaPosFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnStaPosFile->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        StaPosFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        StaPosFile->setText(QString());
#if QT_CONFIG(tooltip)
        Label4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label4->setText(QString());
#if QT_CONFIG(tooltip)
        Label30->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label30->setText(QCoreApplication::translate("OptDialog", "Station Position File", nullptr));
#if QT_CONFIG(tooltip)
        GroupRefAnt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        GroupRefAnt->setTitle(QCoreApplication::translate("OptDialog", "Base Station", nullptr));
        RefPosType->setItemText(0, QCoreApplication::translate("OptDialog", "Lat/Lon/Height deg/m", nullptr));
        RefPosType->setItemText(1, QCoreApplication::translate("OptDialog", "Lat/Lon/Height dms/m", nullptr));
        RefPosType->setItemText(2, QCoreApplication::translate("OptDialog", "X/Y/Z-ECEF m", nullptr));
        RefPosType->setItemText(3, QCoreApplication::translate("OptDialog", "Average of Single Position", nullptr));
        RefPosType->setItemText(4, QCoreApplication::translate("OptDialog", "Get from Position File", nullptr));
        RefPosType->setItemText(5, QCoreApplication::translate("OptDialog", "RINEX Header Postion", nullptr));

#if QT_CONFIG(tooltip)
        RefPosType->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnRefPos->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnRefPos->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        RefPos1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RefPos1->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        RefPos2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RefPos2->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        RefPos3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RefPos3->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        RefAntPcv->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RefAntPcv->setText(QCoreApplication::translate("OptDialog", "Antenna Type (*: Auto)", nullptr));
#if QT_CONFIG(tooltip)
        LabelRefAntD->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelRefAntD->setText(QCoreApplication::translate("OptDialog", "Delta-E/N/U (m)", nullptr));
#if QT_CONFIG(tooltip)
        RefAnt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        RefAntE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RefAntE->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        RefAntN->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RefAntN->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        RefAntU->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RefAntU->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        GroupRovAnt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        GroupRovAnt->setTitle(QCoreApplication::translate("OptDialog", "Rover", nullptr));
        RovPosType->setItemText(0, QCoreApplication::translate("OptDialog", "Lat/Lon/Height deg/m", nullptr));
        RovPosType->setItemText(1, QCoreApplication::translate("OptDialog", "Lat/Lon/Height dms/m", nullptr));
        RovPosType->setItemText(2, QCoreApplication::translate("OptDialog", "X/Y/Z-ECEF m", nullptr));
        RovPosType->setItemText(3, QCoreApplication::translate("OptDialog", "Average of Single Pos", nullptr));
        RovPosType->setItemText(4, QCoreApplication::translate("OptDialog", "Get from Position File", nullptr));
        RovPosType->setItemText(5, QCoreApplication::translate("OptDialog", "RINEX Header Position", nullptr));

#if QT_CONFIG(tooltip)
        RovPosType->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnRovPos->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnRovPos->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        RovPos1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RovPos1->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        RovPos2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RovPos2->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        RovPos3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RovPos3->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        RovAntPcv->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RovAntPcv->setText(QCoreApplication::translate("OptDialog", "Antenna Type (*: Auto)", nullptr));
#if QT_CONFIG(tooltip)
        LabelRovAntD->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelRovAntD->setText(QCoreApplication::translate("OptDialog", "Delta-E/N/U (m)", nullptr));
#if QT_CONFIG(tooltip)
        RovAnt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        RovAntE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RovAntE->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        RovAntN->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RovAntN->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        RovAntU->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RovAntU->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
        Misc->setTabText(Misc->indexOf(TabSheet5), QCoreApplication::translate("OptDialog", "&Positions", nullptr));
#if QT_CONFIG(tooltip)
        TabSheet7->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label38->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label38->setText(QCoreApplication::translate("OptDialog", "Satellite/Receiver Antenna PCV File ANTEX/NGS PCV", nullptr));
#if QT_CONFIG(tooltip)
        BtnSatPcvView->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnSatPcvView->setText(QString());
#if QT_CONFIG(tooltip)
        BtnAntPcvView->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnAntPcvView->setText(QString());
#if QT_CONFIG(tooltip)
        SatPcvFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SatPcvFile->setText(QString());
#if QT_CONFIG(tooltip)
        BtnSatPcvFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnSatPcvFile->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        AntPcvFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        AntPcvFile->setText(QString());
#if QT_CONFIG(tooltip)
        BtnAntPcvFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnAntPcvFile->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        GeoidDataFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        GeoidDataFile->setText(QString());
#if QT_CONFIG(tooltip)
        BtnGeoidDataFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnGeoidDataFile->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Label15->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label15->setText(QCoreApplication::translate("OptDialog", "DCB Data File", nullptr));
#if QT_CONFIG(tooltip)
        BtnDCBView->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnDCBView->setText(QString());
#if QT_CONFIG(tooltip)
        DCBFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        DCBFile->setText(QString());
#if QT_CONFIG(tooltip)
        BtnDCBFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnDCBFile->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Label17->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label17->setText(QCoreApplication::translate("OptDialog", "EOP Data File", nullptr));
#if QT_CONFIG(tooltip)
        BtnEOPView->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnEOPView->setText(QString());
#if QT_CONFIG(tooltip)
        EOPFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        EOPFile->setText(QString());
#if QT_CONFIG(tooltip)
        BtnEOPFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnEOPFile->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Label34->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label34->setText(QCoreApplication::translate("OptDialog", "OTL BLQ File", nullptr));
#if QT_CONFIG(tooltip)
        BtnBLQFileView->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnBLQFileView->setText(QString());
#if QT_CONFIG(tooltip)
        BLQFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BLQFile->setText(QString());
#if QT_CONFIG(tooltip)
        BtnBLQFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnBLQFile->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("OptDialog", "Ionosphere Data File", nullptr));
#if QT_CONFIG(tooltip)
        IonoFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        IonoFile->setText(QString());
#if QT_CONFIG(tooltip)
        BtnIonoFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnIonoFile->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Label63->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label63->setText(QCoreApplication::translate("OptDialog", "Geoid Data File", nullptr));
        Misc->setTabText(Misc->indexOf(TabSheet7), QCoreApplication::translate("OptDialog", "&Files", nullptr));
#if QT_CONFIG(tooltip)
        TabSheet6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel1->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        BtnHelp->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnHelp->setText(QCoreApplication::translate("OptDialog", "?", nullptr));
#if QT_CONFIG(tooltip)
        Label46->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label46->setText(QCoreApplication::translate("OptDialog", ":", nullptr));
#if QT_CONFIG(tooltip)
        Label62->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label62->setText(QCoreApplication::translate("OptDialog", "Keywords in File Path", nullptr));
#if QT_CONFIG(tooltip)
        Label43->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label43->setText(QCoreApplication::translate("OptDialog", "#..:", nullptr));
#if QT_CONFIG(tooltip)
        Label65->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label65->setText(QCoreApplication::translate("OptDialog", "Comment in List", nullptr));
#if QT_CONFIG(tooltip)
        Label41->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label41->setText(QCoreApplication::translate("OptDialog", "Time Interpolation of Base Station Data", nullptr));
        IntpRefObs->setItemText(0, QCoreApplication::translate("OptDialog", "OFF", nullptr));
        IntpRefObs->setItemText(1, QCoreApplication::translate("OptDialog", "ON", nullptr));

#if QT_CONFIG(tooltip)
        IntpRefObs->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label42->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label42->setText(QCoreApplication::translate("OptDialog", "DGPS/DGNSS Corrections", nullptr));
        ComboBox1->setItemText(0, QCoreApplication::translate("OptDialog", "SBAS", nullptr));
        ComboBox1->setItemText(1, QCoreApplication::translate("OptDialog", "RTCM", nullptr));

#if QT_CONFIG(tooltip)
        ComboBox1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label40->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label40->setText(QCoreApplication::translate("OptDialog", "SBAS Satellite Selection (0: All) ", nullptr));
#if QT_CONFIG(tooltip)
        SbasSat->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SbasSat->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        Label60->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label60->setText(QCoreApplication::translate("OptDialog", "RINEX Opt (Rover)", nullptr));
#if QT_CONFIG(tooltip)
        RnxOpts1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RnxOpts1->setText(QString());
#if QT_CONFIG(tooltip)
        Label12->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label12->setText(QCoreApplication::translate("OptDialog", "RINEX Opt (Base)", nullptr));
#if QT_CONFIG(tooltip)
        RnxOpts2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RnxOpts2->setText(QString());
#if QT_CONFIG(tooltip)
        Label23->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label23->setText(QCoreApplication::translate("OptDialog", "PPP Options", nullptr));
#if QT_CONFIG(tooltip)
        PPPOpts->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PPPOpts->setText(QString());
#if QT_CONFIG(tooltip)
        Label45->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label45->setText(QCoreApplication::translate("OptDialog", "Station ID List", nullptr));
#if QT_CONFIG(tooltip)
        Label19->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label19->setText(QCoreApplication::translate("OptDialog", "Rovers", nullptr));
#if QT_CONFIG(tooltip)
        Label44->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label44->setText(QCoreApplication::translate("OptDialog", "Base Stations", nullptr));
#if QT_CONFIG(tooltip)
        RovList->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RovList->setPlainText(QCoreApplication::translate("OptDialog", "rover", nullptr));
#if QT_CONFIG(tooltip)
        BaseList->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BaseList->setPlainText(QCoreApplication::translate("OptDialog", "base", nullptr));
        Misc->setTabText(Misc->indexOf(TabSheet6), QCoreApplication::translate("OptDialog", "&Misc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptDialog: public Ui_OptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTOPT_H
