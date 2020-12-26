/********************************************************************************
** Form generated from reading UI file 'convmain.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVMAIN_H
#define UI_CONVMAIN_H

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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *Panel1;
    QGridLayout *gridLayout;
    QLineEdit *TimeUnit;
    QCheckBox *TimeEndF;
    QComboBox *TimeInt;
    QDateEdit *TimeY2;
    QPushButton *BtnTime1;
    QDateEdit *TimeY1;
    QCheckBox *TimeIntF;
    QCheckBox *TimeStartF;
    QLabel *LabelTimeUnit;
    QLabel *LabelTimeInt;
    QCheckBox *TimeUnitF;
    QPushButton *BtnTime2;
    QTimeEdit *TimeH1;
    QTimeEdit *TimeH2;
    QWidget *Panel2;
    QGridLayout *gridLayout_2;
    QCheckBox *OutFileEna6;
    QCheckBox *OutFileEna2;
    QLabel *LabelOutDir;
    QCheckBox *OutFileEna4;
    QLabel *LabelFormat;
    QCheckBox *OutFileEna3;
    QPushButton *BtnOutDir;
    QLineEdit *OutDir;
    QCheckBox *OutFileEna1;
    QCheckBox *OutFileEna5;
    QLabel *LabelOutFile;
    QCheckBox *OutDirEna;
    QCheckBox *OutFileEna7;
    QPushButton *BtnOutFileView1;
    QPushButton *BtnOutFile1;
    QPushButton *BtnOutFile2;
    QPushButton *BtnOutFile3;
    QPushButton *BtnOutFileView2;
    QPushButton *BtnOutFileView3;
    QLineEdit *OutFile3;
    QLineEdit *OutFile2;
    QLineEdit *OutFile1;
    QPushButton *BtnOutFile4;
    QPushButton *BtnOutFile5;
    QPushButton *BtnOutFile6;
    QPushButton *BtnOutFile7;
    QPushButton *BtnOutFileView4;
    QPushButton *BtnOutFileView5;
    QPushButton *BtnOutFileView6;
    QPushButton *BtnOutFileView7;
    QLineEdit *OutFile4;
    QLineEdit *OutFile5;
    QLineEdit *OutFile6;
    QLineEdit *OutFile7;
    QComboBox *Format;
    QPushButton *BtnInFile;
    QPushButton *BtnInFileView;
    QComboBox *InFile;
    QPushButton *BtnKey;
    QLabel *LabelInFile;
    QWidget *Panel3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Message;
    QPushButton *BtnAbout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnPlot;
    QPushButton *BtnPost;
    QPushButton *BtnOptions;
    QPushButton *BtnConvert;
    QPushButton *BtnAbort;
    QPushButton *BtnExit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(713, 608);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Panel1 = new QWidget(centralwidget);
        Panel1->setObjectName(QString::fromUtf8("Panel1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Panel1->sizePolicy().hasHeightForWidth());
        Panel1->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(Panel1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TimeUnit = new QLineEdit(Panel1);
        TimeUnit->setObjectName(QString::fromUtf8("TimeUnit"));

        gridLayout->addWidget(TimeUnit, 1, 8, 1, 1);

        TimeEndF = new QCheckBox(Panel1);
        TimeEndF->setObjectName(QString::fromUtf8("TimeEndF"));

        gridLayout->addWidget(TimeEndF, 0, 3, 1, 2);

        TimeInt = new QComboBox(Panel1);
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
        TimeInt->setEditable(true);

        gridLayout->addWidget(TimeInt, 1, 6, 1, 1);

        TimeY2 = new QDateEdit(Panel1);
        TimeY2->setObjectName(QString::fromUtf8("TimeY2"));

        gridLayout->addWidget(TimeY2, 1, 3, 1, 1);

        BtnTime1 = new QPushButton(Panel1);
        BtnTime1->setObjectName(QString::fromUtf8("BtnTime1"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BtnTime1->sizePolicy().hasHeightForWidth());
        BtnTime1->setSizePolicy(sizePolicy1);
        BtnTime1->setFlat(true);

        gridLayout->addWidget(BtnTime1, 0, 2, 1, 1);

        TimeY1 = new QDateEdit(Panel1);
        TimeY1->setObjectName(QString::fromUtf8("TimeY1"));

        gridLayout->addWidget(TimeY1, 1, 0, 1, 1);

        TimeIntF = new QCheckBox(Panel1);
        TimeIntF->setObjectName(QString::fromUtf8("TimeIntF"));

        gridLayout->addWidget(TimeIntF, 0, 6, 1, 1);

        TimeStartF = new QCheckBox(Panel1);
        TimeStartF->setObjectName(QString::fromUtf8("TimeStartF"));

        gridLayout->addWidget(TimeStartF, 0, 0, 1, 2);

        LabelTimeUnit = new QLabel(Panel1);
        LabelTimeUnit->setObjectName(QString::fromUtf8("LabelTimeUnit"));

        gridLayout->addWidget(LabelTimeUnit, 1, 9, 1, 1);

        LabelTimeInt = new QLabel(Panel1);
        LabelTimeInt->setObjectName(QString::fromUtf8("LabelTimeInt"));

        gridLayout->addWidget(LabelTimeInt, 1, 7, 1, 1);

        TimeUnitF = new QCheckBox(Panel1);
        TimeUnitF->setObjectName(QString::fromUtf8("TimeUnitF"));

        gridLayout->addWidget(TimeUnitF, 0, 8, 1, 1);

        BtnTime2 = new QPushButton(Panel1);
        BtnTime2->setObjectName(QString::fromUtf8("BtnTime2"));
        sizePolicy1.setHeightForWidth(BtnTime2->sizePolicy().hasHeightForWidth());
        BtnTime2->setSizePolicy(sizePolicy1);
        BtnTime2->setFlat(true);

        gridLayout->addWidget(BtnTime2, 0, 5, 1, 1);

        TimeH1 = new QTimeEdit(Panel1);
        TimeH1->setObjectName(QString::fromUtf8("TimeH1"));

        gridLayout->addWidget(TimeH1, 1, 1, 1, 2);

        TimeH2 = new QTimeEdit(Panel1);
        TimeH2->setObjectName(QString::fromUtf8("TimeH2"));

        gridLayout->addWidget(TimeH2, 1, 4, 1, 2);


        verticalLayout->addWidget(Panel1);

        Panel2 = new QWidget(centralwidget);
        Panel2->setObjectName(QString::fromUtf8("Panel2"));
        gridLayout_2 = new QGridLayout(Panel2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        OutFileEna6 = new QCheckBox(Panel2);
        OutFileEna6->setObjectName(QString::fromUtf8("OutFileEna6"));

        gridLayout_2->addWidget(OutFileEna6, 11, 0, 1, 1);

        OutFileEna2 = new QCheckBox(Panel2);
        OutFileEna2->setObjectName(QString::fromUtf8("OutFileEna2"));

        gridLayout_2->addWidget(OutFileEna2, 7, 0, 1, 1);

        LabelOutDir = new QLabel(Panel2);
        LabelOutDir->setObjectName(QString::fromUtf8("LabelOutDir"));

        gridLayout_2->addWidget(LabelOutDir, 3, 0, 1, 2);

        OutFileEna4 = new QCheckBox(Panel2);
        OutFileEna4->setObjectName(QString::fromUtf8("OutFileEna4"));

        gridLayout_2->addWidget(OutFileEna4, 9, 0, 1, 1);

        LabelFormat = new QLabel(Panel2);
        LabelFormat->setObjectName(QString::fromUtf8("LabelFormat"));

        gridLayout_2->addWidget(LabelFormat, 3, 2, 1, 1);

        OutFileEna3 = new QCheckBox(Panel2);
        OutFileEna3->setObjectName(QString::fromUtf8("OutFileEna3"));

        gridLayout_2->addWidget(OutFileEna3, 8, 0, 1, 1);

        BtnOutDir = new QPushButton(Panel2);
        BtnOutDir->setObjectName(QString::fromUtf8("BtnOutDir"));

        gridLayout_2->addWidget(BtnOutDir, 4, 2, 1, 1);

        OutDir = new QLineEdit(Panel2);
        OutDir->setObjectName(QString::fromUtf8("OutDir"));

        gridLayout_2->addWidget(OutDir, 4, 1, 1, 1);

        OutFileEna1 = new QCheckBox(Panel2);
        OutFileEna1->setObjectName(QString::fromUtf8("OutFileEna1"));

        gridLayout_2->addWidget(OutFileEna1, 6, 0, 1, 1);

        OutFileEna5 = new QCheckBox(Panel2);
        OutFileEna5->setObjectName(QString::fromUtf8("OutFileEna5"));

        gridLayout_2->addWidget(OutFileEna5, 10, 0, 1, 1);

        LabelOutFile = new QLabel(Panel2);
        LabelOutFile->setObjectName(QString::fromUtf8("LabelOutFile"));

        gridLayout_2->addWidget(LabelOutFile, 5, 0, 1, 2);

        OutDirEna = new QCheckBox(Panel2);
        OutDirEna->setObjectName(QString::fromUtf8("OutDirEna"));

        gridLayout_2->addWidget(OutDirEna, 4, 0, 1, 1);

        OutFileEna7 = new QCheckBox(Panel2);
        OutFileEna7->setObjectName(QString::fromUtf8("OutFileEna7"));

        gridLayout_2->addWidget(OutFileEna7, 12, 0, 1, 1);

        BtnOutFileView1 = new QPushButton(Panel2);
        BtnOutFileView1->setObjectName(QString::fromUtf8("BtnOutFileView1"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/doc.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOutFileView1->setIcon(icon);
        BtnOutFileView1->setFlat(true);

        gridLayout_2->addWidget(BtnOutFileView1, 6, 3, 1, 1);

        BtnOutFile1 = new QPushButton(Panel2);
        BtnOutFile1->setObjectName(QString::fromUtf8("BtnOutFile1"));
        sizePolicy1.setHeightForWidth(BtnOutFile1->sizePolicy().hasHeightForWidth());
        BtnOutFile1->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(BtnOutFile1, 6, 4, 1, 1);

        BtnOutFile2 = new QPushButton(Panel2);
        BtnOutFile2->setObjectName(QString::fromUtf8("BtnOutFile2"));
        sizePolicy1.setHeightForWidth(BtnOutFile2->sizePolicy().hasHeightForWidth());
        BtnOutFile2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(BtnOutFile2, 7, 4, 1, 1);

        BtnOutFile3 = new QPushButton(Panel2);
        BtnOutFile3->setObjectName(QString::fromUtf8("BtnOutFile3"));
        sizePolicy1.setHeightForWidth(BtnOutFile3->sizePolicy().hasHeightForWidth());
        BtnOutFile3->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(BtnOutFile3, 8, 4, 1, 1);

        BtnOutFileView2 = new QPushButton(Panel2);
        BtnOutFileView2->setObjectName(QString::fromUtf8("BtnOutFileView2"));
        BtnOutFileView2->setIcon(icon);
        BtnOutFileView2->setFlat(true);

        gridLayout_2->addWidget(BtnOutFileView2, 7, 3, 1, 1);

        BtnOutFileView3 = new QPushButton(Panel2);
        BtnOutFileView3->setObjectName(QString::fromUtf8("BtnOutFileView3"));
        BtnOutFileView3->setIcon(icon);
        BtnOutFileView3->setFlat(true);

        gridLayout_2->addWidget(BtnOutFileView3, 8, 3, 1, 1);

        OutFile3 = new QLineEdit(Panel2);
        OutFile3->setObjectName(QString::fromUtf8("OutFile3"));

        gridLayout_2->addWidget(OutFile3, 8, 1, 1, 2);

        OutFile2 = new QLineEdit(Panel2);
        OutFile2->setObjectName(QString::fromUtf8("OutFile2"));

        gridLayout_2->addWidget(OutFile2, 7, 1, 1, 2);

        OutFile1 = new QLineEdit(Panel2);
        OutFile1->setObjectName(QString::fromUtf8("OutFile1"));

        gridLayout_2->addWidget(OutFile1, 6, 1, 1, 2);

        BtnOutFile4 = new QPushButton(Panel2);
        BtnOutFile4->setObjectName(QString::fromUtf8("BtnOutFile4"));
        sizePolicy1.setHeightForWidth(BtnOutFile4->sizePolicy().hasHeightForWidth());
        BtnOutFile4->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(BtnOutFile4, 9, 4, 1, 1);

        BtnOutFile5 = new QPushButton(Panel2);
        BtnOutFile5->setObjectName(QString::fromUtf8("BtnOutFile5"));
        sizePolicy1.setHeightForWidth(BtnOutFile5->sizePolicy().hasHeightForWidth());
        BtnOutFile5->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(BtnOutFile5, 10, 4, 1, 1);

        BtnOutFile6 = new QPushButton(Panel2);
        BtnOutFile6->setObjectName(QString::fromUtf8("BtnOutFile6"));
        sizePolicy1.setHeightForWidth(BtnOutFile6->sizePolicy().hasHeightForWidth());
        BtnOutFile6->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(BtnOutFile6, 11, 4, 1, 1);

        BtnOutFile7 = new QPushButton(Panel2);
        BtnOutFile7->setObjectName(QString::fromUtf8("BtnOutFile7"));
        sizePolicy1.setHeightForWidth(BtnOutFile7->sizePolicy().hasHeightForWidth());
        BtnOutFile7->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(BtnOutFile7, 12, 4, 1, 1);

        BtnOutFileView4 = new QPushButton(Panel2);
        BtnOutFileView4->setObjectName(QString::fromUtf8("BtnOutFileView4"));
        BtnOutFileView4->setIcon(icon);
        BtnOutFileView4->setFlat(true);

        gridLayout_2->addWidget(BtnOutFileView4, 9, 3, 1, 1);

        BtnOutFileView5 = new QPushButton(Panel2);
        BtnOutFileView5->setObjectName(QString::fromUtf8("BtnOutFileView5"));
        BtnOutFileView5->setIcon(icon);
        BtnOutFileView5->setFlat(true);

        gridLayout_2->addWidget(BtnOutFileView5, 10, 3, 1, 1);

        BtnOutFileView6 = new QPushButton(Panel2);
        BtnOutFileView6->setObjectName(QString::fromUtf8("BtnOutFileView6"));
        BtnOutFileView6->setIcon(icon);
        BtnOutFileView6->setFlat(true);

        gridLayout_2->addWidget(BtnOutFileView6, 11, 3, 1, 1);

        BtnOutFileView7 = new QPushButton(Panel2);
        BtnOutFileView7->setObjectName(QString::fromUtf8("BtnOutFileView7"));
        BtnOutFileView7->setIcon(icon);
        BtnOutFileView7->setFlat(true);

        gridLayout_2->addWidget(BtnOutFileView7, 12, 3, 1, 1);

        OutFile4 = new QLineEdit(Panel2);
        OutFile4->setObjectName(QString::fromUtf8("OutFile4"));

        gridLayout_2->addWidget(OutFile4, 9, 1, 1, 2);

        OutFile5 = new QLineEdit(Panel2);
        OutFile5->setObjectName(QString::fromUtf8("OutFile5"));

        gridLayout_2->addWidget(OutFile5, 10, 1, 1, 2);

        OutFile6 = new QLineEdit(Panel2);
        OutFile6->setObjectName(QString::fromUtf8("OutFile6"));

        gridLayout_2->addWidget(OutFile6, 11, 1, 1, 2);

        OutFile7 = new QLineEdit(Panel2);
        OutFile7->setObjectName(QString::fromUtf8("OutFile7"));

        gridLayout_2->addWidget(OutFile7, 12, 1, 1, 2);

        Format = new QComboBox(Panel2);
        Format->setObjectName(QString::fromUtf8("Format"));

        gridLayout_2->addWidget(Format, 4, 3, 1, 2);

        BtnInFile = new QPushButton(Panel2);
        BtnInFile->setObjectName(QString::fromUtf8("BtnInFile"));
        sizePolicy1.setHeightForWidth(BtnInFile->sizePolicy().hasHeightForWidth());
        BtnInFile->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(BtnInFile, 2, 4, 1, 1);

        BtnInFileView = new QPushButton(Panel2);
        BtnInFileView->setObjectName(QString::fromUtf8("BtnInFileView"));
        BtnInFileView->setIcon(icon);
        BtnInFileView->setFlat(true);

        gridLayout_2->addWidget(BtnInFileView, 2, 3, 1, 1);

        InFile = new QComboBox(Panel2);
        InFile->setObjectName(QString::fromUtf8("InFile"));
        InFile->setEditable(true);

        gridLayout_2->addWidget(InFile, 2, 0, 1, 3);

        BtnKey = new QPushButton(Panel2);
        BtnKey->setObjectName(QString::fromUtf8("BtnKey"));
        sizePolicy1.setHeightForWidth(BtnKey->sizePolicy().hasHeightForWidth());
        BtnKey->setSizePolicy(sizePolicy1);
        BtnKey->setFlat(true);

        gridLayout_2->addWidget(BtnKey, 1, 2, 1, 1);

        LabelInFile = new QLabel(Panel2);
        LabelInFile->setObjectName(QString::fromUtf8("LabelInFile"));

        gridLayout_2->addWidget(LabelInFile, 1, 0, 1, 2);


        verticalLayout->addWidget(Panel2);

        Panel3 = new QWidget(centralwidget);
        Panel3->setObjectName(QString::fromUtf8("Panel3"));
        sizePolicy.setHeightForWidth(Panel3->sizePolicy().hasHeightForWidth());
        Panel3->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(Panel3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Message = new QLabel(Panel3);
        Message->setObjectName(QString::fromUtf8("Message"));

        horizontalLayout_2->addWidget(Message);

        BtnAbout = new QPushButton(Panel3);
        BtnAbout->setObjectName(QString::fromUtf8("BtnAbout"));
        sizePolicy1.setHeightForWidth(BtnAbout->sizePolicy().hasHeightForWidth());
        BtnAbout->setSizePolicy(sizePolicy1);
        BtnAbout->setFlat(true);

        horizontalLayout_2->addWidget(BtnAbout);


        verticalLayout->addWidget(Panel3);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnPlot = new QPushButton(widget);
        BtnPlot->setObjectName(QString::fromUtf8("BtnPlot"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/buttons/chart.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnPlot->setIcon(icon1);

        horizontalLayout->addWidget(BtnPlot);

        BtnPost = new QPushButton(widget);
        BtnPost->setObjectName(QString::fromUtf8("BtnPost"));

        horizontalLayout->addWidget(BtnPost);

        BtnOptions = new QPushButton(widget);
        BtnOptions->setObjectName(QString::fromUtf8("BtnOptions"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/buttons/toolbmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOptions->setIcon(icon2);

        horizontalLayout->addWidget(BtnOptions);

        BtnConvert = new QPushButton(widget);
        BtnConvert->setObjectName(QString::fromUtf8("BtnConvert"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/buttons/start.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnConvert->setIcon(icon3);

        horizontalLayout->addWidget(BtnConvert);

        BtnAbort = new QPushButton(widget);
        BtnAbort->setObjectName(QString::fromUtf8("BtnAbort"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/buttons/stop2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnAbort->setIcon(icon4);

        horizontalLayout->addWidget(BtnAbort);

        BtnExit = new QPushButton(widget);
        BtnExit->setObjectName(QString::fromUtf8("BtnExit"));

        horizontalLayout->addWidget(BtnExit);


        verticalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        TimeUnit->setText(QCoreApplication::translate("MainWindow", "24", nullptr));
        TimeEndF->setText(QCoreApplication::translate("MainWindow", "Time End (GPST)", nullptr));
        TimeInt->setItemText(0, QCoreApplication::translate("MainWindow", "0", nullptr));
        TimeInt->setItemText(1, QCoreApplication::translate("MainWindow", "0.05", nullptr));
        TimeInt->setItemText(2, QCoreApplication::translate("MainWindow", "0.1", nullptr));
        TimeInt->setItemText(3, QCoreApplication::translate("MainWindow", "0.2", nullptr));
        TimeInt->setItemText(4, QCoreApplication::translate("MainWindow", "0.25", nullptr));
        TimeInt->setItemText(5, QCoreApplication::translate("MainWindow", "0.5", nullptr));
        TimeInt->setItemText(6, QCoreApplication::translate("MainWindow", "1", nullptr));
        TimeInt->setItemText(7, QCoreApplication::translate("MainWindow", "5", nullptr));
        TimeInt->setItemText(8, QCoreApplication::translate("MainWindow", "10", nullptr));
        TimeInt->setItemText(9, QCoreApplication::translate("MainWindow", "15", nullptr));
        TimeInt->setItemText(10, QCoreApplication::translate("MainWindow", "30", nullptr));
        TimeInt->setItemText(11, QCoreApplication::translate("MainWindow", "60", nullptr));

        BtnTime1->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        TimeIntF->setText(QCoreApplication::translate("MainWindow", "Interval", nullptr));
        TimeStartF->setText(QCoreApplication::translate("MainWindow", "Time Start (GPST)", nullptr));
        LabelTimeUnit->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        LabelTimeInt->setText(QCoreApplication::translate("MainWindow", "s", nullptr));
        TimeUnitF->setText(QCoreApplication::translate("MainWindow", "Unit", nullptr));
        BtnTime2->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        OutFileEna6->setText(QString());
        OutFileEna2->setText(QString());
        LabelOutDir->setText(QCoreApplication::translate("MainWindow", "Output Directory:", nullptr));
        OutFileEna4->setText(QString());
        LabelFormat->setText(QCoreApplication::translate("MainWindow", "Format", nullptr));
        OutFileEna3->setText(QString());
        BtnOutDir->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        OutFileEna1->setText(QString());
        OutFileEna5->setText(QString());
        LabelOutFile->setText(QCoreApplication::translate("MainWindow", "RINEX OBS/NAV/GNAV/HNAV/QNAV/LNAV and SBS", nullptr));
        OutDirEna->setText(QString());
        OutFileEna7->setText(QString());
        BtnOutFileView1->setText(QString());
        BtnOutFile1->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        BtnOutFile2->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        BtnOutFile3->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        BtnOutFileView2->setText(QString());
        BtnOutFileView3->setText(QString());
        BtnOutFile4->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        BtnOutFile5->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        BtnOutFile6->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        BtnOutFile7->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        BtnOutFileView4->setText(QString());
        BtnOutFileView5->setText(QString());
        BtnOutFileView6->setText(QString());
        BtnOutFileView7->setText(QString());
        BtnInFile->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        BtnInFileView->setText(QString());
        BtnKey->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        LabelInFile->setText(QCoreApplication::translate("MainWindow", "RTCM, RCV RAW or RINEX OBS", nullptr));
        Message->setText(QString());
        BtnAbout->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        BtnPlot->setText(QCoreApplication::translate("MainWindow", "&Plot...", nullptr));
        BtnPost->setText(QCoreApplication::translate("MainWindow", "&Process...", nullptr));
        BtnOptions->setText(QCoreApplication::translate("MainWindow", "&Options...", nullptr));
        BtnConvert->setText(QCoreApplication::translate("MainWindow", "&Convert", nullptr));
        BtnAbort->setText(QCoreApplication::translate("MainWindow", "Abort", nullptr));
        BtnExit->setText(QCoreApplication::translate("MainWindow", "&Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVMAIN_H
