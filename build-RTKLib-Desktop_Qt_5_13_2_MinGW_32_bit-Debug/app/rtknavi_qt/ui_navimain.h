/********************************************************************************
** Form generated from reading UI file 'navimain.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIMAIN_H
#define UI_NAVIMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *Panel1;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *BtnPanel;
    QPushButton *BtnTimeSys;
    QLabel *LabelTime;
    QSpacerItem *horizontalSpacer;
    QWidget *Panel12;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *BtnInputStr;
    QLabel *Str1;
    QLabel *Str2;
    QLabel *Str3;
    QLabel *Image1;
    QLabel *Svr;
    QLabel *Image2;
    QLabel *Str4;
    QLabel *Str5;
    QLabel *Str6;
    QLabel *Str7;
    QLabel *Str8;
    QPushButton *BtnOutputStr;
    QPushButton *BtnLogStr;
    QWidget *Panel5;
    QHBoxLayout *horizontalLayout;
    QLabel *IndQ;
    QLabel *SolS;
    QLabel *SolQ;
    QPushButton *BtnSolType2;
    QWidget *Panel2;
    QHBoxLayout *horizontalLayout_9;
    QSplitter *Splitter1;
    QWidget *Panel21;
    QGridLayout *gridLayout_4;
    QWidget *Panel212;
    QHBoxLayout *horizontalLayout_6;
    QLabel *Plabel0;
    QLabel *IndSol;
    QWidget *Panel211;
    QGridLayout *gridLayout;
    QLabel *PlabelA;
    QLabel *Solution;
    QLabel *Plabel1;
    QLabel *Pos1;
    QLabel *Plabel2;
    QLabel *Pos2;
    QLabel *Plabel3;
    QLabel *Pos3;
    QLabel *LabelStd;
    QLabel *LabelNSat;
    QPushButton *BtnSolType;
    QWidget *Panel213;
    QHBoxLayout *horizontalLayout_5;
    QScrollBar *ScbSol;
    QPushButton *BtnSave;
    QWidget *Panel22;
    QHBoxLayout *horizontalLayout_13;
    QSplitter *Splitter2;
    QWidget *Panel222;
    QGridLayout *gridLayout_3;
    QLabel *Disp2;
    QPushButton *BtnExpand;
    QPushButton *BtnFreqType2;
    QPushButton *BtnPlotType2;
    QPushButton *BtnShrink;
    QWidget *Panel221;
    QGridLayout *gridLayout_2;
    QLabel *Disp1;
    QPushButton *BtnPlotType1;
    QPushButton *BtnFreqType1;
    QWidget *Panel3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *BtnMonitor;
    QLabel *Message;
    QWidget *Panel33;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *BtnTaskTray;
    QPushButton *BtnAbout;
    QWidget *Panel4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BtnStart;
    QPushButton *BtnStop;
    QPushButton *BtnMark;
    QPushButton *BtnPlot;
    QPushButton *BtnOpt;
    QPushButton *BtnExit;

    void setupUi(QWidget *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QString::fromUtf8("MainForm"));
        MainForm->resize(646, 323);
        verticalLayout_2 = new QVBoxLayout(MainForm);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Panel1 = new QWidget(MainForm);
        Panel1->setObjectName(QString::fromUtf8("Panel1"));
        Panel1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Panel1->sizePolicy().hasHeightForWidth());
        Panel1->setSizePolicy(sizePolicy);
        horizontalLayout_8 = new QHBoxLayout(Panel1);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        BtnPanel = new QPushButton(Panel1);
        BtnPanel->setObjectName(QString::fromUtf8("BtnPanel"));
        BtnPanel->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BtnPanel->sizePolicy().hasHeightForWidth());
        BtnPanel->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/sqr.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnPanel->setIcon(icon);
        BtnPanel->setFlat(true);

        horizontalLayout_8->addWidget(BtnPanel);

        BtnTimeSys = new QPushButton(Panel1);
        BtnTimeSys->setObjectName(QString::fromUtf8("BtnTimeSys"));
        BtnTimeSys->setEnabled(true);
        BtnTimeSys->setFlat(true);

        horizontalLayout_8->addWidget(BtnTimeSys);

        LabelTime = new QLabel(Panel1);
        LabelTime->setObjectName(QString::fromUtf8("LabelTime"));
        LabelTime->setEnabled(true);

        horizontalLayout_8->addWidget(LabelTime);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        Panel12 = new QWidget(Panel1);
        Panel12->setObjectName(QString::fromUtf8("Panel12"));
        Panel12->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Panel12->sizePolicy().hasHeightForWidth());
        Panel12->setSizePolicy(sizePolicy2);
        Panel12->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_7 = new QHBoxLayout(Panel12);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        BtnInputStr = new QPushButton(Panel12);
        BtnInputStr->setObjectName(QString::fromUtf8("BtnInputStr"));
        BtnInputStr->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnInputStr->sizePolicy().hasHeightForWidth());
        BtnInputStr->setSizePolicy(sizePolicy1);
        BtnInputStr->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(BtnInputStr);

        Str1 = new QLabel(Panel12);
        Str1->setObjectName(QString::fromUtf8("Str1"));
        Str1->setEnabled(true);
        Str1->setMaximumSize(QSize(16777215, 20));
        Str1->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(Str1);

        Str2 = new QLabel(Panel12);
        Str2->setObjectName(QString::fromUtf8("Str2"));
        Str2->setEnabled(true);
        Str2->setMaximumSize(QSize(16777215, 20));
        Str2->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(Str2);

        Str3 = new QLabel(Panel12);
        Str3->setObjectName(QString::fromUtf8("Str3"));
        Str3->setEnabled(true);
        Str3->setMaximumSize(QSize(16777215, 20));
        Str3->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(Str3);

        Image1 = new QLabel(Panel12);
        Image1->setObjectName(QString::fromUtf8("Image1"));
        Image1->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Ignored);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Image1->sizePolicy().hasHeightForWidth());
        Image1->setSizePolicy(sizePolicy3);
        Image1->setMaximumSize(QSize(16777215, 20));
        Image1->setPixmap(QPixmap(QString::fromUtf8(":/buttons/rarrow.bmp")));

        horizontalLayout_7->addWidget(Image1);

        Svr = new QLabel(Panel12);
        Svr->setObjectName(QString::fromUtf8("Svr"));
        Svr->setEnabled(true);
        Svr->setMaximumSize(QSize(16777215, 20));
        Svr->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(Svr);

        Image2 = new QLabel(Panel12);
        Image2->setObjectName(QString::fromUtf8("Image2"));
        Image2->setEnabled(true);
        sizePolicy3.setHeightForWidth(Image2->sizePolicy().hasHeightForWidth());
        Image2->setSizePolicy(sizePolicy3);
        Image2->setMaximumSize(QSize(16777215, 20));
        Image2->setPixmap(QPixmap(QString::fromUtf8(":/buttons/rarrow.bmp")));

        horizontalLayout_7->addWidget(Image2);

        Str4 = new QLabel(Panel12);
        Str4->setObjectName(QString::fromUtf8("Str4"));
        Str4->setEnabled(true);
        Str4->setMaximumSize(QSize(16777215, 20));
        Str4->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(Str4);

        Str5 = new QLabel(Panel12);
        Str5->setObjectName(QString::fromUtf8("Str5"));
        Str5->setEnabled(true);
        Str5->setMaximumSize(QSize(16777215, 20));
        Str5->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(Str5);

        Str6 = new QLabel(Panel12);
        Str6->setObjectName(QString::fromUtf8("Str6"));
        Str6->setEnabled(true);
        Str6->setMaximumSize(QSize(16777215, 20));
        Str6->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(Str6);

        Str7 = new QLabel(Panel12);
        Str7->setObjectName(QString::fromUtf8("Str7"));
        Str7->setEnabled(true);
        Str7->setMaximumSize(QSize(16777215, 20));
        Str7->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(Str7);

        Str8 = new QLabel(Panel12);
        Str8->setObjectName(QString::fromUtf8("Str8"));
        Str8->setEnabled(true);
        Str8->setMaximumSize(QSize(16777215, 20));
        Str8->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(Str8);

        BtnOutputStr = new QPushButton(Panel12);
        BtnOutputStr->setObjectName(QString::fromUtf8("BtnOutputStr"));
        BtnOutputStr->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnOutputStr->sizePolicy().hasHeightForWidth());
        BtnOutputStr->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(BtnOutputStr);

        BtnLogStr = new QPushButton(Panel12);
        BtnLogStr->setObjectName(QString::fromUtf8("BtnLogStr"));
        BtnLogStr->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnLogStr->sizePolicy().hasHeightForWidth());
        BtnLogStr->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(BtnLogStr);


        horizontalLayout_8->addWidget(Panel12);


        verticalLayout_2->addWidget(Panel1);

        Panel5 = new QWidget(MainForm);
        Panel5->setObjectName(QString::fromUtf8("Panel5"));
        Panel5->setEnabled(true);
        sizePolicy.setHeightForWidth(Panel5->sizePolicy().hasHeightForWidth());
        Panel5->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(Panel5);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        IndQ = new QLabel(Panel5);
        IndQ->setObjectName(QString::fromUtf8("IndQ"));
        IndQ->setEnabled(true);
        IndQ->setFrameShape(QFrame::Box);
        IndQ->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(IndQ);

        SolS = new QLabel(Panel5);
        SolS->setObjectName(QString::fromUtf8("SolS"));
        SolS->setEnabled(true);

        horizontalLayout->addWidget(SolS);

        SolQ = new QLabel(Panel5);
        SolQ->setObjectName(QString::fromUtf8("SolQ"));
        SolQ->setEnabled(true);

        horizontalLayout->addWidget(SolQ);

        BtnSolType2 = new QPushButton(Panel5);
        BtnSolType2->setObjectName(QString::fromUtf8("BtnSolType2"));
        BtnSolType2->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnSolType2->sizePolicy().hasHeightForWidth());
        BtnSolType2->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/buttons/down.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnSolType2->setIcon(icon1);
        BtnSolType2->setFlat(true);

        horizontalLayout->addWidget(BtnSolType2);


        verticalLayout_2->addWidget(Panel5);

        Panel2 = new QWidget(MainForm);
        Panel2->setObjectName(QString::fromUtf8("Panel2"));
        Panel2->setEnabled(true);
        horizontalLayout_9 = new QHBoxLayout(Panel2);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        Splitter1 = new QSplitter(Panel2);
        Splitter1->setObjectName(QString::fromUtf8("Splitter1"));
        Splitter1->setOrientation(Qt::Horizontal);
        Panel21 = new QWidget(Splitter1);
        Panel21->setObjectName(QString::fromUtf8("Panel21"));
        Panel21->setEnabled(true);
        gridLayout_4 = new QGridLayout(Panel21);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        Panel212 = new QWidget(Panel21);
        Panel212->setObjectName(QString::fromUtf8("Panel212"));
        Panel212->setEnabled(true);
        sizePolicy.setHeightForWidth(Panel212->sizePolicy().hasHeightForWidth());
        Panel212->setSizePolicy(sizePolicy);
        horizontalLayout_6 = new QHBoxLayout(Panel212);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        Plabel0 = new QLabel(Panel212);
        Plabel0->setObjectName(QString::fromUtf8("Plabel0"));
        Plabel0->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(128, 128, 128, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        Plabel0->setPalette(palette);

        horizontalLayout_6->addWidget(Plabel0);


        gridLayout_4->addWidget(Panel212, 0, 0, 1, 1);

        IndSol = new QLabel(Panel21);
        IndSol->setObjectName(QString::fromUtf8("IndSol"));
        IndSol->setEnabled(true);
        sizePolicy1.setHeightForWidth(IndSol->sizePolicy().hasHeightForWidth());
        IndSol->setSizePolicy(sizePolicy1);
        IndSol->setMaximumSize(QSize(20, 20));
        IndSol->setFrameShape(QFrame::Box);

        gridLayout_4->addWidget(IndSol, 0, 2, 1, 1);

        Panel211 = new QWidget(Panel21);
        Panel211->setObjectName(QString::fromUtf8("Panel211"));
        Panel211->setEnabled(true);
        Panel211->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(Panel211);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        PlabelA = new QLabel(Panel211);
        PlabelA->setObjectName(QString::fromUtf8("PlabelA"));
        PlabelA->setEnabled(true);
        QPalette palette1;
        QBrush brush1(QColor(192, 192, 192, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        PlabelA->setPalette(palette1);

        gridLayout->addWidget(PlabelA, 0, 0, 1, 1);

        Solution = new QLabel(Panel211);
        Solution->setObjectName(QString::fromUtf8("Solution"));
        Solution->setEnabled(true);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        Solution->setPalette(palette2);

        gridLayout->addWidget(Solution, 0, 1, 1, 1);

        Plabel1 = new QLabel(Panel211);
        Plabel1->setObjectName(QString::fromUtf8("Plabel1"));
        Plabel1->setEnabled(true);
        QPalette palette3;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        Plabel1->setPalette(palette3);

        gridLayout->addWidget(Plabel1, 1, 0, 1, 1);

        Pos1 = new QLabel(Panel211);
        Pos1->setObjectName(QString::fromUtf8("Pos1"));
        Pos1->setEnabled(true);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        Pos1->setPalette(palette4);

        gridLayout->addWidget(Pos1, 1, 1, 1, 2);

        Plabel2 = new QLabel(Panel211);
        Plabel2->setObjectName(QString::fromUtf8("Plabel2"));
        Plabel2->setEnabled(true);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        Plabel2->setPalette(palette5);

        gridLayout->addWidget(Plabel2, 2, 0, 1, 1);

        Pos2 = new QLabel(Panel211);
        Pos2->setObjectName(QString::fromUtf8("Pos2"));
        Pos2->setEnabled(true);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        Pos2->setPalette(palette6);

        gridLayout->addWidget(Pos2, 2, 1, 1, 2);

        Plabel3 = new QLabel(Panel211);
        Plabel3->setObjectName(QString::fromUtf8("Plabel3"));
        Plabel3->setEnabled(true);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        Plabel3->setPalette(palette7);

        gridLayout->addWidget(Plabel3, 3, 0, 1, 1);

        Pos3 = new QLabel(Panel211);
        Pos3->setObjectName(QString::fromUtf8("Pos3"));
        Pos3->setEnabled(true);
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        Pos3->setPalette(palette8);

        gridLayout->addWidget(Pos3, 3, 1, 1, 2);

        LabelStd = new QLabel(Panel211);
        LabelStd->setObjectName(QString::fromUtf8("LabelStd"));
        LabelStd->setEnabled(true);
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        LabelStd->setPalette(palette9);

        gridLayout->addWidget(LabelStd, 4, 0, 1, 3);

        LabelNSat = new QLabel(Panel211);
        LabelNSat->setObjectName(QString::fromUtf8("LabelNSat"));
        LabelNSat->setEnabled(true);
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        LabelNSat->setPalette(palette10);

        gridLayout->addWidget(LabelNSat, 5, 0, 1, 3);


        gridLayout_4->addWidget(Panel211, 1, 0, 1, 3);

        BtnSolType = new QPushButton(Panel21);
        BtnSolType->setObjectName(QString::fromUtf8("BtnSolType"));
        BtnSolType->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnSolType->sizePolicy().hasHeightForWidth());
        BtnSolType->setSizePolicy(sizePolicy1);
        BtnSolType->setIcon(icon1);
        BtnSolType->setFlat(true);

        gridLayout_4->addWidget(BtnSolType, 0, 1, 1, 1);

        Panel213 = new QWidget(Panel21);
        Panel213->setObjectName(QString::fromUtf8("Panel213"));
        Panel213->setEnabled(true);
        sizePolicy.setHeightForWidth(Panel213->sizePolicy().hasHeightForWidth());
        Panel213->setSizePolicy(sizePolicy);
        horizontalLayout_5 = new QHBoxLayout(Panel213);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        ScbSol = new QScrollBar(Panel213);
        ScbSol->setObjectName(QString::fromUtf8("ScbSol"));
        ScbSol->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(ScbSol->sizePolicy().hasHeightForWidth());
        ScbSol->setSizePolicy(sizePolicy4);
        ScbSol->setMinimum(0);
        ScbSol->setMaximum(0);
        ScbSol->setSingleStep(1);
        ScbSol->setValue(0);
        ScbSol->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(ScbSol);

        BtnSave = new QPushButton(Panel213);
        BtnSave->setObjectName(QString::fromUtf8("BtnSave"));
        BtnSave->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnSave->sizePolicy().hasHeightForWidth());
        BtnSave->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(BtnSave);


        gridLayout_4->addWidget(Panel213, 3, 0, 1, 3);

        Splitter1->addWidget(Panel21);
        Panel22 = new QWidget(Splitter1);
        Panel22->setObjectName(QString::fromUtf8("Panel22"));
        Panel22->setEnabled(true);
        horizontalLayout_13 = new QHBoxLayout(Panel22);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        Splitter2 = new QSplitter(Panel22);
        Splitter2->setObjectName(QString::fromUtf8("Splitter2"));
        Splitter2->setOrientation(Qt::Vertical);
        Panel222 = new QWidget(Splitter2);
        Panel222->setObjectName(QString::fromUtf8("Panel222"));
        Panel222->setEnabled(true);
        gridLayout_3 = new QGridLayout(Panel222);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        Disp2 = new QLabel(Panel222);
        Disp2->setObjectName(QString::fromUtf8("Disp2"));
        Disp2->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(Disp2->sizePolicy().hasHeightForWidth());
        Disp2->setSizePolicy(sizePolicy5);

        gridLayout_3->addWidget(Disp2, 2, 0, 1, 5);

        BtnExpand = new QPushButton(Panel222);
        BtnExpand->setObjectName(QString::fromUtf8("BtnExpand"));
        sizePolicy1.setHeightForWidth(BtnExpand->sizePolicy().hasHeightForWidth());
        BtnExpand->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/buttons/expand.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnExpand->setIcon(icon2);
        BtnExpand->setFlat(true);

        gridLayout_3->addWidget(BtnExpand, 0, 0, 1, 1);

        BtnFreqType2 = new QPushButton(Panel222);
        BtnFreqType2->setObjectName(QString::fromUtf8("BtnFreqType2"));
        BtnFreqType2->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnFreqType2->sizePolicy().hasHeightForWidth());
        BtnFreqType2->setSizePolicy(sizePolicy1);
        BtnFreqType2->setIcon(icon1);
        BtnFreqType2->setFlat(true);

        gridLayout_3->addWidget(BtnFreqType2, 0, 3, 1, 1);

        BtnPlotType2 = new QPushButton(Panel222);
        BtnPlotType2->setObjectName(QString::fromUtf8("BtnPlotType2"));
        BtnPlotType2->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnPlotType2->sizePolicy().hasHeightForWidth());
        BtnPlotType2->setSizePolicy(sizePolicy1);
        BtnPlotType2->setIcon(icon1);
        BtnPlotType2->setFlat(true);

        gridLayout_3->addWidget(BtnPlotType2, 0, 4, 1, 1);

        BtnShrink = new QPushButton(Panel222);
        BtnShrink->setObjectName(QString::fromUtf8("BtnShrink"));
        sizePolicy1.setHeightForWidth(BtnShrink->sizePolicy().hasHeightForWidth());
        BtnShrink->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/buttons/shrink.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnShrink->setIcon(icon3);
        BtnShrink->setFlat(true);

        gridLayout_3->addWidget(BtnShrink, 0, 1, 1, 1);

        Splitter2->addWidget(Panel222);
        Panel221 = new QWidget(Splitter2);
        Panel221->setObjectName(QString::fromUtf8("Panel221"));
        Panel221->setEnabled(true);
        gridLayout_2 = new QGridLayout(Panel221);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Disp1 = new QLabel(Panel221);
        Disp1->setObjectName(QString::fromUtf8("Disp1"));
        Disp1->setEnabled(true);
        sizePolicy5.setHeightForWidth(Disp1->sizePolicy().hasHeightForWidth());
        Disp1->setSizePolicy(sizePolicy5);

        gridLayout_2->addWidget(Disp1, 1, 0, 1, 3);

        BtnPlotType1 = new QPushButton(Panel221);
        BtnPlotType1->setObjectName(QString::fromUtf8("BtnPlotType1"));
        BtnPlotType1->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnPlotType1->sizePolicy().hasHeightForWidth());
        BtnPlotType1->setSizePolicy(sizePolicy1);
        BtnPlotType1->setIcon(icon1);
        BtnPlotType1->setFlat(true);

        gridLayout_2->addWidget(BtnPlotType1, 0, 2, 1, 1);

        BtnFreqType1 = new QPushButton(Panel221);
        BtnFreqType1->setObjectName(QString::fromUtf8("BtnFreqType1"));
        BtnFreqType1->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnFreqType1->sizePolicy().hasHeightForWidth());
        BtnFreqType1->setSizePolicy(sizePolicy1);
        BtnFreqType1->setIcon(icon1);
        BtnFreqType1->setFlat(true);

        gridLayout_2->addWidget(BtnFreqType1, 0, 1, 1, 1);

        Splitter2->addWidget(Panel221);

        horizontalLayout_13->addWidget(Splitter2);

        Splitter1->addWidget(Panel22);

        horizontalLayout_9->addWidget(Splitter1);


        verticalLayout_2->addWidget(Panel2);

        Panel3 = new QWidget(MainForm);
        Panel3->setObjectName(QString::fromUtf8("Panel3"));
        Panel3->setEnabled(true);
        sizePolicy.setHeightForWidth(Panel3->sizePolicy().hasHeightForWidth());
        Panel3->setSizePolicy(sizePolicy);
        horizontalLayout_4 = new QHBoxLayout(Panel3);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        BtnMonitor = new QPushButton(Panel3);
        BtnMonitor->setObjectName(QString::fromUtf8("BtnMonitor"));
        BtnMonitor->setEnabled(true);
        BtnMonitor->setIcon(icon);
        BtnMonitor->setFlat(true);

        horizontalLayout_4->addWidget(BtnMonitor);

        Message = new QLabel(Panel3);
        Message->setObjectName(QString::fromUtf8("Message"));
        Message->setEnabled(true);
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(Message->sizePolicy().hasHeightForWidth());
        Message->setSizePolicy(sizePolicy6);

        horizontalLayout_4->addWidget(Message);

        Panel33 = new QWidget(Panel3);
        Panel33->setObjectName(QString::fromUtf8("Panel33"));
        Panel33->setEnabled(true);
        horizontalLayout_3 = new QHBoxLayout(Panel33);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        BtnTaskTray = new QPushButton(Panel33);
        BtnTaskTray->setObjectName(QString::fromUtf8("BtnTaskTray"));
        BtnTaskTray->setEnabled(true);
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(BtnTaskTray->sizePolicy().hasHeightForWidth());
        BtnTaskTray->setSizePolicy(sizePolicy7);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/buttons/ttray.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnTaskTray->setIcon(icon4);
        BtnTaskTray->setFlat(true);

        horizontalLayout_3->addWidget(BtnTaskTray);

        BtnAbout = new QPushButton(Panel33);
        BtnAbout->setObjectName(QString::fromUtf8("BtnAbout"));
        BtnAbout->setEnabled(true);
        sizePolicy3.setHeightForWidth(BtnAbout->sizePolicy().hasHeightForWidth());
        BtnAbout->setSizePolicy(sizePolicy3);
        BtnAbout->setFlat(true);

        horizontalLayout_3->addWidget(BtnAbout);


        horizontalLayout_4->addWidget(Panel33);


        verticalLayout_2->addWidget(Panel3);

        Panel4 = new QWidget(MainForm);
        Panel4->setObjectName(QString::fromUtf8("Panel4"));
        Panel4->setEnabled(true);
        sizePolicy.setHeightForWidth(Panel4->sizePolicy().hasHeightForWidth());
        Panel4->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(Panel4);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        BtnStart = new QPushButton(Panel4);
        BtnStart->setObjectName(QString::fromUtf8("BtnStart"));
        BtnStart->setEnabled(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/buttons/start.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnStart->setIcon(icon5);

        horizontalLayout_2->addWidget(BtnStart);

        BtnStop = new QPushButton(Panel4);
        BtnStop->setObjectName(QString::fromUtf8("BtnStop"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/buttons/stop2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnStop->setIcon(icon6);

        horizontalLayout_2->addWidget(BtnStop);

        BtnMark = new QPushButton(Panel4);
        BtnMark->setObjectName(QString::fromUtf8("BtnMark"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/buttons/point.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnMark->setIcon(icon7);

        horizontalLayout_2->addWidget(BtnMark);

        BtnPlot = new QPushButton(Panel4);
        BtnPlot->setObjectName(QString::fromUtf8("BtnPlot"));
        BtnPlot->setEnabled(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/buttons/chart.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnPlot->setIcon(icon8);

        horizontalLayout_2->addWidget(BtnPlot);

        BtnOpt = new QPushButton(Panel4);
        BtnOpt->setObjectName(QString::fromUtf8("BtnOpt"));
        BtnOpt->setEnabled(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/buttons/toolbmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt->setIcon(icon9);

        horizontalLayout_2->addWidget(BtnOpt);

        BtnExit = new QPushButton(Panel4);
        BtnExit->setObjectName(QString::fromUtf8("BtnExit"));
        BtnExit->setEnabled(true);
        BtnExit->setAutoDefault(true);

        horizontalLayout_2->addWidget(BtnExit);


        verticalLayout_2->addWidget(Panel4);


        retranslateUi(MainForm);

        BtnExit->setDefault(true);


        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QWidget *MainForm)
    {
        MainForm->setWindowTitle(QCoreApplication::translate("MainForm", "RTKNAVI", nullptr));
#if QT_CONFIG(tooltip)
        MainForm->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel1->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        BtnPanel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnTimeSys->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnTimeSys->setText(QCoreApplication::translate("MainForm", "GPST", nullptr));
#if QT_CONFIG(tooltip)
        LabelTime->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelTime->setText(QCoreApplication::translate("MainForm", "2000/01/01 00:00:00.0", nullptr));
#if QT_CONFIG(tooltip)
        Panel12->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel12->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        BtnInputStr->setToolTip(QCoreApplication::translate("MainForm", "Input Streams", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnInputStr->setText(QCoreApplication::translate("MainForm", "I", nullptr));
#if QT_CONFIG(tooltip)
        Str1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Str2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Str3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Image1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Svr->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Image2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Str4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Str5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Str6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Str7->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Str8->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnOutputStr->setToolTip(QCoreApplication::translate("MainForm", "Output Streams", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnOutputStr->setText(QCoreApplication::translate("MainForm", "O", nullptr));
#if QT_CONFIG(tooltip)
        BtnLogStr->setToolTip(QCoreApplication::translate("MainForm", "Log Streams", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnLogStr->setText(QCoreApplication::translate("MainForm", "L", nullptr));
#if QT_CONFIG(tooltip)
        Panel5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel5->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        IndQ->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        IndQ->setText(QString());
#if QT_CONFIG(tooltip)
        SolS->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SolS->setText(QCoreApplication::translate("MainForm", "----", nullptr));
#if QT_CONFIG(tooltip)
        SolQ->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SolQ->setText(QCoreApplication::translate("MainForm", "Solution", nullptr));
#if QT_CONFIG(tooltip)
        BtnSolType2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnSolType2->setText(QString());
#if QT_CONFIG(tooltip)
        Panel2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel2->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Panel21->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel21->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Panel212->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel212->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Plabel0->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Plabel0->setText(QCoreApplication::translate("MainForm", "Lat/Lon/Height", nullptr));
#if QT_CONFIG(tooltip)
        IndSol->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel211->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel211->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        PlabelA->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PlabelA->setText(QCoreApplication::translate("MainForm", "Solution:", nullptr));
#if QT_CONFIG(tooltip)
        Solution->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Solution->setText(QCoreApplication::translate("MainForm", "----", nullptr));
#if QT_CONFIG(tooltip)
        Plabel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Plabel1->setText(QCoreApplication::translate("MainForm", "N:", nullptr));
#if QT_CONFIG(tooltip)
        Pos1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Pos1->setText(QCoreApplication::translate("MainForm", "0 00' 00.0000\"", nullptr));
#if QT_CONFIG(tooltip)
        Plabel2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Plabel2->setText(QCoreApplication::translate("MainForm", "E:", nullptr));
#if QT_CONFIG(tooltip)
        Pos2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Pos2->setText(QCoreApplication::translate("MainForm", "0 00' 00.0000\"", nullptr));
#if QT_CONFIG(tooltip)
        Plabel3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Plabel3->setText(QCoreApplication::translate("MainForm", "H:", nullptr));
#if QT_CONFIG(tooltip)
        Pos3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Pos3->setText(QCoreApplication::translate("MainForm", "0.000 m", nullptr));
#if QT_CONFIG(tooltip)
        LabelStd->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelStd->setText(QCoreApplication::translate("MainForm", "E: 0.000 N: 0.000 U: 0.000 m", nullptr));
#if QT_CONFIG(tooltip)
        LabelNSat->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelNSat->setText(QCoreApplication::translate("MainForm", "Age: 0.0 s Ratio: 0.0 NSAT: 0", nullptr));
#if QT_CONFIG(tooltip)
        BtnSolType->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel213->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel213->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        ScbSol->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnSave->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnSave->setText(QCoreApplication::translate("MainForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        Panel22->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel22->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Panel222->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel222->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Disp2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnExpand->setText(QString());
#if QT_CONFIG(tooltip)
        BtnFreqType2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnPlotType2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnShrink->setText(QString());
#if QT_CONFIG(tooltip)
        Panel221->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel221->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Disp1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnPlotType1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnFreqType1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel3->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        BtnMonitor->setToolTip(QCoreApplication::translate("MainForm", "RTK Monitor", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Message->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Message->setText(QString());
#if QT_CONFIG(tooltip)
        Panel33->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel33->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        BtnTaskTray->setToolTip(QCoreApplication::translate("MainForm", "Hide", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnAbout->setToolTip(QCoreApplication::translate("MainForm", "About", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnAbout->setText(QCoreApplication::translate("MainForm", "?", nullptr));
#if QT_CONFIG(tooltip)
        Panel4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel4->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        BtnStart->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnStart->setText(QCoreApplication::translate("MainForm", "&Start", nullptr));
#if QT_CONFIG(tooltip)
        BtnStop->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnStop->setText(QCoreApplication::translate("MainForm", "S&top", nullptr));
        BtnMark->setText(QCoreApplication::translate("MainForm", "Mark...", nullptr));
#if QT_CONFIG(tooltip)
        BtnPlot->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnPlot->setText(QCoreApplication::translate("MainForm", "&Plot...", nullptr));
#if QT_CONFIG(tooltip)
        BtnOpt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOpt->setText(QCoreApplication::translate("MainForm", "&Options...", nullptr));
#if QT_CONFIG(tooltip)
        BtnExit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnExit->setText(QCoreApplication::translate("MainForm", "&Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIMAIN_H
