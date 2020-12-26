/********************************************************************************
** Form generated from reading UI file 'postmain.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTMAIN_H
#define UI_POSTMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *Panel1;
    QVBoxLayout *verticalLayout;
    QWidget *Panel3;
    QGridLayout *gridLayout;
    QCheckBox *TimeStart;
    QPushButton *BtnTime1;
    QCheckBox *TimeEnd;
    QPushButton *BtnTime2;
    QCheckBox *TimeIntF;
    QCheckBox *TimeUnitF;
    QDateEdit *TimeY1;
    QTimeEdit *TimeH1;
    QDateEdit *TimeY2;
    QTimeEdit *TimeH2;
    QComboBox *TimeInt;
    QLabel *LabelTimeInt;
    QLineEdit *TimeUnit;
    QLabel *LabelTimeUnit;
    QWidget *Panel4;
    QGridLayout *gridLayout_2;
    QLabel *LabelInputFile1;
    QPushButton *BtnKeyword;
    QPushButton *BtnInputPlot1;
    QPushButton *BtnInputView1;
    QComboBox *InputFile1;
    QPushButton *BtnInputFile1;
    QLabel *LabelInputFile3;
    QPushButton *BtnInputPlot2;
    QPushButton *BtnInputView2;
    QComboBox *InputFile2;
    QPushButton *BtnInputFile2;
    QLabel *LabelInputFile2;
    QPushButton *BtnInputView3;
    QPushButton *BtnInputView4;
    QPushButton *BtnInputView5;
    QPushButton *BtnInputView6;
    QComboBox *InputFile3;
    QPushButton *BtnInputFile3;
    QComboBox *InputFile4;
    QPushButton *BtnInputFile4;
    QComboBox *InputFile5;
    QPushButton *BtnInputFile5;
    QComboBox *InputFile6;
    QPushButton *BtnInputFile6;
    QWidget *Panel5;
    QGridLayout *gridLayout_3;
    QLabel *Label1;
    QCheckBox *OutDirEna;
    QLabel *LabelOutDir;
    QLineEdit *OutDir;
    QPushButton *BtnOutDir;
    QComboBox *OutputFile;
    QPushButton *BtnOutputFile;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BtnOutputView2;
    QPushButton *BtnOutputView1;
    QLabel *Message;
    QPushButton *BtnAbout;
    QProgressBar *Progress;
    QWidget *Panel2;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnPlot;
    QPushButton *BtnView;
    QPushButton *BtnToKML;
    QPushButton *BtnOption;
    QPushButton *BtnExec;
    QPushButton *BtnAbort;
    QPushButton *BtnExit;

    void setupUi(QWidget *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QString::fromUtf8("MainForm"));
        MainForm->resize(633, 551);
        verticalLayout_2 = new QVBoxLayout(MainForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Panel1 = new QWidget(MainForm);
        Panel1->setObjectName(QString::fromUtf8("Panel1"));
        Panel1->setEnabled(true);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        verticalLayout = new QVBoxLayout(Panel1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Panel3 = new QWidget(Panel1);
        Panel3->setObjectName(QString::fromUtf8("Panel3"));
        Panel3->setEnabled(true);
        Panel3->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(Panel3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        TimeStart = new QCheckBox(Panel3);
        TimeStart->setObjectName(QString::fromUtf8("TimeStart"));
        TimeStart->setChecked(false);

        gridLayout->addWidget(TimeStart, 0, 0, 1, 2);

        BtnTime1 = new QPushButton(Panel3);
        BtnTime1->setObjectName(QString::fromUtf8("BtnTime1"));
        BtnTime1->setEnabled(true);
        BtnTime1->setFlat(true);

        gridLayout->addWidget(BtnTime1, 0, 2, 1, 1);

        TimeEnd = new QCheckBox(Panel3);
        TimeEnd->setObjectName(QString::fromUtf8("TimeEnd"));
        TimeEnd->setChecked(false);

        gridLayout->addWidget(TimeEnd, 0, 3, 1, 2);

        BtnTime2 = new QPushButton(Panel3);
        BtnTime2->setObjectName(QString::fromUtf8("BtnTime2"));
        BtnTime2->setEnabled(true);
        BtnTime2->setFlat(true);

        gridLayout->addWidget(BtnTime2, 0, 5, 1, 1);

        TimeIntF = new QCheckBox(Panel3);
        TimeIntF->setObjectName(QString::fromUtf8("TimeIntF"));
        TimeIntF->setChecked(false);

        gridLayout->addWidget(TimeIntF, 0, 6, 1, 2);

        TimeUnitF = new QCheckBox(Panel3);
        TimeUnitF->setObjectName(QString::fromUtf8("TimeUnitF"));
        TimeUnitF->setChecked(false);

        gridLayout->addWidget(TimeUnitF, 0, 8, 1, 1);

        TimeY1 = new QDateEdit(Panel3);
        TimeY1->setObjectName(QString::fromUtf8("TimeY1"));
        TimeY1->setEnabled(true);

        gridLayout->addWidget(TimeY1, 1, 0, 1, 1);

        TimeH1 = new QTimeEdit(Panel3);
        TimeH1->setObjectName(QString::fromUtf8("TimeH1"));
        TimeH1->setEnabled(true);

        gridLayout->addWidget(TimeH1, 1, 1, 1, 2);

        TimeY2 = new QDateEdit(Panel3);
        TimeY2->setObjectName(QString::fromUtf8("TimeY2"));
        TimeY2->setEnabled(true);

        gridLayout->addWidget(TimeY2, 1, 3, 1, 1);

        TimeH2 = new QTimeEdit(Panel3);
        TimeH2->setObjectName(QString::fromUtf8("TimeH2"));
        TimeH2->setEnabled(true);

        gridLayout->addWidget(TimeH2, 1, 4, 1, 2);

        TimeInt = new QComboBox(Panel3);
        TimeInt->addItem(QString());
        TimeInt->addItem(QString());
        TimeInt->addItem(QString());
        TimeInt->addItem(QString());
        TimeInt->addItem(QString());
        TimeInt->addItem(QString());
        TimeInt->addItem(QString());
        TimeInt->addItem(QString());
        TimeInt->addItem(QString());
        TimeInt->addItem(QString());
        TimeInt->addItem(QString());
        TimeInt->addItem(QString());
        TimeInt->addItem(QString());
        TimeInt->setObjectName(QString::fromUtf8("TimeInt"));
        TimeInt->setEnabled(true);
        TimeInt->setEditable(true);

        gridLayout->addWidget(TimeInt, 1, 6, 1, 1);

        LabelTimeInt = new QLabel(Panel3);
        LabelTimeInt->setObjectName(QString::fromUtf8("LabelTimeInt"));
        LabelTimeInt->setEnabled(true);

        gridLayout->addWidget(LabelTimeInt, 1, 7, 1, 1);

        TimeUnit = new QLineEdit(Panel3);
        TimeUnit->setObjectName(QString::fromUtf8("TimeUnit"));
        TimeUnit->setEnabled(true);

        gridLayout->addWidget(TimeUnit, 1, 8, 1, 1);

        LabelTimeUnit = new QLabel(Panel3);
        LabelTimeUnit->setObjectName(QString::fromUtf8("LabelTimeUnit"));
        LabelTimeUnit->setEnabled(true);

        gridLayout->addWidget(LabelTimeUnit, 1, 9, 1, 1);


        verticalLayout->addWidget(Panel3);

        Panel4 = new QWidget(Panel1);
        Panel4->setObjectName(QString::fromUtf8("Panel4"));
        Panel4->setEnabled(true);
        Panel4->setLayoutDirection(Qt::LeftToRight);
        gridLayout_2 = new QGridLayout(Panel4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        LabelInputFile1 = new QLabel(Panel4);
        LabelInputFile1->setObjectName(QString::fromUtf8("LabelInputFile1"));
        LabelInputFile1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LabelInputFile1->sizePolicy().hasHeightForWidth());
        LabelInputFile1->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(LabelInputFile1, 0, 0, 1, 1);

        BtnKeyword = new QPushButton(Panel4);
        BtnKeyword->setObjectName(QString::fromUtf8("BtnKeyword"));
        BtnKeyword->setEnabled(true);
        BtnKeyword->setFlat(true);

        gridLayout_2->addWidget(BtnKeyword, 0, 1, 1, 1);

        BtnInputPlot1 = new QPushButton(Panel4);
        BtnInputPlot1->setObjectName(QString::fromUtf8("BtnInputPlot1"));
        BtnInputPlot1->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/chart.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnInputPlot1->setIcon(icon);
        BtnInputPlot1->setFlat(true);

        gridLayout_2->addWidget(BtnInputPlot1, 0, 4, 1, 1);

        BtnInputView1 = new QPushButton(Panel4);
        BtnInputView1->setObjectName(QString::fromUtf8("BtnInputView1"));
        BtnInputView1->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/buttons/doc.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnInputView1->setIcon(icon1);
        BtnInputView1->setFlat(true);

        gridLayout_2->addWidget(BtnInputView1, 0, 5, 1, 1);

        InputFile1 = new QComboBox(Panel4);
        InputFile1->setObjectName(QString::fromUtf8("InputFile1"));
        InputFile1->setEnabled(true);
        InputFile1->setEditable(true);

        gridLayout_2->addWidget(InputFile1, 1, 0, 1, 5);

        BtnInputFile1 = new QPushButton(Panel4);
        BtnInputFile1->setObjectName(QString::fromUtf8("BtnInputFile1"));
        BtnInputFile1->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnInputFile1->setPalette(palette);
        BtnInputFile1->setFlat(false);

        gridLayout_2->addWidget(BtnInputFile1, 1, 5, 1, 1);

        LabelInputFile3 = new QLabel(Panel4);
        LabelInputFile3->setObjectName(QString::fromUtf8("LabelInputFile3"));
        LabelInputFile3->setEnabled(true);

        gridLayout_2->addWidget(LabelInputFile3, 2, 0, 1, 1);

        BtnInputPlot2 = new QPushButton(Panel4);
        BtnInputPlot2->setObjectName(QString::fromUtf8("BtnInputPlot2"));
        BtnInputPlot2->setEnabled(true);
        BtnInputPlot2->setIcon(icon);
        BtnInputPlot2->setFlat(true);

        gridLayout_2->addWidget(BtnInputPlot2, 2, 4, 1, 1);

        BtnInputView2 = new QPushButton(Panel4);
        BtnInputView2->setObjectName(QString::fromUtf8("BtnInputView2"));
        BtnInputView2->setEnabled(true);
        BtnInputView2->setIcon(icon1);
        BtnInputView2->setFlat(true);

        gridLayout_2->addWidget(BtnInputView2, 2, 5, 1, 1);

        InputFile2 = new QComboBox(Panel4);
        InputFile2->setObjectName(QString::fromUtf8("InputFile2"));
        InputFile2->setEnabled(true);
        InputFile2->setEditable(true);

        gridLayout_2->addWidget(InputFile2, 3, 0, 1, 5);

        BtnInputFile2 = new QPushButton(Panel4);
        BtnInputFile2->setObjectName(QString::fromUtf8("BtnInputFile2"));
        BtnInputFile2->setEnabled(true);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnInputFile2->setPalette(palette1);
        BtnInputFile2->setFlat(false);

        gridLayout_2->addWidget(BtnInputFile2, 3, 5, 1, 1);

        LabelInputFile2 = new QLabel(Panel4);
        LabelInputFile2->setObjectName(QString::fromUtf8("LabelInputFile2"));
        LabelInputFile2->setEnabled(true);

        gridLayout_2->addWidget(LabelInputFile2, 4, 0, 1, 2);

        BtnInputView3 = new QPushButton(Panel4);
        BtnInputView3->setObjectName(QString::fromUtf8("BtnInputView3"));
        BtnInputView3->setEnabled(true);
        BtnInputView3->setIcon(icon1);
        BtnInputView3->setFlat(true);

        gridLayout_2->addWidget(BtnInputView3, 4, 2, 1, 1);

        BtnInputView4 = new QPushButton(Panel4);
        BtnInputView4->setObjectName(QString::fromUtf8("BtnInputView4"));
        BtnInputView4->setEnabled(true);
        BtnInputView4->setIcon(icon1);
        BtnInputView4->setFlat(true);

        gridLayout_2->addWidget(BtnInputView4, 4, 3, 1, 1);

        BtnInputView5 = new QPushButton(Panel4);
        BtnInputView5->setObjectName(QString::fromUtf8("BtnInputView5"));
        BtnInputView5->setEnabled(true);
        BtnInputView5->setIcon(icon1);
        BtnInputView5->setFlat(true);

        gridLayout_2->addWidget(BtnInputView5, 4, 4, 1, 1);

        BtnInputView6 = new QPushButton(Panel4);
        BtnInputView6->setObjectName(QString::fromUtf8("BtnInputView6"));
        BtnInputView6->setEnabled(true);
        BtnInputView6->setIcon(icon1);
        BtnInputView6->setFlat(true);

        gridLayout_2->addWidget(BtnInputView6, 4, 5, 1, 1);

        InputFile3 = new QComboBox(Panel4);
        InputFile3->setObjectName(QString::fromUtf8("InputFile3"));
        InputFile3->setEnabled(true);
        InputFile3->setEditable(true);

        gridLayout_2->addWidget(InputFile3, 5, 0, 1, 5);

        BtnInputFile3 = new QPushButton(Panel4);
        BtnInputFile3->setObjectName(QString::fromUtf8("BtnInputFile3"));
        BtnInputFile3->setEnabled(true);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnInputFile3->setPalette(palette2);
        BtnInputFile3->setFlat(false);

        gridLayout_2->addWidget(BtnInputFile3, 5, 5, 1, 1);

        InputFile4 = new QComboBox(Panel4);
        InputFile4->setObjectName(QString::fromUtf8("InputFile4"));
        InputFile4->setEnabled(true);
        InputFile4->setEditable(true);

        gridLayout_2->addWidget(InputFile4, 6, 0, 1, 5);

        BtnInputFile4 = new QPushButton(Panel4);
        BtnInputFile4->setObjectName(QString::fromUtf8("BtnInputFile4"));
        BtnInputFile4->setEnabled(true);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnInputFile4->setPalette(palette3);
        BtnInputFile4->setFlat(false);

        gridLayout_2->addWidget(BtnInputFile4, 6, 5, 1, 1);

        InputFile5 = new QComboBox(Panel4);
        InputFile5->setObjectName(QString::fromUtf8("InputFile5"));
        InputFile5->setEnabled(true);
        InputFile5->setEditable(true);

        gridLayout_2->addWidget(InputFile5, 7, 0, 1, 5);

        BtnInputFile5 = new QPushButton(Panel4);
        BtnInputFile5->setObjectName(QString::fromUtf8("BtnInputFile5"));
        BtnInputFile5->setEnabled(true);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnInputFile5->setPalette(palette4);
        BtnInputFile5->setFlat(false);

        gridLayout_2->addWidget(BtnInputFile5, 7, 5, 1, 1);

        InputFile6 = new QComboBox(Panel4);
        InputFile6->setObjectName(QString::fromUtf8("InputFile6"));
        InputFile6->setEnabled(true);
        InputFile6->setEditable(true);

        gridLayout_2->addWidget(InputFile6, 8, 0, 1, 5);

        BtnInputFile6 = new QPushButton(Panel4);
        BtnInputFile6->setObjectName(QString::fromUtf8("BtnInputFile6"));
        BtnInputFile6->setEnabled(true);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnInputFile6->setPalette(palette5);
        BtnInputFile6->setFlat(false);

        gridLayout_2->addWidget(BtnInputFile6, 8, 5, 1, 1);


        verticalLayout->addWidget(Panel4);

        Panel5 = new QWidget(Panel1);
        Panel5->setObjectName(QString::fromUtf8("Panel5"));
        Panel5->setEnabled(true);
        Panel5->setLayoutDirection(Qt::LeftToRight);
        gridLayout_3 = new QGridLayout(Panel5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        Label1 = new QLabel(Panel5);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);

        gridLayout_3->addWidget(Label1, 0, 0, 1, 1);

        OutDirEna = new QCheckBox(Panel5);
        OutDirEna->setObjectName(QString::fromUtf8("OutDirEna"));
        OutDirEna->setChecked(false);

        gridLayout_3->addWidget(OutDirEna, 0, 1, 1, 1);

        LabelOutDir = new QLabel(Panel5);
        LabelOutDir->setObjectName(QString::fromUtf8("LabelOutDir"));
        LabelOutDir->setEnabled(true);

        gridLayout_3->addWidget(LabelOutDir, 0, 2, 1, 1);

        OutDir = new QLineEdit(Panel5);
        OutDir->setObjectName(QString::fromUtf8("OutDir"));
        OutDir->setEnabled(false);

        gridLayout_3->addWidget(OutDir, 0, 3, 1, 1);

        BtnOutDir = new QPushButton(Panel5);
        BtnOutDir->setObjectName(QString::fromUtf8("BtnOutDir"));
        BtnOutDir->setEnabled(false);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnOutDir->setPalette(palette6);
        BtnOutDir->setFlat(false);

        gridLayout_3->addWidget(BtnOutDir, 0, 4, 1, 1);

        OutputFile = new QComboBox(Panel5);
        OutputFile->setObjectName(QString::fromUtf8("OutputFile"));
        OutputFile->setEnabled(true);
        OutputFile->setEditable(true);

        gridLayout_3->addWidget(OutputFile, 1, 0, 1, 4);

        BtnOutputFile = new QPushButton(Panel5);
        BtnOutputFile->setObjectName(QString::fromUtf8("BtnOutputFile"));
        BtnOutputFile->setEnabled(true);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnOutputFile->setPalette(palette7);
        BtnOutputFile->setFlat(false);

        gridLayout_3->addWidget(BtnOutputFile, 1, 4, 1, 1);


        verticalLayout->addWidget(Panel5);

        widget = new QWidget(Panel1);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        BtnOutputView2 = new QPushButton(widget);
        BtnOutputView2->setObjectName(QString::fromUtf8("BtnOutputView2"));
        BtnOutputView2->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BtnOutputView2->sizePolicy().hasHeightForWidth());
        BtnOutputView2->setSizePolicy(sizePolicy1);
        BtnOutputView2->setIcon(icon1);
        BtnOutputView2->setFlat(true);

        horizontalLayout_2->addWidget(BtnOutputView2);

        BtnOutputView1 = new QPushButton(widget);
        BtnOutputView1->setObjectName(QString::fromUtf8("BtnOutputView1"));
        BtnOutputView1->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnOutputView1->sizePolicy().hasHeightForWidth());
        BtnOutputView1->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/buttons/sqr.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOutputView1->setIcon(icon2);
        BtnOutputView1->setFlat(true);

        horizontalLayout_2->addWidget(BtnOutputView1);

        Message = new QLabel(widget);
        Message->setObjectName(QString::fromUtf8("Message"));
        Message->setEnabled(true);
        QPalette palette8;
        QBrush brush1(QColor(128, 128, 128, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Message->setPalette(palette8);
        Message->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(Message);

        BtnAbout = new QPushButton(widget);
        BtnAbout->setObjectName(QString::fromUtf8("BtnAbout"));
        BtnAbout->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnAbout->sizePolicy().hasHeightForWidth());
        BtnAbout->setSizePolicy(sizePolicy1);
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        BtnAbout->setPalette(palette9);
        BtnAbout->setFlat(true);

        horizontalLayout_2->addWidget(BtnAbout);


        verticalLayout->addWidget(widget);

        Progress = new QProgressBar(Panel1);
        Progress->setObjectName(QString::fromUtf8("Progress"));
        Progress->setEnabled(true);
        Progress->setMinimum(0);
        Progress->setMaximum(100);
        Progress->setValue(0);
        Progress->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(Progress);


        verticalLayout_2->addWidget(Panel1);

        Panel2 = new QWidget(MainForm);
        Panel2->setObjectName(QString::fromUtf8("Panel2"));
        Panel2->setEnabled(true);
        sizePolicy.setHeightForWidth(Panel2->sizePolicy().hasHeightForWidth());
        Panel2->setSizePolicy(sizePolicy);
        Panel2->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(Panel2);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, -1);
        BtnPlot = new QPushButton(Panel2);
        BtnPlot->setObjectName(QString::fromUtf8("BtnPlot"));
        BtnPlot->setEnabled(true);
        BtnPlot->setIcon(icon);
        BtnPlot->setFlat(false);

        horizontalLayout->addWidget(BtnPlot);

        BtnView = new QPushButton(Panel2);
        BtnView->setObjectName(QString::fromUtf8("BtnView"));
        BtnView->setEnabled(true);
        BtnView->setIcon(icon1);
        BtnView->setFlat(false);

        horizontalLayout->addWidget(BtnView);

        BtnToKML = new QPushButton(Panel2);
        BtnToKML->setObjectName(QString::fromUtf8("BtnToKML"));
        BtnToKML->setEnabled(true);
        BtnToKML->setFlat(false);

        horizontalLayout->addWidget(BtnToKML);

        BtnOption = new QPushButton(Panel2);
        BtnOption->setObjectName(QString::fromUtf8("BtnOption"));
        BtnOption->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/buttons/toolbmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOption->setIcon(icon3);
        BtnOption->setFlat(false);

        horizontalLayout->addWidget(BtnOption);

        BtnExec = new QPushButton(Panel2);
        BtnExec->setObjectName(QString::fromUtf8("BtnExec"));
        BtnExec->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/buttons/start.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnExec->setIcon(icon4);
        BtnExec->setFlat(false);

        horizontalLayout->addWidget(BtnExec);

        BtnAbort = new QPushButton(Panel2);
        BtnAbort->setObjectName(QString::fromUtf8("BtnAbort"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/buttons/stop2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnAbort->setIcon(icon5);

        horizontalLayout->addWidget(BtnAbort);

        BtnExit = new QPushButton(Panel2);
        BtnExit->setObjectName(QString::fromUtf8("BtnExit"));
        BtnExit->setEnabled(true);
        BtnExit->setFlat(false);

        horizontalLayout->addWidget(BtnExit);


        verticalLayout_2->addWidget(Panel2);


        retranslateUi(MainForm);

        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QWidget *MainForm)
    {
        MainForm->setWindowTitle(QCoreApplication::translate("MainForm", "RTKPOST", nullptr));
#if QT_CONFIG(tooltip)
        MainForm->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel1->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Panel3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel3->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        TimeStart->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeStart->setText(QCoreApplication::translate("MainForm", "Time Start (GPST)", nullptr));
#if QT_CONFIG(tooltip)
        BtnTime1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnTime1->setText(QCoreApplication::translate("MainForm", "?", nullptr));
#if QT_CONFIG(tooltip)
        TimeEnd->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeEnd->setText(QCoreApplication::translate("MainForm", "Time End (GPST)", nullptr));
#if QT_CONFIG(tooltip)
        BtnTime2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnTime2->setText(QCoreApplication::translate("MainForm", "?", nullptr));
#if QT_CONFIG(tooltip)
        TimeIntF->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeIntF->setText(QCoreApplication::translate("MainForm", "Interval", nullptr));
#if QT_CONFIG(tooltip)
        TimeUnitF->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeUnitF->setText(QCoreApplication::translate("MainForm", "Unit", nullptr));
#if QT_CONFIG(tooltip)
        TimeY1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TimeH1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TimeY2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TimeH2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeInt->setItemText(0, QCoreApplication::translate("MainForm", "0", nullptr));
        TimeInt->setItemText(1, QCoreApplication::translate("MainForm", "0.05", nullptr));
        TimeInt->setItemText(2, QCoreApplication::translate("MainForm", "0.1", nullptr));
        TimeInt->setItemText(3, QCoreApplication::translate("MainForm", "0.2", nullptr));
        TimeInt->setItemText(4, QCoreApplication::translate("MainForm", "0.25", nullptr));
        TimeInt->setItemText(5, QCoreApplication::translate("MainForm", "0.5", nullptr));
        TimeInt->setItemText(6, QCoreApplication::translate("MainForm", "1", nullptr));
        TimeInt->setItemText(7, QCoreApplication::translate("MainForm", "2", nullptr));
        TimeInt->setItemText(8, QCoreApplication::translate("MainForm", "5", nullptr));
        TimeInt->setItemText(9, QCoreApplication::translate("MainForm", "10", nullptr));
        TimeInt->setItemText(10, QCoreApplication::translate("MainForm", "15", nullptr));
        TimeInt->setItemText(11, QCoreApplication::translate("MainForm", "30", nullptr));
        TimeInt->setItemText(12, QCoreApplication::translate("MainForm", "60", nullptr));

#if QT_CONFIG(tooltip)
        TimeInt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        LabelTimeInt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelTimeInt->setText(QCoreApplication::translate("MainForm", "s", nullptr));
#if QT_CONFIG(tooltip)
        TimeUnit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeUnit->setText(QCoreApplication::translate("MainForm", "24", nullptr));
#if QT_CONFIG(tooltip)
        LabelTimeUnit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelTimeUnit->setText(QCoreApplication::translate("MainForm", "H", nullptr));
#if QT_CONFIG(tooltip)
        Panel4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel4->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        LabelInputFile1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelInputFile1->setText(QCoreApplication::translate("MainForm", "RINEX OBS", nullptr));
#if QT_CONFIG(tooltip)
        BtnKeyword->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnKeyword->setText(QCoreApplication::translate("MainForm", "?", nullptr));
#if QT_CONFIG(tooltip)
        BtnInputPlot1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnInputPlot1->setText(QString());
#if QT_CONFIG(tooltip)
        BtnInputView1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnInputView1->setText(QString());
#if QT_CONFIG(tooltip)
        InputFile1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnInputFile1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnInputFile1->setText(QCoreApplication::translate("MainForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        LabelInputFile3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelInputFile3->setText(QCoreApplication::translate("MainForm", "RINEX OBS: Base Station", nullptr));
#if QT_CONFIG(tooltip)
        BtnInputPlot2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnInputPlot2->setText(QString());
#if QT_CONFIG(tooltip)
        BtnInputView2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnInputView2->setText(QString());
#if QT_CONFIG(tooltip)
        InputFile2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnInputFile2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnInputFile2->setText(QCoreApplication::translate("MainForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        LabelInputFile2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelInputFile2->setText(QCoreApplication::translate("MainForm", "RINEX NAV/CLK, SP3, FCB, IONEX, SBS/EMS  or RTCM", nullptr));
#if QT_CONFIG(tooltip)
        BtnInputView3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnInputView3->setText(QString());
#if QT_CONFIG(tooltip)
        BtnInputView4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnInputView4->setText(QString());
#if QT_CONFIG(tooltip)
        BtnInputView5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnInputView5->setText(QString());
#if QT_CONFIG(tooltip)
        BtnInputView6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnInputView6->setText(QString());
#if QT_CONFIG(tooltip)
        InputFile3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnInputFile3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnInputFile3->setText(QCoreApplication::translate("MainForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        InputFile4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnInputFile4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnInputFile4->setText(QCoreApplication::translate("MainForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        InputFile5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnInputFile5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnInputFile5->setText(QCoreApplication::translate("MainForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        InputFile6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnInputFile6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnInputFile6->setText(QCoreApplication::translate("MainForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        Panel5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel5->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("MainForm", "Solution", nullptr));
#if QT_CONFIG(tooltip)
        OutDirEna->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        OutDirEna->setText(QString());
#if QT_CONFIG(tooltip)
        LabelOutDir->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelOutDir->setText(QCoreApplication::translate("MainForm", "Dir", nullptr));
#if QT_CONFIG(tooltip)
        OutDir->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        OutDir->setText(QString());
#if QT_CONFIG(tooltip)
        BtnOutDir->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOutDir->setText(QCoreApplication::translate("MainForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        OutputFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnOutputFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOutputFile->setText(QCoreApplication::translate("MainForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnOutputView2->setToolTip(QCoreApplication::translate("MainForm", "Show Debug Trace", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnOutputView2->setText(QString());
#if QT_CONFIG(tooltip)
        BtnOutputView1->setToolTip(QCoreApplication::translate("MainForm", "Show Stat File", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnOutputView1->setText(QString());
#if QT_CONFIG(tooltip)
        Message->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Message->setText(QString());
#if QT_CONFIG(tooltip)
        BtnAbout->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnAbout->setText(QCoreApplication::translate("MainForm", "?", nullptr));
#if QT_CONFIG(tooltip)
        Progress->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel2->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        BtnPlot->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnPlot->setText(QCoreApplication::translate("MainForm", "&Plot...", nullptr));
#if QT_CONFIG(tooltip)
        BtnView->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnView->setText(QCoreApplication::translate("MainForm", "&View...", nullptr));
#if QT_CONFIG(tooltip)
        BtnToKML->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnToKML->setText(QCoreApplication::translate("MainForm", "KML/GPX...", nullptr));
#if QT_CONFIG(tooltip)
        BtnOption->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOption->setText(QCoreApplication::translate("MainForm", "&Options...", nullptr));
#if QT_CONFIG(tooltip)
        BtnExec->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnExec->setText(QCoreApplication::translate("MainForm", "E&xecute", nullptr));
        BtnAbort->setText(QCoreApplication::translate("MainForm", "Abort", nullptr));
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

#endif // UI_POSTMAIN_H
