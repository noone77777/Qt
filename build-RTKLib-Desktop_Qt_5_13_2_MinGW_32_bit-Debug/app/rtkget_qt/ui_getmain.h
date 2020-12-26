/********************************************************************************
** Form generated from reading UI file 'getmain.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETMAIN_H
#define UI_GETMAIN_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel2;
    QGridLayout *gridLayout_3;
    QCheckBox *SkipExist;
    QLabel *Label8;
    QPushButton *BtnDir;
    QPushButton *BtnStas;
    QWidget *Panel1;
    QGridLayout *gridLayout;
    QPushButton *BtnTime2;
    QTimeEdit *TimeH1;
    QTimeEdit *TimeH2;
    QLabel *Label1;
    QDateEdit *TimeY1;
    QLabel *Label7;
    QComboBox *TimeInt;
    QPushButton *BtnTime1;
    QLineEdit *Number;
    QLabel *Label2;
    QLabel *Label3;
    QDateEdit *TimeY2;
    QCheckBox *LocalDir;
    QComboBox *DataType;
    QListWidget *DataList;
    QComboBox *SubType;
    QLabel *Label6;
    QPushButton *BtnAll;
    QLabel *LabelSta;
    QCheckBox *UnZip;
    QPushButton *BtnKeyword;
    QWidget *Panel4;
    QGridLayout *gridLayout_2;
    QLineEdit *FtpPasswd;
    QCheckBox *HidePasswd;
    QLineEdit *FtpLogin;
    QLabel *Label4;
    QComboBox *Dir;
    QListWidget *StaList;
    QWidget *Msg1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *MsgLabel1;
    QWidget *Msg2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *MsgLabel2;
    QLabel *lbImage;
    QWidget *Msg3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *BtnHelp;
    QLabel *MsgLabel3;
    QPushButton *BtnTray;
    QWidget *Panel3;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnFile;
    QPushButton *BtnLog;
    QPushButton *BtnOpts;
    QPushButton *BtnTest;
    QPushButton *BtnDownload;
    QPushButton *BtnExit;

    void setupUi(QWidget *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QString::fromUtf8("MainForm"));
        MainForm->resize(707, 390);
        verticalLayout = new QVBoxLayout(MainForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Panel2 = new QWidget(MainForm);
        Panel2->setObjectName(QString::fromUtf8("Panel2"));
        Panel2->setEnabled(true);
        Panel2->setLayoutDirection(Qt::LeftToRight);
        gridLayout_3 = new QGridLayout(Panel2);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        SkipExist = new QCheckBox(Panel2);
        SkipExist->setObjectName(QString::fromUtf8("SkipExist"));
        SkipExist->setChecked(false);

        gridLayout_3->addWidget(SkipExist, 3, 3, 1, 1);

        Label8 = new QLabel(Panel2);
        Label8->setObjectName(QString::fromUtf8("Label8"));
        Label8->setEnabled(true);

        gridLayout_3->addWidget(Label8, 0, 3, 1, 1);

        BtnDir = new QPushButton(Panel2);
        BtnDir->setObjectName(QString::fromUtf8("BtnDir"));
        BtnDir->setEnabled(true);
        BtnDir->setFlat(false);

        gridLayout_3->addWidget(BtnDir, 9, 9, 1, 2);

        BtnStas = new QPushButton(Panel2);
        BtnStas->setObjectName(QString::fromUtf8("BtnStas"));
        BtnStas->setEnabled(true);
        BtnStas->setFlat(false);

        gridLayout_3->addWidget(BtnStas, 0, 9, 1, 1);

        Panel1 = new QWidget(Panel2);
        Panel1->setObjectName(QString::fromUtf8("Panel1"));
        Panel1->setEnabled(true);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(Panel1);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        BtnTime2 = new QPushButton(Panel1);
        BtnTime2->setObjectName(QString::fromUtf8("BtnTime2"));
        BtnTime2->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BtnTime2->sizePolicy().hasHeightForWidth());
        BtnTime2->setSizePolicy(sizePolicy);
        BtnTime2->setFlat(true);

        gridLayout->addWidget(BtnTime2, 2, 6, 1, 1);

        TimeH1 = new QTimeEdit(Panel1);
        TimeH1->setObjectName(QString::fromUtf8("TimeH1"));

        gridLayout->addWidget(TimeH1, 1, 4, 1, 1);

        TimeH2 = new QTimeEdit(Panel1);
        TimeH2->setObjectName(QString::fromUtf8("TimeH2"));

        gridLayout->addWidget(TimeH2, 2, 4, 1, 1);

        Label1 = new QLabel(Panel1);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 1, 0, 1, 1);

        TimeY1 = new QDateEdit(Panel1);
        TimeY1->setObjectName(QString::fromUtf8("TimeY1"));

        gridLayout->addWidget(TimeY1, 1, 1, 1, 2);

        Label7 = new QLabel(Panel1);
        Label7->setObjectName(QString::fromUtf8("Label7"));
        Label7->setEnabled(true);

        gridLayout->addWidget(Label7, 3, 0, 1, 1);

        TimeInt = new QComboBox(Panel1);
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

        gridLayout->addWidget(TimeInt, 3, 1, 1, 1);

        BtnTime1 = new QPushButton(Panel1);
        BtnTime1->setObjectName(QString::fromUtf8("BtnTime1"));
        BtnTime1->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnTime1->sizePolicy().hasHeightForWidth());
        BtnTime1->setSizePolicy(sizePolicy);
        BtnTime1->setFlat(true);

        gridLayout->addWidget(BtnTime1, 1, 6, 1, 1);

        Number = new QLineEdit(Panel1);
        Number->setObjectName(QString::fromUtf8("Number"));
        Number->setEnabled(true);

        gridLayout->addWidget(Number, 3, 4, 1, 2);

        Label2 = new QLabel(Panel1);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setEnabled(true);

        gridLayout->addWidget(Label2, 3, 2, 1, 2);

        Label3 = new QLabel(Panel1);
        Label3->setObjectName(QString::fromUtf8("Label3"));
        Label3->setEnabled(true);

        gridLayout->addWidget(Label3, 2, 0, 1, 1);

        TimeY2 = new QDateEdit(Panel1);
        TimeY2->setObjectName(QString::fromUtf8("TimeY2"));

        gridLayout->addWidget(TimeY2, 2, 1, 1, 2);


        gridLayout_3->addWidget(Panel1, 1, 3, 1, 2);

        LocalDir = new QCheckBox(Panel2);
        LocalDir->setObjectName(QString::fromUtf8("LocalDir"));
        LocalDir->setChecked(false);

        gridLayout_3->addWidget(LocalDir, 5, 3, 1, 1);

        DataType = new QComboBox(Panel2);
        DataType->setObjectName(QString::fromUtf8("DataType"));
        DataType->setEnabled(true);

        gridLayout_3->addWidget(DataType, 0, 0, 1, 1);

        DataList = new QListWidget(Panel2);
        DataList->setObjectName(QString::fromUtf8("DataList"));
        DataList->setEnabled(true);
        DataList->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout_3->addWidget(DataList, 1, 0, 9, 3);

        SubType = new QComboBox(Panel2);
        SubType->setObjectName(QString::fromUtf8("SubType"));
        SubType->setEnabled(true);

        gridLayout_3->addWidget(SubType, 0, 1, 1, 2);

        Label6 = new QLabel(Panel2);
        Label6->setObjectName(QString::fromUtf8("Label6"));
        Label6->setEnabled(true);

        gridLayout_3->addWidget(Label6, 10, 0, 1, 2);

        BtnAll = new QPushButton(Panel2);
        BtnAll->setObjectName(QString::fromUtf8("BtnAll"));
        BtnAll->setEnabled(true);
        BtnAll->setFlat(false);

        gridLayout_3->addWidget(BtnAll, 0, 8, 1, 1);

        LabelSta = new QLabel(Panel2);
        LabelSta->setObjectName(QString::fromUtf8("LabelSta"));
        LabelSta->setEnabled(true);

        gridLayout_3->addWidget(LabelSta, 0, 7, 1, 1);

        UnZip = new QCheckBox(Panel2);
        UnZip->setObjectName(QString::fromUtf8("UnZip"));
        UnZip->setChecked(false);

        gridLayout_3->addWidget(UnZip, 4, 3, 1, 1);

        BtnKeyword = new QPushButton(Panel2);
        BtnKeyword->setObjectName(QString::fromUtf8("BtnKeyword"));
        BtnKeyword->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnKeyword->sizePolicy().hasHeightForWidth());
        BtnKeyword->setSizePolicy(sizePolicy);
        BtnKeyword->setFlat(true);

        gridLayout_3->addWidget(BtnKeyword, 5, 4, 1, 1);

        Panel4 = new QWidget(Panel2);
        Panel4->setObjectName(QString::fromUtf8("Panel4"));
        Panel4->setEnabled(true);
        Panel4->setLayoutDirection(Qt::LeftToRight);
        gridLayout_2 = new QGridLayout(Panel4);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        FtpPasswd = new QLineEdit(Panel4);
        FtpPasswd->setObjectName(QString::fromUtf8("FtpPasswd"));
        FtpPasswd->setEnabled(true);

        gridLayout_2->addWidget(FtpPasswd, 1, 1, 1, 1);

        HidePasswd = new QCheckBox(Panel4);
        HidePasswd->setObjectName(QString::fromUtf8("HidePasswd"));
        HidePasswd->setChecked(false);

        gridLayout_2->addWidget(HidePasswd, 0, 1, 1, 1);

        FtpLogin = new QLineEdit(Panel4);
        FtpLogin->setObjectName(QString::fromUtf8("FtpLogin"));
        FtpLogin->setEnabled(true);

        gridLayout_2->addWidget(FtpLogin, 1, 0, 1, 1);

        Label4 = new QLabel(Panel4);
        Label4->setObjectName(QString::fromUtf8("Label4"));
        Label4->setEnabled(true);

        gridLayout_2->addWidget(Label4, 0, 0, 1, 1);


        gridLayout_3->addWidget(Panel4, 2, 3, 1, 2);

        Dir = new QComboBox(Panel2);
        Dir->setObjectName(QString::fromUtf8("Dir"));
        Dir->setEnabled(true);
        Dir->setEditable(true);

        gridLayout_3->addWidget(Dir, 9, 3, 1, 6);

        StaList = new QListWidget(Panel2);
        StaList->setObjectName(QString::fromUtf8("StaList"));
        StaList->setEnabled(true);
        StaList->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout_3->addWidget(StaList, 1, 7, 8, 3);


        verticalLayout->addWidget(Panel2);

        Msg1 = new QWidget(MainForm);
        Msg1->setObjectName(QString::fromUtf8("Msg1"));
        Msg1->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Msg1->sizePolicy().hasHeightForWidth());
        Msg1->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(Msg1);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        MsgLabel1 = new QLabel(Msg1);
        MsgLabel1->setObjectName(QString::fromUtf8("MsgLabel1"));
        MsgLabel1->setEnabled(true);
        sizePolicy1.setHeightForWidth(MsgLabel1->sizePolicy().hasHeightForWidth());
        MsgLabel1->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(MsgLabel1);


        verticalLayout->addWidget(Msg1);

        Msg2 = new QWidget(MainForm);
        Msg2->setObjectName(QString::fromUtf8("Msg2"));
        Msg2->setEnabled(true);
        sizePolicy1.setHeightForWidth(Msg2->sizePolicy().hasHeightForWidth());
        Msg2->setSizePolicy(sizePolicy1);
        Msg2->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_3 = new QHBoxLayout(Msg2);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        MsgLabel2 = new QLabel(Msg2);
        MsgLabel2->setObjectName(QString::fromUtf8("MsgLabel2"));
        MsgLabel2->setEnabled(true);
        sizePolicy1.setHeightForWidth(MsgLabel2->sizePolicy().hasHeightForWidth());
        MsgLabel2->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(MsgLabel2);

        lbImage = new QLabel(Msg2);
        lbImage->setObjectName(QString::fromUtf8("lbImage"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lbImage->sizePolicy().hasHeightForWidth());
        lbImage->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(lbImage);


        verticalLayout->addWidget(Msg2);

        Msg3 = new QWidget(MainForm);
        Msg3->setObjectName(QString::fromUtf8("Msg3"));
        Msg3->setEnabled(true);
        sizePolicy1.setHeightForWidth(Msg3->sizePolicy().hasHeightForWidth());
        Msg3->setSizePolicy(sizePolicy1);
        horizontalLayout_4 = new QHBoxLayout(Msg3);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        BtnHelp = new QPushButton(Msg3);
        BtnHelp->setObjectName(QString::fromUtf8("BtnHelp"));
        BtnHelp->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnHelp->sizePolicy().hasHeightForWidth());
        BtnHelp->setSizePolicy(sizePolicy);
        BtnHelp->setFlat(true);

        horizontalLayout_4->addWidget(BtnHelp);

        MsgLabel3 = new QLabel(Msg3);
        MsgLabel3->setObjectName(QString::fromUtf8("MsgLabel3"));
        MsgLabel3->setEnabled(true);
        sizePolicy1.setHeightForWidth(MsgLabel3->sizePolicy().hasHeightForWidth());
        MsgLabel3->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(MsgLabel3);

        BtnTray = new QPushButton(Msg3);
        BtnTray->setObjectName(QString::fromUtf8("BtnTray"));
        BtnTray->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnTray->sizePolicy().hasHeightForWidth());
        BtnTray->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/ttray.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnTray->setIcon(icon);
        BtnTray->setFlat(true);

        horizontalLayout_4->addWidget(BtnTray);


        verticalLayout->addWidget(Msg3);

        Panel3 = new QWidget(MainForm);
        Panel3->setObjectName(QString::fromUtf8("Panel3"));
        Panel3->setEnabled(true);
        sizePolicy1.setHeightForWidth(Panel3->sizePolicy().hasHeightForWidth());
        Panel3->setSizePolicy(sizePolicy1);
        Panel3->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(Panel3);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnFile = new QPushButton(Panel3);
        BtnFile->setObjectName(QString::fromUtf8("BtnFile"));
        BtnFile->setEnabled(true);
        BtnFile->setFlat(false);

        horizontalLayout->addWidget(BtnFile);

        BtnLog = new QPushButton(Panel3);
        BtnLog->setObjectName(QString::fromUtf8("BtnLog"));
        BtnLog->setEnabled(true);
        BtnLog->setFlat(false);

        horizontalLayout->addWidget(BtnLog);

        BtnOpts = new QPushButton(Panel3);
        BtnOpts->setObjectName(QString::fromUtf8("BtnOpts"));
        BtnOpts->setEnabled(true);
        BtnOpts->setFlat(false);

        horizontalLayout->addWidget(BtnOpts);

        BtnTest = new QPushButton(Panel3);
        BtnTest->setObjectName(QString::fromUtf8("BtnTest"));
        BtnTest->setEnabled(true);
        BtnTest->setFlat(false);

        horizontalLayout->addWidget(BtnTest);

        BtnDownload = new QPushButton(Panel3);
        BtnDownload->setObjectName(QString::fromUtf8("BtnDownload"));
        BtnDownload->setEnabled(true);
        BtnDownload->setFlat(false);

        horizontalLayout->addWidget(BtnDownload);

        BtnExit = new QPushButton(Panel3);
        BtnExit->setObjectName(QString::fromUtf8("BtnExit"));
        BtnExit->setEnabled(true);
        BtnExit->setFlat(false);

        horizontalLayout->addWidget(BtnExit);


        verticalLayout->addWidget(Panel3);


        retranslateUi(MainForm);

        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QWidget *MainForm)
    {
        MainForm->setWindowTitle(QCoreApplication::translate("MainForm", "RTKGET", nullptr));
#if QT_CONFIG(tooltip)
        MainForm->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel2->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        SkipExist->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SkipExist->setText(QCoreApplication::translate("MainForm", " Skip Existing Files", nullptr));
#if QT_CONFIG(tooltip)
        Label8->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label8->setText(QCoreApplication::translate("MainForm", "Time Span (GPST)", nullptr));
#if QT_CONFIG(tooltip)
        BtnDir->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnDir->setText(QCoreApplication::translate("MainForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnStas->setToolTip(QCoreApplication::translate("MainForm", "Load Station List", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnStas->setText(QCoreApplication::translate("MainForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        Panel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel1->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        BtnTime2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnTime2->setText(QCoreApplication::translate("MainForm", "?", nullptr));
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("MainForm", "Start", nullptr));
        TimeY1->setDisplayFormat(QCoreApplication::translate("MainForm", "dd.MM.yyyy", nullptr));
#if QT_CONFIG(tooltip)
        Label7->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label7->setText(QCoreApplication::translate("MainForm", "Intv", nullptr));
        TimeInt->setItemText(0, QCoreApplication::translate("MainForm", "15 min", nullptr));
        TimeInt->setItemText(1, QCoreApplication::translate("MainForm", "30 min", nullptr));
        TimeInt->setItemText(2, QCoreApplication::translate("MainForm", "1 H", nullptr));
        TimeInt->setItemText(3, QCoreApplication::translate("MainForm", "3 H", nullptr));
        TimeInt->setItemText(4, QCoreApplication::translate("MainForm", "6 H", nullptr));
        TimeInt->setItemText(5, QCoreApplication::translate("MainForm", "12 H", nullptr));
        TimeInt->setItemText(6, QCoreApplication::translate("MainForm", "24 H", nullptr));
        TimeInt->setItemText(7, QCoreApplication::translate("MainForm", "7 day", nullptr));

#if QT_CONFIG(tooltip)
        TimeInt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnTime1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnTime1->setText(QCoreApplication::translate("MainForm", "?", nullptr));
#if QT_CONFIG(tooltip)
        Number->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Number->setText(QCoreApplication::translate("MainForm", "0", nullptr));
#if QT_CONFIG(tooltip)
        Label2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label2->setText(QCoreApplication::translate("MainForm", "No.", nullptr));
#if QT_CONFIG(tooltip)
        Label3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label3->setText(QCoreApplication::translate("MainForm", "End", nullptr));
        TimeY2->setDisplayFormat(QCoreApplication::translate("MainForm", "dd.MM.yyyy", nullptr));
#if QT_CONFIG(tooltip)
        LocalDir->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LocalDir->setText(QCoreApplication::translate("MainForm", " Local Directory", nullptr));
#if QT_CONFIG(tooltip)
        DataType->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        DataList->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SubType->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label6->setText(QCoreApplication::translate("MainForm", "Local Directory", nullptr));
#if QT_CONFIG(tooltip)
        BtnAll->setToolTip(QCoreApplication::translate("MainForm", "Select/Clear All", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnAll->setText(QCoreApplication::translate("MainForm", "A", nullptr));
#if QT_CONFIG(tooltip)
        LabelSta->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelSta->setText(QCoreApplication::translate("MainForm", "Stations (0)", nullptr));
#if QT_CONFIG(tooltip)
        UnZip->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        UnZip->setText(QCoreApplication::translate("MainForm", " Unzip/Uncompact Files", nullptr));
#if QT_CONFIG(tooltip)
        BtnKeyword->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnKeyword->setText(QCoreApplication::translate("MainForm", "?", nullptr));
#if QT_CONFIG(tooltip)
        Panel4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel4->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        FtpPasswd->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FtpPasswd->setText(QCoreApplication::translate("MainForm", "user@", nullptr));
#if QT_CONFIG(tooltip)
        HidePasswd->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        HidePasswd->setText(QCoreApplication::translate("MainForm", "Password", nullptr));
#if QT_CONFIG(tooltip)
        FtpLogin->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FtpLogin->setText(QCoreApplication::translate("MainForm", "anonymous", nullptr));
#if QT_CONFIG(tooltip)
        Label4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label4->setText(QCoreApplication::translate("MainForm", "FTP Login", nullptr));
#if QT_CONFIG(tooltip)
        Dir->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        StaList->setToolTip(QCoreApplication::translate("MainForm", "Station List", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Msg1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Msg1->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        MsgLabel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MsgLabel1->setText(QString());
#if QT_CONFIG(tooltip)
        Msg2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Msg2->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        MsgLabel2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MsgLabel2->setText(QString());
        lbImage->setText(QString());
#if QT_CONFIG(tooltip)
        Msg3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Msg3->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        BtnHelp->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnHelp->setText(QCoreApplication::translate("MainForm", "?", nullptr));
#if QT_CONFIG(tooltip)
        MsgLabel3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MsgLabel3->setText(QString());
#if QT_CONFIG(tooltip)
        BtnTray->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnTray->setText(QString());
#if QT_CONFIG(tooltip)
        Panel3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel3->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        BtnFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnFile->setText(QCoreApplication::translate("MainForm", "&Files...", nullptr));
#if QT_CONFIG(tooltip)
        BtnLog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnLog->setText(QCoreApplication::translate("MainForm", "&Log...", nullptr));
#if QT_CONFIG(tooltip)
        BtnOpts->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOpts->setText(QCoreApplication::translate("MainForm", "&Options...", nullptr));
#if QT_CONFIG(tooltip)
        BtnTest->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnTest->setText(QCoreApplication::translate("MainForm", "&Test...", nullptr));
#if QT_CONFIG(tooltip)
        BtnDownload->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnDownload->setText(QCoreApplication::translate("MainForm", "&Download", nullptr));
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

#endif // UI_GETMAIN_H
