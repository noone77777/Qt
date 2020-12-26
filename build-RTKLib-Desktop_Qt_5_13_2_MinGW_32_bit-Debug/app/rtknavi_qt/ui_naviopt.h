/********************************************************************************
** Form generated from reading UI file 'naviopt.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIOPT_H
#define UI_NAVIOPT_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *Options;
    QWidget *TabSheet1;
    QGridLayout *gridLayout;
    QLabel *Label3;
    QComboBox *DynamicModel;
    QComboBox *TideCorr;
    QLabel *Label8;
    QLabel *Label9;
    QComboBox *TropOpt;
    QComboBox *Freq;
    QComboBox *Solution;
    QLabel *LabelElMask;
    QComboBox *IonoOpt;
    QComboBox *ElMask;
    QLabel *Label32;
    QPushButton *BtnSnrMask;
    QComboBox *PosMode;
    QLabel *LabelFreq;
    QComboBox *SatEphem;
    QCheckBox *PosOpt1;
    QCheckBox *PosOpt2;
    QCheckBox *PosOpt3;
    QCheckBox *PosOpt4;
    QCheckBox *PosOpt5;
    QLabel *Label35;
    QLabel *LabelPosMode;
    QLineEdit *ExSatsE;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
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
    QLabel *Label24;
    QLineEdit *ValidThresAR;
    QLabel *Label12;
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
    QLabel *Label21;
    QComboBox *SolStatic;
    QLabel *Label17;
    QLineEdit *NmeaIntv1;
    QLineEdit *NmeaIntv2;
    QLabel *Label36;
    QComboBox *DebugStatus;
    QComboBox *DebugTrace;
    QWidget *TabSheet4;
    QGridLayout *gridLayout_4;
    QGroupBox *GroupBox3;
    QGridLayout *gridLayout_8;
    QLabel *Label6;
    QLineEdit *MeasErrR1;
    QLineEdit *MeasErrR2;
    QLabel *Label7;
    QLineEdit *MeasErr2;
    QLineEdit *MeasErr3;
    QLabel *Label16;
    QLineEdit *MeasErr4;
    QLabel *Label10;
    QLineEdit *MeasErr5;
    QGroupBox *GroupBox4;
    QGridLayout *gridLayout_9;
    QLabel *Label33;
    QLineEdit *PrNoise4;
    QLineEdit *PrNoise5;
    QLabel *Label26;
    QLineEdit *PrNoise1;
    QLabel *Label27;
    QLineEdit *PrNoise2;
    QLabel *Label28;
    QLineEdit *PrNoise3;
    QLabel *Label29;
    QLineEdit *SatClkStab;
    QWidget *TabSheet5;
    QGridLayout *gridLayout_5;
    QGroupBox *GroupRovAnt;
    QGridLayout *gridLayout_11;
    QComboBox *RovPosTypeP;
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
    QLabel *Label4;
    QGroupBox *GroupRefAnt;
    QGridLayout *gridLayout_10;
    QComboBox *RefAnt;
    QCheckBox *RefAntPcv;
    QLabel *LabelRefAntD;
    QCheckBox *ChkInitRestart;
    QPushButton *BtnRefPos;
    QLineEdit *RefPos1;
    QLineEdit *RefPos2;
    QLineEdit *RefPos3;
    QLineEdit *RefAntU;
    QLineEdit *RefAntE;
    QLineEdit *RefAntN;
    QSpinBox *MaxAveEp;
    QComboBox *RefPosTypeP;
    QLabel *LabelMaxAveEp;
    QLabel *Label30;
    QPushButton *BtnStaPosView;
    QLineEdit *StaPosFile;
    QPushButton *BtnStaPosFile;
    QWidget *TabSheet7;
    QGridLayout *gridLayout_6;
    QPushButton *BtnSatPcvView;
    QLineEdit *SatPcvFile;
    QPushButton *BtnSatPcvFile;
    QPushButton *BtnAntPcvFile;
    QLineEdit *AntPcvFile;
    QLineEdit *GeoidDataFile;
    QPushButton *BtnGeoidDataFile;
    QLabel *Label48;
    QLabel *Label1;
    QLineEdit *LocalDir;
    QLabel *Label31;
    QPushButton *BtnLocalDir;
    QPushButton *BtnDCBFile;
    QPushButton *BtnDCBView;
    QLineEdit *DCBFile;
    QPushButton *BtnEOPView;
    QLabel *Label23;
    QLineEdit *EOPFile;
    QPushButton *BtnEOPFile;
    QPushButton *BtnOLFileView;
    QLineEdit *OLFile;
    QLabel *Label34;
    QPushButton *BtnOLFile;
    QLabel *Label38;
    QPushButton *BtnAntPcvView;
    QWidget *TabSheet8;
    QGridLayout *gridLayout_7;
    QLabel *Label19;
    QLineEdit *SvrCycleE;
    QLineEdit *SvrBuffSizeE;
    QLabel *Label44;
    QLineEdit *TimeoutTimeE;
    QLineEdit *ReconTimeE;
    QLabel *Label46;
    QLineEdit *NmeaCycleE;
    QLineEdit *FileSwapMarginE;
    QLabel *Label41;
    QLineEdit *SolBuffSizeE;
    QLineEdit *SavedSolE;
    QLabel *Label42;
    QComboBox *NavSelectS;
    QLabel *Label5;
    QLineEdit *SbasSatE;
    QLineEdit *MoniPortE;
    QLabel *Label45;
    QLineEdit *ProxyAddrE;
    QLabel *Label43;
    QComboBox *PanelStackE;
    QLabel *Label40;
    QLabel *FontLabel;
    QPushButton *BtnFont;
    QLabel *Label15;
    QLineEdit *TLEFile;
    QPushButton *BtnTLEFile;
    QLabel *Label39;
    QLineEdit *TLESatFile;
    QPushButton *BtnTLESatFile;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *Label47;
    QPushButton *BtnLoad;
    QPushButton *BtnSave;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *OptDialog)
    {
        if (OptDialog->objectName().isEmpty())
            OptDialog->setObjectName(QString::fromUtf8("OptDialog"));
        OptDialog->resize(640, 549);
        verticalLayout = new QVBoxLayout(OptDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Options = new QTabWidget(OptDialog);
        Options->setObjectName(QString::fromUtf8("Options"));
        Options->setTabPosition(QTabWidget::North);
        TabSheet1 = new QWidget();
        TabSheet1->setObjectName(QString::fromUtf8("TabSheet1"));
        gridLayout = new QGridLayout(TabSheet1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Label3 = new QLabel(TabSheet1);
        Label3->setObjectName(QString::fromUtf8("Label3"));
        Label3->setEnabled(true);

        gridLayout->addWidget(Label3, 3, 0, 1, 6);

        DynamicModel = new QComboBox(TabSheet1);
        DynamicModel->addItem(QString());
        DynamicModel->addItem(QString());
        DynamicModel->setObjectName(QString::fromUtf8("DynamicModel"));
        DynamicModel->setEnabled(true);

        gridLayout->addWidget(DynamicModel, 3, 6, 1, 2);

        TideCorr = new QComboBox(TabSheet1);
        TideCorr->addItem(QString());
        TideCorr->addItem(QString());
        TideCorr->setObjectName(QString::fromUtf8("TideCorr"));
        TideCorr->setEnabled(true);

        gridLayout->addWidget(TideCorr, 3, 8, 1, 1);

        Label8 = new QLabel(TabSheet1);
        Label8->setObjectName(QString::fromUtf8("Label8"));
        Label8->setEnabled(true);

        gridLayout->addWidget(Label8, 4, 0, 1, 4);

        Label9 = new QLabel(TabSheet1);
        Label9->setObjectName(QString::fromUtf8("Label9"));
        Label9->setEnabled(true);

        gridLayout->addWidget(Label9, 5, 0, 1, 4);

        TropOpt = new QComboBox(TabSheet1);
        TropOpt->addItem(QString());
        TropOpt->addItem(QString());
        TropOpt->addItem(QString());
        TropOpt->addItem(QString());
        TropOpt->addItem(QString());
        TropOpt->setObjectName(QString::fromUtf8("TropOpt"));
        TropOpt->setEnabled(true);

        gridLayout->addWidget(TropOpt, 5, 6, 1, 3);

        Freq = new QComboBox(TabSheet1);
        Freq->addItem(QString());
        Freq->addItem(QString());
        Freq->setObjectName(QString::fromUtf8("Freq"));
        Freq->setEnabled(true);

        gridLayout->addWidget(Freq, 1, 6, 1, 2);

        Solution = new QComboBox(TabSheet1);
        Solution->addItem(QString());
        Solution->addItem(QString());
        Solution->addItem(QString());
        Solution->setObjectName(QString::fromUtf8("Solution"));
        Solution->setEnabled(false);

        gridLayout->addWidget(Solution, 1, 8, 1, 1);

        LabelElMask = new QLabel(TabSheet1);
        LabelElMask->setObjectName(QString::fromUtf8("LabelElMask"));
        LabelElMask->setEnabled(true);

        gridLayout->addWidget(LabelElMask, 2, 0, 1, 6);

        IonoOpt = new QComboBox(TabSheet1);
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

        gridLayout->addWidget(IonoOpt, 4, 6, 1, 3);

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

        gridLayout->addWidget(ElMask, 2, 6, 1, 2);

        Label32 = new QLabel(TabSheet1);
        Label32->setObjectName(QString::fromUtf8("Label32"));
        Label32->setEnabled(true);

        gridLayout->addWidget(Label32, 6, 0, 1, 4);

        BtnSnrMask = new QPushButton(TabSheet1);
        BtnSnrMask->setObjectName(QString::fromUtf8("BtnSnrMask"));
        BtnSnrMask->setEnabled(true);

        gridLayout->addWidget(BtnSnrMask, 2, 8, 1, 1);

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

        gridLayout->addWidget(PosMode, 0, 6, 1, 3);

        LabelFreq = new QLabel(TabSheet1);
        LabelFreq->setObjectName(QString::fromUtf8("LabelFreq"));
        LabelFreq->setEnabled(true);

        gridLayout->addWidget(LabelFreq, 1, 0, 1, 4);

        SatEphem = new QComboBox(TabSheet1);
        SatEphem->addItem(QString());
        SatEphem->addItem(QString());
        SatEphem->addItem(QString());
        SatEphem->addItem(QString());
        SatEphem->addItem(QString());
        SatEphem->addItem(QString());
        SatEphem->setObjectName(QString::fromUtf8("SatEphem"));
        SatEphem->setEnabled(true);

        gridLayout->addWidget(SatEphem, 6, 6, 1, 3);

        PosOpt1 = new QCheckBox(TabSheet1);
        PosOpt1->setObjectName(QString::fromUtf8("PosOpt1"));
        PosOpt1->setChecked(false);

        gridLayout->addWidget(PosOpt1, 7, 0, 1, 2);

        PosOpt2 = new QCheckBox(TabSheet1);
        PosOpt2->setObjectName(QString::fromUtf8("PosOpt2"));
        PosOpt2->setChecked(false);

        gridLayout->addWidget(PosOpt2, 7, 2, 1, 2);

        PosOpt3 = new QCheckBox(TabSheet1);
        PosOpt3->setObjectName(QString::fromUtf8("PosOpt3"));
        PosOpt3->setChecked(false);

        gridLayout->addWidget(PosOpt3, 7, 4, 1, 2);

        PosOpt4 = new QCheckBox(TabSheet1);
        PosOpt4->setObjectName(QString::fromUtf8("PosOpt4"));
        PosOpt4->setChecked(false);

        gridLayout->addWidget(PosOpt4, 7, 6, 1, 2);

        PosOpt5 = new QCheckBox(TabSheet1);
        PosOpt5->setObjectName(QString::fromUtf8("PosOpt5"));
        PosOpt5->setChecked(false);

        gridLayout->addWidget(PosOpt5, 7, 8, 1, 1);

        Label35 = new QLabel(TabSheet1);
        Label35->setObjectName(QString::fromUtf8("Label35"));
        Label35->setEnabled(true);

        gridLayout->addWidget(Label35, 8, 0, 1, 6);

        LabelPosMode = new QLabel(TabSheet1);
        LabelPosMode->setObjectName(QString::fromUtf8("LabelPosMode"));
        LabelPosMode->setEnabled(true);

        gridLayout->addWidget(LabelPosMode, 0, 0, 1, 3);

        ExSatsE = new QLineEdit(TabSheet1);
        ExSatsE->setObjectName(QString::fromUtf8("ExSatsE"));
        ExSatsE->setEnabled(true);

        gridLayout->addWidget(ExSatsE, 8, 6, 1, 3);

        widget_2 = new QWidget(TabSheet1);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        NavSys1 = new QCheckBox(widget_2);
        NavSys1->setObjectName(QString::fromUtf8("NavSys1"));
        NavSys1->setChecked(true);

        horizontalLayout_2->addWidget(NavSys1);

        NavSys2 = new QCheckBox(widget_2);
        NavSys2->setObjectName(QString::fromUtf8("NavSys2"));
        NavSys2->setChecked(false);

        horizontalLayout_2->addWidget(NavSys2);

        NavSys3 = new QCheckBox(widget_2);
        NavSys3->setObjectName(QString::fromUtf8("NavSys3"));
        NavSys3->setChecked(false);

        horizontalLayout_2->addWidget(NavSys3);

        NavSys4 = new QCheckBox(widget_2);
        NavSys4->setObjectName(QString::fromUtf8("NavSys4"));
        NavSys4->setChecked(false);

        horizontalLayout_2->addWidget(NavSys4);

        NavSys5 = new QCheckBox(widget_2);
        NavSys5->setObjectName(QString::fromUtf8("NavSys5"));
        NavSys5->setChecked(false);

        horizontalLayout_2->addWidget(NavSys5);

        NavSys6 = new QCheckBox(widget_2);
        NavSys6->setObjectName(QString::fromUtf8("NavSys6"));
        NavSys6->setChecked(false);

        horizontalLayout_2->addWidget(NavSys6);

        NavSys7 = new QCheckBox(widget_2);
        NavSys7->setObjectName(QString::fromUtf8("NavSys7"));

        horizontalLayout_2->addWidget(NavSys7);


        gridLayout->addWidget(widget_2, 9, 0, 1, 9);

        Options->addTab(TabSheet1, QString());
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

        Label24 = new QLabel(TabSheet2);
        Label24->setObjectName(QString::fromUtf8("Label24"));
        Label24->setEnabled(true);

        gridLayout_2->addWidget(Label24, 1, 0, 1, 1);

        ValidThresAR = new QLineEdit(TabSheet2);
        ValidThresAR->setObjectName(QString::fromUtf8("ValidThresAR"));
        ValidThresAR->setEnabled(true);

        gridLayout_2->addWidget(ValidThresAR, 1, 1, 1, 4);

        Label12 = new QLabel(TabSheet2);
        Label12->setObjectName(QString::fromUtf8("Label12"));
        Label12->setEnabled(true);

        gridLayout_2->addWidget(Label12, 2, 0, 1, 1);

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
        SyncSol->setObjectName(QString::fromUtf8("SyncSol"));
        SyncSol->setEnabled(true);

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

        NumIter = new QLineEdit(TabSheet2);
        NumIter->setObjectName(QString::fromUtf8("NumIter"));
        NumIter->setEnabled(true);

        gridLayout_2->addWidget(NumIter, 8, 1, 1, 4);

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

        Options->addTab(TabSheet2, QString());
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
        SolFormat->setEnabled(false);

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
        OutputOpt->setEnabled(false);

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

        Label21 = new QLabel(TabSheet3);
        Label21->setObjectName(QString::fromUtf8("Label21"));
        Label21->setEnabled(false);

        gridLayout_3->addWidget(Label21, 7, 0, 1, 1);

        SolStatic = new QComboBox(TabSheet3);
        SolStatic->addItem(QString());
        SolStatic->addItem(QString());
        SolStatic->setObjectName(QString::fromUtf8("SolStatic"));
        SolStatic->setEnabled(false);

        gridLayout_3->addWidget(SolStatic, 7, 1, 1, 3);

        Label17 = new QLabel(TabSheet3);
        Label17->setObjectName(QString::fromUtf8("Label17"));
        Label17->setEnabled(true);

        gridLayout_3->addWidget(Label17, 8, 0, 1, 1);

        NmeaIntv1 = new QLineEdit(TabSheet3);
        NmeaIntv1->setObjectName(QString::fromUtf8("NmeaIntv1"));
        NmeaIntv1->setEnabled(true);

        gridLayout_3->addWidget(NmeaIntv1, 8, 1, 1, 1);

        NmeaIntv2 = new QLineEdit(TabSheet3);
        NmeaIntv2->setObjectName(QString::fromUtf8("NmeaIntv2"));
        NmeaIntv2->setEnabled(true);

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

        Options->addTab(TabSheet3, QString());
        TabSheet4 = new QWidget();
        TabSheet4->setObjectName(QString::fromUtf8("TabSheet4"));
        gridLayout_4 = new QGridLayout(TabSheet4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        GroupBox3 = new QGroupBox(TabSheet4);
        GroupBox3->setObjectName(QString::fromUtf8("GroupBox3"));
        gridLayout_8 = new QGridLayout(GroupBox3);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        Label6 = new QLabel(GroupBox3);
        Label6->setObjectName(QString::fromUtf8("Label6"));
        Label6->setEnabled(true);

        gridLayout_8->addWidget(Label6, 0, 0, 1, 1);

        MeasErrR1 = new QLineEdit(GroupBox3);
        MeasErrR1->setObjectName(QString::fromUtf8("MeasErrR1"));
        MeasErrR1->setEnabled(true);

        gridLayout_8->addWidget(MeasErrR1, 0, 1, 1, 1);

        MeasErrR2 = new QLineEdit(GroupBox3);
        MeasErrR2->setObjectName(QString::fromUtf8("MeasErrR2"));
        MeasErrR2->setEnabled(true);

        gridLayout_8->addWidget(MeasErrR2, 0, 2, 1, 1);

        Label7 = new QLabel(GroupBox3);
        Label7->setObjectName(QString::fromUtf8("Label7"));
        Label7->setEnabled(true);

        gridLayout_8->addWidget(Label7, 1, 0, 1, 1);

        MeasErr2 = new QLineEdit(GroupBox3);
        MeasErr2->setObjectName(QString::fromUtf8("MeasErr2"));
        MeasErr2->setEnabled(true);

        gridLayout_8->addWidget(MeasErr2, 1, 1, 1, 1);

        MeasErr3 = new QLineEdit(GroupBox3);
        MeasErr3->setObjectName(QString::fromUtf8("MeasErr3"));
        MeasErr3->setEnabled(true);

        gridLayout_8->addWidget(MeasErr3, 1, 2, 1, 1);

        Label16 = new QLabel(GroupBox3);
        Label16->setObjectName(QString::fromUtf8("Label16"));
        Label16->setEnabled(true);

        gridLayout_8->addWidget(Label16, 2, 0, 1, 1);

        MeasErr4 = new QLineEdit(GroupBox3);
        MeasErr4->setObjectName(QString::fromUtf8("MeasErr4"));
        MeasErr4->setEnabled(true);

        gridLayout_8->addWidget(MeasErr4, 2, 1, 1, 2);

        Label10 = new QLabel(GroupBox3);
        Label10->setObjectName(QString::fromUtf8("Label10"));
        Label10->setEnabled(true);

        gridLayout_8->addWidget(Label10, 3, 0, 1, 1);

        MeasErr5 = new QLineEdit(GroupBox3);
        MeasErr5->setObjectName(QString::fromUtf8("MeasErr5"));
        MeasErr5->setEnabled(true);

        gridLayout_8->addWidget(MeasErr5, 3, 1, 1, 2);


        gridLayout_4->addWidget(GroupBox3, 0, 0, 1, 2);

        GroupBox4 = new QGroupBox(TabSheet4);
        GroupBox4->setObjectName(QString::fromUtf8("GroupBox4"));
        gridLayout_9 = new QGridLayout(GroupBox4);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        Label33 = new QLabel(GroupBox4);
        Label33->setObjectName(QString::fromUtf8("Label33"));
        Label33->setEnabled(true);

        gridLayout_9->addWidget(Label33, 0, 0, 1, 1);

        PrNoise4 = new QLineEdit(GroupBox4);
        PrNoise4->setObjectName(QString::fromUtf8("PrNoise4"));
        PrNoise4->setEnabled(true);

        gridLayout_9->addWidget(PrNoise4, 0, 1, 1, 1);

        PrNoise5 = new QLineEdit(GroupBox4);
        PrNoise5->setObjectName(QString::fromUtf8("PrNoise5"));
        PrNoise5->setEnabled(true);

        gridLayout_9->addWidget(PrNoise5, 0, 2, 1, 1);

        Label26 = new QLabel(GroupBox4);
        Label26->setObjectName(QString::fromUtf8("Label26"));
        Label26->setEnabled(true);

        gridLayout_9->addWidget(Label26, 1, 0, 1, 1);

        PrNoise1 = new QLineEdit(GroupBox4);
        PrNoise1->setObjectName(QString::fromUtf8("PrNoise1"));
        PrNoise1->setEnabled(true);

        gridLayout_9->addWidget(PrNoise1, 1, 1, 1, 2);

        Label27 = new QLabel(GroupBox4);
        Label27->setObjectName(QString::fromUtf8("Label27"));
        Label27->setEnabled(true);

        gridLayout_9->addWidget(Label27, 2, 0, 1, 1);

        PrNoise2 = new QLineEdit(GroupBox4);
        PrNoise2->setObjectName(QString::fromUtf8("PrNoise2"));
        PrNoise2->setEnabled(true);

        gridLayout_9->addWidget(PrNoise2, 2, 1, 1, 2);

        Label28 = new QLabel(GroupBox4);
        Label28->setObjectName(QString::fromUtf8("Label28"));
        Label28->setEnabled(true);

        gridLayout_9->addWidget(Label28, 3, 0, 1, 1);

        PrNoise3 = new QLineEdit(GroupBox4);
        PrNoise3->setObjectName(QString::fromUtf8("PrNoise3"));
        PrNoise3->setEnabled(true);

        gridLayout_9->addWidget(PrNoise3, 3, 1, 1, 2);


        gridLayout_4->addWidget(GroupBox4, 1, 0, 1, 2);

        Label29 = new QLabel(TabSheet4);
        Label29->setObjectName(QString::fromUtf8("Label29"));
        Label29->setEnabled(true);

        gridLayout_4->addWidget(Label29, 2, 0, 1, 1);

        SatClkStab = new QLineEdit(TabSheet4);
        SatClkStab->setObjectName(QString::fromUtf8("SatClkStab"));
        SatClkStab->setEnabled(true);

        gridLayout_4->addWidget(SatClkStab, 2, 1, 1, 1);

        Options->addTab(TabSheet4, QString());
        TabSheet5 = new QWidget();
        TabSheet5->setObjectName(QString::fromUtf8("TabSheet5"));
        gridLayout_5 = new QGridLayout(TabSheet5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        GroupRovAnt = new QGroupBox(TabSheet5);
        GroupRovAnt->setObjectName(QString::fromUtf8("GroupRovAnt"));
        gridLayout_11 = new QGridLayout(GroupRovAnt);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        RovPosTypeP = new QComboBox(GroupRovAnt);
        RovPosTypeP->addItem(QString());
        RovPosTypeP->addItem(QString());
        RovPosTypeP->addItem(QString());
        RovPosTypeP->setObjectName(QString::fromUtf8("RovPosTypeP"));
        RovPosTypeP->setEnabled(false);

        gridLayout_11->addWidget(RovPosTypeP, 0, 0, 1, 2);

        BtnRovPos = new QPushButton(GroupRovAnt);
        BtnRovPos->setObjectName(QString::fromUtf8("BtnRovPos"));
        BtnRovPos->setEnabled(true);

        gridLayout_11->addWidget(BtnRovPos, 0, 5, 1, 1);

        RovPos1 = new QLineEdit(GroupRovAnt);
        RovPos1->setObjectName(QString::fromUtf8("RovPos1"));
        RovPos1->setEnabled(true);

        gridLayout_11->addWidget(RovPos1, 1, 0, 1, 1);

        RovPos2 = new QLineEdit(GroupRovAnt);
        RovPos2->setObjectName(QString::fromUtf8("RovPos2"));
        RovPos2->setEnabled(true);

        gridLayout_11->addWidget(RovPos2, 1, 1, 1, 2);

        RovPos3 = new QLineEdit(GroupRovAnt);
        RovPos3->setObjectName(QString::fromUtf8("RovPos3"));
        RovPos3->setEnabled(true);

        gridLayout_11->addWidget(RovPos3, 1, 3, 1, 3);

        RovAntPcv = new QCheckBox(GroupRovAnt);
        RovAntPcv->setObjectName(QString::fromUtf8("RovAntPcv"));
        RovAntPcv->setChecked(false);

        gridLayout_11->addWidget(RovAntPcv, 2, 0, 1, 2);

        LabelRovAntD = new QLabel(GroupRovAnt);
        LabelRovAntD->setObjectName(QString::fromUtf8("LabelRovAntD"));
        LabelRovAntD->setEnabled(true);

        gridLayout_11->addWidget(LabelRovAntD, 2, 2, 1, 3);

        RovAnt = new QComboBox(GroupRovAnt);
        RovAnt->setObjectName(QString::fromUtf8("RovAnt"));
        RovAnt->setEnabled(true);

        gridLayout_11->addWidget(RovAnt, 3, 0, 1, 2);

        RovAntE = new QLineEdit(GroupRovAnt);
        RovAntE->setObjectName(QString::fromUtf8("RovAntE"));
        RovAntE->setEnabled(true);

        gridLayout_11->addWidget(RovAntE, 3, 2, 1, 2);

        RovAntN = new QLineEdit(GroupRovAnt);
        RovAntN->setObjectName(QString::fromUtf8("RovAntN"));
        RovAntN->setEnabled(true);

        gridLayout_11->addWidget(RovAntN, 3, 4, 1, 1);

        RovAntU = new QLineEdit(GroupRovAnt);
        RovAntU->setObjectName(QString::fromUtf8("RovAntU"));
        RovAntU->setEnabled(true);

        gridLayout_11->addWidget(RovAntU, 3, 5, 1, 1);


        gridLayout_5->addWidget(GroupRovAnt, 0, 0, 2, 4);

        Label4 = new QLabel(TabSheet5);
        Label4->setObjectName(QString::fromUtf8("Label4"));
        Label4->setEnabled(true);

        gridLayout_5->addWidget(Label4, 1, 1, 1, 1);

        GroupRefAnt = new QGroupBox(TabSheet5);
        GroupRefAnt->setObjectName(QString::fromUtf8("GroupRefAnt"));
        gridLayout_10 = new QGridLayout(GroupRefAnt);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        RefAnt = new QComboBox(GroupRefAnt);
        RefAnt->setObjectName(QString::fromUtf8("RefAnt"));
        RefAnt->setEnabled(true);

        gridLayout_10->addWidget(RefAnt, 3, 0, 1, 2);

        RefAntPcv = new QCheckBox(GroupRefAnt);
        RefAntPcv->setObjectName(QString::fromUtf8("RefAntPcv"));
        RefAntPcv->setChecked(false);

        gridLayout_10->addWidget(RefAntPcv, 2, 0, 1, 2);

        LabelRefAntD = new QLabel(GroupRefAnt);
        LabelRefAntD->setObjectName(QString::fromUtf8("LabelRefAntD"));
        LabelRefAntD->setEnabled(true);

        gridLayout_10->addWidget(LabelRefAntD, 2, 2, 1, 4);

        ChkInitRestart = new QCheckBox(GroupRefAnt);
        ChkInitRestart->setObjectName(QString::fromUtf8("ChkInitRestart"));

        gridLayout_10->addWidget(ChkInitRestart, 0, 5, 1, 1);

        BtnRefPos = new QPushButton(GroupRefAnt);
        BtnRefPos->setObjectName(QString::fromUtf8("BtnRefPos"));
        BtnRefPos->setEnabled(true);

        gridLayout_10->addWidget(BtnRefPos, 0, 6, 1, 1);

        RefPos1 = new QLineEdit(GroupRefAnt);
        RefPos1->setObjectName(QString::fromUtf8("RefPos1"));
        RefPos1->setEnabled(true);

        gridLayout_10->addWidget(RefPos1, 1, 0, 1, 1);

        RefPos2 = new QLineEdit(GroupRefAnt);
        RefPos2->setObjectName(QString::fromUtf8("RefPos2"));
        RefPos2->setEnabled(true);

        gridLayout_10->addWidget(RefPos2, 1, 1, 1, 2);

        RefPos3 = new QLineEdit(GroupRefAnt);
        RefPos3->setObjectName(QString::fromUtf8("RefPos3"));
        RefPos3->setEnabled(true);

        gridLayout_10->addWidget(RefPos3, 1, 3, 1, 4);

        RefAntU = new QLineEdit(GroupRefAnt);
        RefAntU->setObjectName(QString::fromUtf8("RefAntU"));
        RefAntU->setEnabled(true);

        gridLayout_10->addWidget(RefAntU, 3, 6, 1, 1);

        RefAntE = new QLineEdit(GroupRefAnt);
        RefAntE->setObjectName(QString::fromUtf8("RefAntE"));
        RefAntE->setEnabled(true);

        gridLayout_10->addWidget(RefAntE, 3, 2, 1, 2);

        RefAntN = new QLineEdit(GroupRefAnt);
        RefAntN->setObjectName(QString::fromUtf8("RefAntN"));
        RefAntN->setEnabled(true);

        gridLayout_10->addWidget(RefAntN, 3, 5, 1, 1);

        MaxAveEp = new QSpinBox(GroupRefAnt);
        MaxAveEp->setObjectName(QString::fromUtf8("MaxAveEp"));
        MaxAveEp->setMaximum(10000);
        MaxAveEp->setValue(3600);

        gridLayout_10->addWidget(MaxAveEp, 0, 4, 1, 1);

        RefPosTypeP = new QComboBox(GroupRefAnt);
        RefPosTypeP->addItem(QString());
        RefPosTypeP->addItem(QString());
        RefPosTypeP->addItem(QString());
        RefPosTypeP->addItem(QString());
        RefPosTypeP->addItem(QString());
        RefPosTypeP->addItem(QString());
        RefPosTypeP->setObjectName(QString::fromUtf8("RefPosTypeP"));
        RefPosTypeP->setEnabled(true);

        gridLayout_10->addWidget(RefPosTypeP, 0, 0, 1, 1);

        LabelMaxAveEp = new QLabel(GroupRefAnt);
        LabelMaxAveEp->setObjectName(QString::fromUtf8("LabelMaxAveEp"));

        gridLayout_10->addWidget(LabelMaxAveEp, 0, 1, 1, 3);


        gridLayout_5->addWidget(GroupRefAnt, 2, 0, 1, 4);

        Label30 = new QLabel(TabSheet5);
        Label30->setObjectName(QString::fromUtf8("Label30"));
        Label30->setEnabled(true);

        gridLayout_5->addWidget(Label30, 3, 0, 1, 2);

        BtnStaPosView = new QPushButton(TabSheet5);
        BtnStaPosView->setObjectName(QString::fromUtf8("BtnStaPosView"));
        BtnStaPosView->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/doc.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnStaPosView->setIcon(icon);
        BtnStaPosView->setFlat(true);

        gridLayout_5->addWidget(BtnStaPosView, 4, 2, 1, 1);

        StaPosFile = new QLineEdit(TabSheet5);
        StaPosFile->setObjectName(QString::fromUtf8("StaPosFile"));
        StaPosFile->setEnabled(true);

        gridLayout_5->addWidget(StaPosFile, 4, 0, 1, 1);

        BtnStaPosFile = new QPushButton(TabSheet5);
        BtnStaPosFile->setObjectName(QString::fromUtf8("BtnStaPosFile"));
        BtnStaPosFile->setEnabled(true);

        gridLayout_5->addWidget(BtnStaPosFile, 4, 3, 1, 1);

        Options->addTab(TabSheet5, QString());
        TabSheet7 = new QWidget();
        TabSheet7->setObjectName(QString::fromUtf8("TabSheet7"));
        gridLayout_6 = new QGridLayout(TabSheet7);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        BtnSatPcvView = new QPushButton(TabSheet7);
        BtnSatPcvView->setObjectName(QString::fromUtf8("BtnSatPcvView"));
        BtnSatPcvView->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BtnSatPcvView->sizePolicy().hasHeightForWidth());
        BtnSatPcvView->setSizePolicy(sizePolicy1);
        BtnSatPcvView->setIcon(icon);
        BtnSatPcvView->setFlat(true);

        gridLayout_6->addWidget(BtnSatPcvView, 0, 1, 1, 1);

        SatPcvFile = new QLineEdit(TabSheet7);
        SatPcvFile->setObjectName(QString::fromUtf8("SatPcvFile"));
        SatPcvFile->setEnabled(true);

        gridLayout_6->addWidget(SatPcvFile, 1, 0, 1, 2);

        BtnSatPcvFile = new QPushButton(TabSheet7);
        BtnSatPcvFile->setObjectName(QString::fromUtf8("BtnSatPcvFile"));
        BtnSatPcvFile->setEnabled(true);

        gridLayout_6->addWidget(BtnSatPcvFile, 1, 3, 1, 1);

        BtnAntPcvFile = new QPushButton(TabSheet7);
        BtnAntPcvFile->setObjectName(QString::fromUtf8("BtnAntPcvFile"));
        BtnAntPcvFile->setEnabled(true);

        gridLayout_6->addWidget(BtnAntPcvFile, 2, 3, 1, 1);

        AntPcvFile = new QLineEdit(TabSheet7);
        AntPcvFile->setObjectName(QString::fromUtf8("AntPcvFile"));
        AntPcvFile->setEnabled(true);

        gridLayout_6->addWidget(AntPcvFile, 2, 0, 1, 2);

        GeoidDataFile = new QLineEdit(TabSheet7);
        GeoidDataFile->setObjectName(QString::fromUtf8("GeoidDataFile"));
        GeoidDataFile->setEnabled(true);

        gridLayout_6->addWidget(GeoidDataFile, 4, 0, 1, 2);

        BtnGeoidDataFile = new QPushButton(TabSheet7);
        BtnGeoidDataFile->setObjectName(QString::fromUtf8("BtnGeoidDataFile"));
        BtnGeoidDataFile->setEnabled(true);

        gridLayout_6->addWidget(BtnGeoidDataFile, 4, 3, 1, 1);

        Label48 = new QLabel(TabSheet7);
        Label48->setObjectName(QString::fromUtf8("Label48"));
        Label48->setEnabled(true);

        gridLayout_6->addWidget(Label48, 3, 0, 1, 1);

        Label1 = new QLabel(TabSheet7);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);

        gridLayout_6->addWidget(Label1, 5, 0, 1, 1);

        LocalDir = new QLineEdit(TabSheet7);
        LocalDir->setObjectName(QString::fromUtf8("LocalDir"));
        LocalDir->setEnabled(true);

        gridLayout_6->addWidget(LocalDir, 15, 0, 1, 2);

        Label31 = new QLabel(TabSheet7);
        Label31->setObjectName(QString::fromUtf8("Label31"));
        Label31->setEnabled(true);

        gridLayout_6->addWidget(Label31, 14, 0, 1, 1);

        BtnLocalDir = new QPushButton(TabSheet7);
        BtnLocalDir->setObjectName(QString::fromUtf8("BtnLocalDir"));
        BtnLocalDir->setEnabled(true);

        gridLayout_6->addWidget(BtnLocalDir, 15, 3, 1, 1);

        BtnDCBFile = new QPushButton(TabSheet7);
        BtnDCBFile->setObjectName(QString::fromUtf8("BtnDCBFile"));
        BtnDCBFile->setEnabled(true);

        gridLayout_6->addWidget(BtnDCBFile, 7, 3, 1, 1);

        BtnDCBView = new QPushButton(TabSheet7);
        BtnDCBView->setObjectName(QString::fromUtf8("BtnDCBView"));
        BtnDCBView->setEnabled(true);
        BtnDCBView->setFlat(true);

        gridLayout_6->addWidget(BtnDCBView, 5, 3, 2, 1);

        DCBFile = new QLineEdit(TabSheet7);
        DCBFile->setObjectName(QString::fromUtf8("DCBFile"));
        DCBFile->setEnabled(true);

        gridLayout_6->addWidget(DCBFile, 6, 0, 2, 2);

        BtnEOPView = new QPushButton(TabSheet7);
        BtnEOPView->setObjectName(QString::fromUtf8("BtnEOPView"));
        BtnEOPView->setEnabled(true);
        BtnEOPView->setFlat(true);

        gridLayout_6->addWidget(BtnEOPView, 8, 3, 2, 1);

        Label23 = new QLabel(TabSheet7);
        Label23->setObjectName(QString::fromUtf8("Label23"));
        Label23->setEnabled(true);

        gridLayout_6->addWidget(Label23, 8, 0, 1, 1);

        EOPFile = new QLineEdit(TabSheet7);
        EOPFile->setObjectName(QString::fromUtf8("EOPFile"));
        EOPFile->setEnabled(true);

        gridLayout_6->addWidget(EOPFile, 9, 0, 2, 2);

        BtnEOPFile = new QPushButton(TabSheet7);
        BtnEOPFile->setObjectName(QString::fromUtf8("BtnEOPFile"));
        BtnEOPFile->setEnabled(true);

        gridLayout_6->addWidget(BtnEOPFile, 10, 3, 1, 1);

        BtnOLFileView = new QPushButton(TabSheet7);
        BtnOLFileView->setObjectName(QString::fromUtf8("BtnOLFileView"));
        BtnOLFileView->setEnabled(true);
        BtnOLFileView->setFlat(true);

        gridLayout_6->addWidget(BtnOLFileView, 11, 3, 2, 1);

        OLFile = new QLineEdit(TabSheet7);
        OLFile->setObjectName(QString::fromUtf8("OLFile"));
        OLFile->setEnabled(true);

        gridLayout_6->addWidget(OLFile, 12, 0, 2, 2);

        Label34 = new QLabel(TabSheet7);
        Label34->setObjectName(QString::fromUtf8("Label34"));
        Label34->setEnabled(true);

        gridLayout_6->addWidget(Label34, 11, 0, 1, 1);

        BtnOLFile = new QPushButton(TabSheet7);
        BtnOLFile->setObjectName(QString::fromUtf8("BtnOLFile"));
        BtnOLFile->setEnabled(true);

        gridLayout_6->addWidget(BtnOLFile, 13, 3, 1, 1);

        Label38 = new QLabel(TabSheet7);
        Label38->setObjectName(QString::fromUtf8("Label38"));
        Label38->setEnabled(true);

        gridLayout_6->addWidget(Label38, 0, 0, 1, 1);

        BtnAntPcvView = new QPushButton(TabSheet7);
        BtnAntPcvView->setObjectName(QString::fromUtf8("BtnAntPcvView"));
        BtnAntPcvView->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnAntPcvView->sizePolicy().hasHeightForWidth());
        BtnAntPcvView->setSizePolicy(sizePolicy1);
        BtnAntPcvView->setIcon(icon);
        BtnAntPcvView->setFlat(true);

        gridLayout_6->addWidget(BtnAntPcvView, 0, 3, 1, 1);

        Options->addTab(TabSheet7, QString());
        TabSheet8 = new QWidget();
        TabSheet8->setObjectName(QString::fromUtf8("TabSheet8"));
        gridLayout_7 = new QGridLayout(TabSheet8);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        Label19 = new QLabel(TabSheet8);
        Label19->setObjectName(QString::fromUtf8("Label19"));
        Label19->setEnabled(true);

        gridLayout_7->addWidget(Label19, 0, 0, 1, 4);

        SvrCycleE = new QLineEdit(TabSheet8);
        SvrCycleE->setObjectName(QString::fromUtf8("SvrCycleE"));
        SvrCycleE->setEnabled(true);

        gridLayout_7->addWidget(SvrCycleE, 0, 4, 1, 1);

        SvrBuffSizeE = new QLineEdit(TabSheet8);
        SvrBuffSizeE->setObjectName(QString::fromUtf8("SvrBuffSizeE"));
        SvrBuffSizeE->setEnabled(true);

        gridLayout_7->addWidget(SvrBuffSizeE, 0, 5, 1, 1);

        Label44 = new QLabel(TabSheet8);
        Label44->setObjectName(QString::fromUtf8("Label44"));
        Label44->setEnabled(true);

        gridLayout_7->addWidget(Label44, 1, 0, 1, 4);

        TimeoutTimeE = new QLineEdit(TabSheet8);
        TimeoutTimeE->setObjectName(QString::fromUtf8("TimeoutTimeE"));
        TimeoutTimeE->setEnabled(true);

        gridLayout_7->addWidget(TimeoutTimeE, 1, 4, 1, 1);

        ReconTimeE = new QLineEdit(TabSheet8);
        ReconTimeE->setObjectName(QString::fromUtf8("ReconTimeE"));
        ReconTimeE->setEnabled(true);

        gridLayout_7->addWidget(ReconTimeE, 1, 5, 1, 1);

        Label46 = new QLabel(TabSheet8);
        Label46->setObjectName(QString::fromUtf8("Label46"));
        Label46->setEnabled(true);

        gridLayout_7->addWidget(Label46, 2, 0, 1, 4);

        NmeaCycleE = new QLineEdit(TabSheet8);
        NmeaCycleE->setObjectName(QString::fromUtf8("NmeaCycleE"));
        NmeaCycleE->setEnabled(true);

        gridLayout_7->addWidget(NmeaCycleE, 2, 4, 1, 1);

        FileSwapMarginE = new QLineEdit(TabSheet8);
        FileSwapMarginE->setObjectName(QString::fromUtf8("FileSwapMarginE"));
        FileSwapMarginE->setEnabled(true);

        gridLayout_7->addWidget(FileSwapMarginE, 2, 5, 1, 1);

        Label41 = new QLabel(TabSheet8);
        Label41->setObjectName(QString::fromUtf8("Label41"));
        Label41->setEnabled(true);

        gridLayout_7->addWidget(Label41, 3, 0, 1, 4);

        SolBuffSizeE = new QLineEdit(TabSheet8);
        SolBuffSizeE->setObjectName(QString::fromUtf8("SolBuffSizeE"));
        SolBuffSizeE->setEnabled(true);

        gridLayout_7->addWidget(SolBuffSizeE, 3, 4, 1, 1);

        SavedSolE = new QLineEdit(TabSheet8);
        SavedSolE->setObjectName(QString::fromUtf8("SavedSolE"));
        SavedSolE->setEnabled(true);

        gridLayout_7->addWidget(SavedSolE, 3, 5, 1, 1);

        Label42 = new QLabel(TabSheet8);
        Label42->setObjectName(QString::fromUtf8("Label42"));
        Label42->setEnabled(true);

        gridLayout_7->addWidget(Label42, 4, 0, 1, 4);

        NavSelectS = new QComboBox(TabSheet8);
        NavSelectS->addItem(QString());
        NavSelectS->addItem(QString());
        NavSelectS->addItem(QString());
        NavSelectS->addItem(QString());
        NavSelectS->setObjectName(QString::fromUtf8("NavSelectS"));
        NavSelectS->setEnabled(true);

        gridLayout_7->addWidget(NavSelectS, 4, 4, 1, 2);

        Label5 = new QLabel(TabSheet8);
        Label5->setObjectName(QString::fromUtf8("Label5"));
        Label5->setEnabled(true);

        gridLayout_7->addWidget(Label5, 5, 0, 1, 4);

        SbasSatE = new QLineEdit(TabSheet8);
        SbasSatE->setObjectName(QString::fromUtf8("SbasSatE"));
        SbasSatE->setEnabled(true);

        gridLayout_7->addWidget(SbasSatE, 5, 4, 1, 1);

        MoniPortE = new QLineEdit(TabSheet8);
        MoniPortE->setObjectName(QString::fromUtf8("MoniPortE"));
        MoniPortE->setEnabled(true);

        gridLayout_7->addWidget(MoniPortE, 5, 5, 1, 1);

        Label45 = new QLabel(TabSheet8);
        Label45->setObjectName(QString::fromUtf8("Label45"));
        Label45->setEnabled(true);

        gridLayout_7->addWidget(Label45, 6, 0, 1, 3);

        ProxyAddrE = new QLineEdit(TabSheet8);
        ProxyAddrE->setObjectName(QString::fromUtf8("ProxyAddrE"));
        ProxyAddrE->setEnabled(true);

        gridLayout_7->addWidget(ProxyAddrE, 6, 3, 1, 3);

        Label43 = new QLabel(TabSheet8);
        Label43->setObjectName(QString::fromUtf8("Label43"));
        Label43->setEnabled(true);

        gridLayout_7->addWidget(Label43, 7, 0, 1, 2);

        PanelStackE = new QComboBox(TabSheet8);
        PanelStackE->addItem(QString());
        PanelStackE->addItem(QString());
        PanelStackE->setObjectName(QString::fromUtf8("PanelStackE"));
        PanelStackE->setEnabled(true);

        gridLayout_7->addWidget(PanelStackE, 7, 2, 1, 1);

        Label40 = new QLabel(TabSheet8);
        Label40->setObjectName(QString::fromUtf8("Label40"));
        Label40->setEnabled(true);

        gridLayout_7->addWidget(Label40, 7, 3, 1, 1);

        FontLabel = new QLabel(TabSheet8);
        FontLabel->setObjectName(QString::fromUtf8("FontLabel"));
        FontLabel->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        FontLabel->setPalette(palette);
        FontLabel->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(FontLabel, 7, 4, 1, 2);

        BtnFont = new QPushButton(TabSheet8);
        BtnFont->setObjectName(QString::fromUtf8("BtnFont"));
        BtnFont->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnFont->sizePolicy().hasHeightForWidth());
        BtnFont->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(BtnFont, 7, 6, 1, 1);

        Label15 = new QLabel(TabSheet8);
        Label15->setObjectName(QString::fromUtf8("Label15"));
        Label15->setEnabled(true);

        gridLayout_7->addWidget(Label15, 8, 0, 1, 1);

        TLEFile = new QLineEdit(TabSheet8);
        TLEFile->setObjectName(QString::fromUtf8("TLEFile"));
        TLEFile->setEnabled(true);

        gridLayout_7->addWidget(TLEFile, 8, 1, 1, 5);

        BtnTLEFile = new QPushButton(TabSheet8);
        BtnTLEFile->setObjectName(QString::fromUtf8("BtnTLEFile"));
        BtnTLEFile->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnTLEFile->sizePolicy().hasHeightForWidth());
        BtnTLEFile->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(BtnTLEFile, 8, 6, 1, 1);

        Label39 = new QLabel(TabSheet8);
        Label39->setObjectName(QString::fromUtf8("Label39"));
        Label39->setEnabled(true);

        gridLayout_7->addWidget(Label39, 9, 0, 1, 1);

        TLESatFile = new QLineEdit(TabSheet8);
        TLESatFile->setObjectName(QString::fromUtf8("TLESatFile"));
        TLESatFile->setEnabled(true);

        gridLayout_7->addWidget(TLESatFile, 9, 1, 1, 5);

        BtnTLESatFile = new QPushButton(TabSheet8);
        BtnTLESatFile->setObjectName(QString::fromUtf8("BtnTLESatFile"));
        BtnTLESatFile->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnTLESatFile->sizePolicy().hasHeightForWidth());
        BtnTLESatFile->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(BtnTLESatFile, 9, 6, 1, 1);

        Options->addTab(TabSheet8, QString());

        verticalLayout->addWidget(Options);

        widget = new QWidget(OptDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Label47 = new QLabel(widget);
        Label47->setObjectName(QString::fromUtf8("Label47"));
        Label47->setEnabled(true);

        horizontalLayout->addWidget(Label47);

        BtnLoad = new QPushButton(widget);
        BtnLoad->setObjectName(QString::fromUtf8("BtnLoad"));
        BtnLoad->setEnabled(true);

        horizontalLayout->addWidget(BtnLoad);

        BtnSave = new QPushButton(widget);
        BtnSave->setObjectName(QString::fromUtf8("BtnSave"));
        BtnSave->setEnabled(true);

        horizontalLayout->addWidget(BtnSave);

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


        retranslateUi(OptDialog);

        Options->setCurrentIndex(0);
        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(OptDialog);
    } // setupUi

    void retranslateUi(QWidget *OptDialog)
    {
        OptDialog->setWindowTitle(QCoreApplication::translate("OptDialog", "Options", nullptr));
#if QT_CONFIG(tooltip)
        OptDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Options->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TabSheet1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label3->setText(QCoreApplication::translate("OptDialog", "Rec Dynamics / Earth Tides Correction", nullptr));
        DynamicModel->setItemText(0, QCoreApplication::translate("OptDialog", "OFF", nullptr));
        DynamicModel->setItemText(1, QCoreApplication::translate("OptDialog", "ON", nullptr));

#if QT_CONFIG(tooltip)
        DynamicModel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TideCorr->setItemText(0, QCoreApplication::translate("OptDialog", "OFF", nullptr));
        TideCorr->setItemText(1, QCoreApplication::translate("OptDialog", "Solid", nullptr));

#if QT_CONFIG(tooltip)
        TideCorr->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label8->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label8->setText(QCoreApplication::translate("OptDialog", "Ionosphere Correction", nullptr));
#if QT_CONFIG(tooltip)
        Label9->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label9->setText(QCoreApplication::translate("OptDialog", "Troposphere Correction", nullptr));
        TropOpt->setItemText(0, QCoreApplication::translate("OptDialog", "OFF", nullptr));
        TropOpt->setItemText(1, QCoreApplication::translate("OptDialog", "Saastamoinen", nullptr));
        TropOpt->setItemText(2, QCoreApplication::translate("OptDialog", "SBAS", nullptr));
        TropOpt->setItemText(3, QCoreApplication::translate("OptDialog", "Estimate ZTD", nullptr));
        TropOpt->setItemText(4, QCoreApplication::translate("OptDialog", "Estimate ZTD+Grad", nullptr));

#if QT_CONFIG(tooltip)
        TropOpt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Freq->setItemText(0, QCoreApplication::translate("OptDialog", "L1", nullptr));
        Freq->setItemText(1, QCoreApplication::translate("OptDialog", "L1+L2", nullptr));

#if QT_CONFIG(tooltip)
        Freq->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Solution->setItemText(0, QCoreApplication::translate("OptDialog", "Forward", nullptr));
        Solution->setItemText(1, QCoreApplication::translate("OptDialog", "Backward", nullptr));
        Solution->setItemText(2, QCoreApplication::translate("OptDialog", "Combined", nullptr));

#if QT_CONFIG(tooltip)
        Solution->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        LabelElMask->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelElMask->setText(QCoreApplication::translate("OptDialog", "Elevation Mask (\302\260) / SNR Mask (dbHz)", nullptr));
        IonoOpt->setItemText(0, QCoreApplication::translate("OptDialog", "OFF", nullptr));
        IonoOpt->setItemText(1, QCoreApplication::translate("OptDialog", "Broadcast", nullptr));
        IonoOpt->setItemText(2, QCoreApplication::translate("OptDialog", "SBAS", nullptr));
        IonoOpt->setItemText(3, QCoreApplication::translate("OptDialog", "Iono-Free LC", nullptr));
        IonoOpt->setItemText(4, QCoreApplication::translate("OptDialog", "Estimate STEC", nullptr));
        IonoOpt->setItemText(5, QCoreApplication::translate("OptDialog", "IONEX TEC", nullptr));
        IonoOpt->setItemText(6, QCoreApplication::translate("OptDialog", "QZSS Broadcast", nullptr));
        IonoOpt->setItemText(7, QCoreApplication::translate("OptDialog", "QZSS LEX", nullptr));

#if QT_CONFIG(tooltip)
        IonoOpt->setToolTip(QString());
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
        Label32->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label32->setText(QCoreApplication::translate("OptDialog", "Satellite Ephemeris/Clock", nullptr));
#if QT_CONFIG(tooltip)
        BtnSnrMask->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnSnrMask->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
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
        LabelFreq->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelFreq->setText(QCoreApplication::translate("OptDialog", "Frequencies / Filter Type", nullptr));
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
        PosOpt3->setText(QCoreApplication::translate("OptDialog", "Ph-Windup", nullptr));
#if QT_CONFIG(tooltip)
        PosOpt4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PosOpt4->setText(QCoreApplication::translate("OptDialog", "Reject Ecl", nullptr));
#if QT_CONFIG(tooltip)
        PosOpt5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PosOpt5->setText(QCoreApplication::translate("OptDialog", "RAIM FDE", nullptr));
#if QT_CONFIG(tooltip)
        Label35->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label35->setText(QCoreApplication::translate("OptDialog", "Excluded Satellites (+PRN: Included)", nullptr));
#if QT_CONFIG(tooltip)
        LabelPosMode->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelPosMode->setText(QCoreApplication::translate("OptDialog", "Positioning Mode", nullptr));
#if QT_CONFIG(tooltip)
        ExSatsE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ExSatsE->setText(QString());
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
        Options->setTabText(Options->indexOf(TabSheet1), QCoreApplication::translate("OptDialog", "Setting&1", nullptr));
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
        Label24->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label24->setText(QCoreApplication::translate("OptDialog", "Min Ratio to Fix Ambiguity", nullptr));
#if QT_CONFIG(tooltip)
        ValidThresAR->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ValidThresAR->setText(QCoreApplication::translate("OptDialog", "3.0", nullptr));
#if QT_CONFIG(tooltip)
        Label12->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label12->setText(QCoreApplication::translate("OptDialog", "Min Confidence / Max FCB to Fix Amb", nullptr));
#if QT_CONFIG(tooltip)
        ThresAR2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ThresAR2->setText(QCoreApplication::translate("OptDialog", "0.9999", nullptr));
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
        LockCntFixAmb->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
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
        ElMaskHold->setText(QCoreApplication::translate("OptDialog", "10", nullptr));
#if QT_CONFIG(tooltip)
        Label22->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label22->setText(QCoreApplication::translate("OptDialog", "Outage to Reset Amb / Slip Thres (m)", nullptr));
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
        Label37->setText(QCoreApplication::translate("OptDialog", "Number of Filter Iteration", nullptr));
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
        BaselineLen->setText(QCoreApplication::translate("OptDialog", "0.000", nullptr));
#if QT_CONFIG(tooltip)
        BaselineSig->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BaselineSig->setText(QCoreApplication::translate("OptDialog", "0.000", nullptr));
        Options->setTabText(Options->indexOf(TabSheet2), QCoreApplication::translate("OptDialog", "Setting&2", nullptr));
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
        OutputGeoid->setItemText(3, QCoreApplication::translate("OptDialog", "EGM2008-SE 1\"", nullptr));
        OutputGeoid->setItemText(4, QCoreApplication::translate("OptDialog", "GSI2000 1x1.5\"", nullptr));

#if QT_CONFIG(tooltip)
        OutputGeoid->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label21->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label21->setText(QCoreApplication::translate("OptDialog", "Solution for Static Mode", nullptr));
        SolStatic->setItemText(0, QCoreApplication::translate("OptDialog", "All", nullptr));
        SolStatic->setItemText(1, QCoreApplication::translate("OptDialog", "Single", nullptr));

#if QT_CONFIG(tooltip)
        SolStatic->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label17->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label17->setText(QCoreApplication::translate("OptDialog", "NMEA Interval (s) RMC/GGA, GSA/GSV", nullptr));
#if QT_CONFIG(tooltip)
        NmeaIntv1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NmeaIntv1->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        NmeaIntv2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NmeaIntv2->setText(QCoreApplication::translate("OptDialog", "1", nullptr));
#if QT_CONFIG(tooltip)
        Label36->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label36->setText(QCoreApplication::translate("OptDialog", "Output Solution Status / Debug Trace", nullptr));
        DebugStatus->setItemText(0, QCoreApplication::translate("OptDialog", "OFF", nullptr));
        DebugStatus->setItemText(1, QCoreApplication::translate("OptDialog", "States", nullptr));
        DebugStatus->setItemText(2, QCoreApplication::translate("OptDialog", "Residuals", nullptr));

#if QT_CONFIG(tooltip)
        DebugStatus->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        DebugTrace->setItemText(0, QCoreApplication::translate("OptDialog", "OFF", nullptr));
        DebugTrace->setItemText(1, QCoreApplication::translate("OptDialog", "Level 1", nullptr));
        DebugTrace->setItemText(2, QCoreApplication::translate("OptDialog", "Level 2", nullptr));
        DebugTrace->setItemText(3, QCoreApplication::translate("OptDialog", "Level 3", nullptr));
        DebugTrace->setItemText(4, QCoreApplication::translate("OptDialog", "Level 4", nullptr));
        DebugTrace->setItemText(5, QCoreApplication::translate("OptDialog", "Level 5", nullptr));

#if QT_CONFIG(tooltip)
        DebugTrace->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Options->setTabText(Options->indexOf(TabSheet3), QCoreApplication::translate("OptDialog", "O&utput", nullptr));
#if QT_CONFIG(tooltip)
        TabSheet4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        GroupBox3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        GroupBox3->setTitle(QCoreApplication::translate("OptDialog", "Measurement Errors (1-sigma)", nullptr));
#if QT_CONFIG(tooltip)
        Label6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label6->setText(QCoreApplication::translate("OptDialog", "Code/Carrier-Phase Error Ratio L1/L2", nullptr));
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
        Label10->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label10->setText(QCoreApplication::translate("OptDialog", "Doppler Frequency (Hz)", nullptr));
#if QT_CONFIG(tooltip)
        MeasErr5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MeasErr5->setText(QCoreApplication::translate("OptDialog", "1.000", nullptr));
#if QT_CONFIG(tooltip)
        GroupBox4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        GroupBox4->setTitle(QCoreApplication::translate("OptDialog", "Process Noises (1-sigma/sqrt(s))", nullptr));
#if QT_CONFIG(tooltip)
        Label33->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label33->setText(QCoreApplication::translate("OptDialog", "Receiver Accel Horiz/Vertical (m/s2)", nullptr));
#if QT_CONFIG(tooltip)
        PrNoise4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PrNoise4->setText(QCoreApplication::translate("OptDialog", "1.0E-04", nullptr));
#if QT_CONFIG(tooltip)
        PrNoise5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PrNoise5->setText(QCoreApplication::translate("OptDialog", "1.0E-04", nullptr));
#if QT_CONFIG(tooltip)
        Label26->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label26->setText(QCoreApplication::translate("OptDialog", "Carrier-Phase Bias (cycle)", nullptr));
#if QT_CONFIG(tooltip)
        PrNoise1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PrNoise1->setText(QCoreApplication::translate("OptDialog", "1.0E-04", nullptr));
#if QT_CONFIG(tooltip)
        Label27->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label27->setText(QCoreApplication::translate("OptDialog", "Vertical Ionospheric Delay (m/10km)", nullptr));
#if QT_CONFIG(tooltip)
        PrNoise2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PrNoise2->setText(QCoreApplication::translate("OptDialog", "1.0E-03", nullptr));
#if QT_CONFIG(tooltip)
        Label28->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label28->setText(QCoreApplication::translate("OptDialog", "Zenith Tropospheric Delay (m)", nullptr));
#if QT_CONFIG(tooltip)
        PrNoise3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PrNoise3->setText(QCoreApplication::translate("OptDialog", "1.0E-04", nullptr));
#if QT_CONFIG(tooltip)
        Label29->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label29->setText(QCoreApplication::translate("OptDialog", "Satellite Clock Stability (s/s)", nullptr));
#if QT_CONFIG(tooltip)
        SatClkStab->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SatClkStab->setText(QCoreApplication::translate("OptDialog", "5.0E-12", nullptr));
        Options->setTabText(Options->indexOf(TabSheet4), QCoreApplication::translate("OptDialog", "S&tatistics", nullptr));
#if QT_CONFIG(tooltip)
        TabSheet5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        GroupRovAnt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        GroupRovAnt->setTitle(QCoreApplication::translate("OptDialog", "Rover", nullptr));
        RovPosTypeP->setItemText(0, QCoreApplication::translate("OptDialog", "Lat/Lon/Height deg/m", nullptr));
        RovPosTypeP->setItemText(1, QCoreApplication::translate("OptDialog", "Lat/Lon/Height dms/m", nullptr));
        RovPosTypeP->setItemText(2, QCoreApplication::translate("OptDialog", "X/Y/Z-ECEF m", nullptr));

#if QT_CONFIG(tooltip)
        RovPosTypeP->setToolTip(QString());
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
#if QT_CONFIG(tooltip)
        Label4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label4->setText(QString());
#if QT_CONFIG(tooltip)
        GroupRefAnt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        GroupRefAnt->setTitle(QCoreApplication::translate("OptDialog", "Base Station", nullptr));
#if QT_CONFIG(tooltip)
        RefAnt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        RefAntPcv->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RefAntPcv->setText(QCoreApplication::translate("OptDialog", "Antenna Type (*: Auto)", nullptr));
#if QT_CONFIG(tooltip)
        LabelRefAntD->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelRefAntD->setText(QCoreApplication::translate("OptDialog", "Delta-E/N/U (m)", nullptr));
        ChkInitRestart->setText(QCoreApplication::translate("OptDialog", "Init by Restart", nullptr));
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
        RefAntU->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RefAntU->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        RefAntE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RefAntE->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        RefAntN->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RefAntN->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
        RefPosTypeP->setItemText(0, QCoreApplication::translate("OptDialog", "Lat/Lon/Height (deg/m)", nullptr));
        RefPosTypeP->setItemText(1, QCoreApplication::translate("OptDialog", "Lat/Lon/Height (dms/m)", nullptr));
        RefPosTypeP->setItemText(2, QCoreApplication::translate("OptDialog", "X/Y/Z-ECEF m", nullptr));
        RefPosTypeP->setItemText(3, QCoreApplication::translate("OptDialog", "RTCM Antenna Position", nullptr));
        RefPosTypeP->setItemText(4, QCoreApplication::translate("OptDialog", "Raw Antenna Position", nullptr));
        RefPosTypeP->setItemText(5, QCoreApplication::translate("OptDialog", "Average of Single Position", nullptr));

#if QT_CONFIG(tooltip)
        RefPosTypeP->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelMaxAveEp->setText(QCoreApplication::translate("OptDialog", "Max # Ave (ep)", nullptr));
#if QT_CONFIG(tooltip)
        Label30->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label30->setText(QCoreApplication::translate("OptDialog", "Station Position File", nullptr));
#if QT_CONFIG(tooltip)
        BtnStaPosView->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        StaPosFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        StaPosFile->setText(QString());
#if QT_CONFIG(tooltip)
        BtnStaPosFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnStaPosFile->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
        Options->setTabText(Options->indexOf(TabSheet5), QCoreApplication::translate("OptDialog", "&Positions", nullptr));
#if QT_CONFIG(tooltip)
        TabSheet7->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnSatPcvView->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnSatPcvView->setText(QString());
#if QT_CONFIG(tooltip)
        SatPcvFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SatPcvFile->setText(QString());
#if QT_CONFIG(tooltip)
        BtnSatPcvFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnSatPcvFile->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnAntPcvFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnAntPcvFile->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        AntPcvFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        AntPcvFile->setText(QString());
#if QT_CONFIG(tooltip)
        GeoidDataFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        GeoidDataFile->setText(QString());
#if QT_CONFIG(tooltip)
        BtnGeoidDataFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnGeoidDataFile->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Label48->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label48->setText(QCoreApplication::translate("OptDialog", "Geoid Data File", nullptr));
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("OptDialog", "DCB Data File", nullptr));
#if QT_CONFIG(tooltip)
        LocalDir->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LocalDir->setText(QString());
#if QT_CONFIG(tooltip)
        Label31->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label31->setText(QCoreApplication::translate("OptDialog", "FTP/HTTP Local Directory", nullptr));
#if QT_CONFIG(tooltip)
        BtnLocalDir->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnLocalDir->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnDCBFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnDCBFile->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnDCBView->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnDCBView->setText(QString());
#if QT_CONFIG(tooltip)
        DCBFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        DCBFile->setText(QString());
#if QT_CONFIG(tooltip)
        BtnEOPView->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnEOPView->setText(QString());
#if QT_CONFIG(tooltip)
        Label23->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label23->setText(QCoreApplication::translate("OptDialog", "EOP Data File", nullptr));
#if QT_CONFIG(tooltip)
        EOPFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        EOPFile->setText(QString());
#if QT_CONFIG(tooltip)
        BtnEOPFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnEOPFile->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnOLFileView->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOLFileView->setText(QString());
#if QT_CONFIG(tooltip)
        OLFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        OLFile->setText(QString());
#if QT_CONFIG(tooltip)
        Label34->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label34->setText(QCoreApplication::translate("OptDialog", "Ocean Loading BLQ Format", nullptr));
#if QT_CONFIG(tooltip)
        BtnOLFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOLFile->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Label38->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label38->setText(QCoreApplication::translate("OptDialog", "Satellite/Receiver Antenna PCV File ANTEX/NGS PCV", nullptr));
#if QT_CONFIG(tooltip)
        BtnAntPcvView->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnAntPcvView->setText(QString());
        Options->setTabText(Options->indexOf(TabSheet7), QCoreApplication::translate("OptDialog", "&Files", nullptr));
#if QT_CONFIG(tooltip)
        TabSheet8->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label19->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label19->setText(QCoreApplication::translate("OptDialog", "Process Cycle (ms) / Buffer Size (bytes)", nullptr));
#if QT_CONFIG(tooltip)
        SvrCycleE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SvrCycleE->setText(QCoreApplication::translate("OptDialog", "10", nullptr));
#if QT_CONFIG(tooltip)
        SvrBuffSizeE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SvrBuffSizeE->setText(QCoreApplication::translate("OptDialog", "32768", nullptr));
#if QT_CONFIG(tooltip)
        Label44->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label44->setText(QCoreApplication::translate("OptDialog", "Timeout / Reconnect Interval (ms)", nullptr));
#if QT_CONFIG(tooltip)
        TimeoutTimeE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeoutTimeE->setText(QCoreApplication::translate("OptDialog", "10000", nullptr));
#if QT_CONFIG(tooltip)
        ReconTimeE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ReconTimeE->setText(QCoreApplication::translate("OptDialog", "10000", nullptr));
#if QT_CONFIG(tooltip)
        Label46->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label46->setText(QCoreApplication::translate("OptDialog", "NMEA Cycle (ms) / File Swap Margin (s)", nullptr));
#if QT_CONFIG(tooltip)
        NmeaCycleE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NmeaCycleE->setText(QCoreApplication::translate("OptDialog", "5000", nullptr));
#if QT_CONFIG(tooltip)
        FileSwapMarginE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FileSwapMarginE->setText(QCoreApplication::translate("OptDialog", "30", nullptr));
#if QT_CONFIG(tooltip)
        Label41->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label41->setText(QCoreApplication::translate("OptDialog", "Solution Buffer/ Log Size (epochs)", nullptr));
#if QT_CONFIG(tooltip)
        SolBuffSizeE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SolBuffSizeE->setText(QCoreApplication::translate("OptDialog", "1000", nullptr));
#if QT_CONFIG(tooltip)
        SavedSolE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SavedSolE->setText(QCoreApplication::translate("OptDialog", "100", nullptr));
#if QT_CONFIG(tooltip)
        Label42->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label42->setText(QCoreApplication::translate("OptDialog", "Navigation Message Selection", nullptr));
        NavSelectS->setItemText(0, QCoreApplication::translate("OptDialog", "All", nullptr));
        NavSelectS->setItemText(1, QCoreApplication::translate("OptDialog", "1 Rover", nullptr));
        NavSelectS->setItemText(2, QCoreApplication::translate("OptDialog", "2 Base Station", nullptr));
        NavSelectS->setItemText(3, QCoreApplication::translate("OptDialog", "3 Correction", nullptr));

#if QT_CONFIG(tooltip)
        NavSelectS->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label5->setText(QCoreApplication::translate("OptDialog", "SBAS Sat Selection (0: all) / Monitor Port", nullptr));
#if QT_CONFIG(tooltip)
        SbasSatE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SbasSatE->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        MoniPortE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MoniPortE->setText(QCoreApplication::translate("OptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        Label45->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label45->setText(QCoreApplication::translate("OptDialog", "HTTP / NTRIP Proxy", nullptr));
#if QT_CONFIG(tooltip)
        ProxyAddrE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ProxyAddrE->setText(QString());
#if QT_CONFIG(tooltip)
        Label43->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label43->setText(QCoreApplication::translate("OptDialog", "Layout", nullptr));
        PanelStackE->setItemText(0, QCoreApplication::translate("OptDialog", "Horizontal", nullptr));
        PanelStackE->setItemText(1, QCoreApplication::translate("OptDialog", "Vertical", nullptr));

#if QT_CONFIG(tooltip)
        PanelStackE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label40->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label40->setText(QCoreApplication::translate("OptDialog", "Sol Font", nullptr));
#if QT_CONFIG(tooltip)
        FontLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FontLabel->setText(QCoreApplication::translate("OptDialog", "Font Label", nullptr));
#if QT_CONFIG(tooltip)
        BtnFont->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnFont->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Label15->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label15->setText(QCoreApplication::translate("OptDialog", "TLE Data", nullptr));
#if QT_CONFIG(tooltip)
        TLEFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TLEFile->setText(QString());
#if QT_CONFIG(tooltip)
        BtnTLEFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnTLEFile->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Label39->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label39->setText(QCoreApplication::translate("OptDialog", "Sat No", nullptr));
#if QT_CONFIG(tooltip)
        TLESatFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TLESatFile->setText(QString());
#if QT_CONFIG(tooltip)
        BtnTLESatFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnTLESatFile->setText(QCoreApplication::translate("OptDialog", "...", nullptr));
        Options->setTabText(Options->indexOf(TabSheet8), QCoreApplication::translate("OptDialog", "&Misc", nullptr));
#if QT_CONFIG(tooltip)
        Label47->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label47->setText(QCoreApplication::translate("OptDialog", "Station Position File", nullptr));
#if QT_CONFIG(tooltip)
        BtnLoad->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnLoad->setText(QCoreApplication::translate("OptDialog", "&Load", nullptr));
#if QT_CONFIG(tooltip)
        BtnSave->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnSave->setText(QCoreApplication::translate("OptDialog", "&Save", nullptr));
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("OptDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("OptDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptDialog: public Ui_OptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIOPT_H
