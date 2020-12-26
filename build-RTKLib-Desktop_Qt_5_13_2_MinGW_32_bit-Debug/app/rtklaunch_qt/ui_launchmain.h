/********************************************************************************
** Form generated from reading UI file 'launchmain.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAUNCHMAIN_H
#define UI_LAUNCHMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QGridLayout *gridLayout;
    QPushButton *BtnStr;
    QPushButton *BtnNavi;
    QPushButton *BtnConv;
    QPushButton *BtnPlot;
    QPushButton *BtnPost;
    QPushButton *BtnNtrip;
    QPushButton *BtnGet;
    QPushButton *BtnTray;

    void setupUi(QWidget *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QString::fromUtf8("MainForm"));
        MainForm->resize(196, 39);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainForm->sizePolicy().hasHeightForWidth());
        MainForm->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(MainForm);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        BtnStr = new QPushButton(MainForm);
        BtnStr->setObjectName(QString::fromUtf8("BtnStr"));
        BtnStr->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/rtk6.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnStr->setIcon(icon);
        BtnStr->setFlat(true);

        gridLayout->addWidget(BtnStr, 0, 2, 1, 1);

        BtnNavi = new QPushButton(MainForm);
        BtnNavi->setObjectName(QString::fromUtf8("BtnNavi"));
        BtnNavi->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/rtk5.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnNavi->setIcon(icon1);
        BtnNavi->setFlat(true);

        gridLayout->addWidget(BtnNavi, 0, 5, 1, 1);

        BtnConv = new QPushButton(MainForm);
        BtnConv->setObjectName(QString::fromUtf8("BtnConv"));
        BtnConv->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/rtk3.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnConv->setIcon(icon2);
        BtnConv->setFlat(true);

        gridLayout->addWidget(BtnConv, 0, 1, 1, 1);

        BtnPlot = new QPushButton(MainForm);
        BtnPlot->setObjectName(QString::fromUtf8("BtnPlot"));
        BtnPlot->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/rtk2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnPlot->setIcon(icon3);
        BtnPlot->setFlat(true);

        gridLayout->addWidget(BtnPlot, 0, 0, 1, 1);

        BtnPost = new QPushButton(MainForm);
        BtnPost->setObjectName(QString::fromUtf8("BtnPost"));
        BtnPost->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/rtk1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnPost->setIcon(icon4);
        BtnPost->setFlat(true);

        gridLayout->addWidget(BtnPost, 0, 3, 1, 1);

        BtnNtrip = new QPushButton(MainForm);
        BtnNtrip->setObjectName(QString::fromUtf8("BtnNtrip"));
        BtnNtrip->setEnabled(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/rtk7.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnNtrip->setIcon(icon5);
        BtnNtrip->setFlat(true);

        gridLayout->addWidget(BtnNtrip, 0, 4, 1, 1);

        BtnGet = new QPushButton(MainForm);
        BtnGet->setObjectName(QString::fromUtf8("BtnGet"));
        BtnGet->setEnabled(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/rtk8.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnGet->setIcon(icon6);
        BtnGet->setFlat(true);

        gridLayout->addWidget(BtnGet, 0, 6, 1, 1);

        BtnTray = new QPushButton(MainForm);
        BtnTray->setObjectName(QString::fromUtf8("BtnTray"));
        BtnTray->setEnabled(true);
        BtnTray->setMinimumSize(QSize(15, 15));
        BtnTray->setMaximumSize(QSize(15, 15));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/buttons/sqr.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnTray->setIcon(icon7);
        BtnTray->setFlat(true);

        gridLayout->addWidget(BtnTray, 1, 6, 1, 1);


        retranslateUi(MainForm);

        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QWidget *MainForm)
    {
        MainForm->setWindowTitle(QCoreApplication::translate("MainForm", "RTKLIB", nullptr));
#if QT_CONFIG(tooltip)
        MainForm->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnStr->setToolTip(QCoreApplication::translate("MainForm", "STRSVR", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnStr->setText(QString());
#if QT_CONFIG(tooltip)
        BtnNavi->setToolTip(QCoreApplication::translate("MainForm", "RTKNAVI", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnNavi->setText(QString());
#if QT_CONFIG(tooltip)
        BtnConv->setToolTip(QCoreApplication::translate("MainForm", "RTKCONV", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnConv->setText(QString());
#if QT_CONFIG(tooltip)
        BtnPlot->setToolTip(QCoreApplication::translate("MainForm", "RTKPLOT", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnPlot->setText(QString());
#if QT_CONFIG(tooltip)
        BtnPost->setToolTip(QCoreApplication::translate("MainForm", "RTKPOST", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnPost->setText(QString());
#if QT_CONFIG(tooltip)
        BtnNtrip->setToolTip(QCoreApplication::translate("MainForm", "NTRIP Browser", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnNtrip->setText(QString());
#if QT_CONFIG(tooltip)
        BtnGet->setToolTip(QCoreApplication::translate("MainForm", "RTKGET", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnGet->setText(QString());
#if QT_CONFIG(tooltip)
        BtnTray->setToolTip(QCoreApplication::translate("MainForm", "Task Tray", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnTray->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAUNCHMAIN_H
