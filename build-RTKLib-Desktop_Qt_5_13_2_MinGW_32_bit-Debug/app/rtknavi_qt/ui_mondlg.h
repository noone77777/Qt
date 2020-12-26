/********************************************************************************
** Form generated from reading UI file 'mondlg.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONDLG_H
#define UI_MONDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MonitorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel1;
    QHBoxLayout *horizontalLayout;
    QComboBox *Type;
    QComboBox *SelObs;
    QComboBox *SelIon;
    QComboBox *SelSat;
    QPushButton *BtnClose;
    QSpacerItem *horizontalSpacer;
    QComboBox *SelStr;
    QPushButton *BtnClear;
    QPushButton *BtnPause;
    QPushButton *BtnDown;
    QComboBox *SelEph;
    QComboBox *SelFmt;
    QLabel *Label;
    QTableWidget *Console;

    void setupUi(QWidget *MonitorDialog)
    {
        if (MonitorDialog->objectName().isEmpty())
            MonitorDialog->setObjectName(QString::fromUtf8("MonitorDialog"));
        MonitorDialog->resize(950, 502);
        verticalLayout = new QVBoxLayout(MonitorDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Panel1 = new QWidget(MonitorDialog);
        Panel1->setObjectName(QString::fromUtf8("Panel1"));
        Panel1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Panel1->sizePolicy().hasHeightForWidth());
        Panel1->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(Panel1);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Type = new QComboBox(Panel1);
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->addItem(QString());
        Type->setObjectName(QString::fromUtf8("Type"));
        Type->setEnabled(true);

        horizontalLayout->addWidget(Type);

        SelObs = new QComboBox(Panel1);
        SelObs->addItem(QString());
        SelObs->addItem(QString());
        SelObs->setObjectName(QString::fromUtf8("SelObs"));
        SelObs->setEnabled(true);

        horizontalLayout->addWidget(SelObs);

        SelIon = new QComboBox(Panel1);
        SelIon->addItem(QString());
        SelIon->addItem(QString());
        SelIon->addItem(QString());
        SelIon->addItem(QString());
        SelIon->addItem(QString());
        SelIon->addItem(QString());
        SelIon->addItem(QString());
        SelIon->addItem(QString());
        SelIon->setObjectName(QString::fromUtf8("SelIon"));
        SelIon->setEnabled(true);

        horizontalLayout->addWidget(SelIon);

        SelSat = new QComboBox(Panel1);
        SelSat->addItem(QString());
        SelSat->addItem(QString());
        SelSat->setObjectName(QString::fromUtf8("SelSat"));
        SelSat->setEnabled(true);

        horizontalLayout->addWidget(SelSat);

        BtnClose = new QPushButton(Panel1);
        BtnClose->setObjectName(QString::fromUtf8("BtnClose"));
        BtnClose->setEnabled(true);
        BtnClose->setAutoDefault(true);

        horizontalLayout->addWidget(BtnClose);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        SelStr = new QComboBox(Panel1);
        SelStr->addItem(QString());
        SelStr->addItem(QString());
        SelStr->addItem(QString());
        SelStr->addItem(QString());
        SelStr->setObjectName(QString::fromUtf8("SelStr"));
        SelStr->setEnabled(true);

        horizontalLayout->addWidget(SelStr);

        BtnClear = new QPushButton(Panel1);
        BtnClear->setObjectName(QString::fromUtf8("BtnClear"));
        BtnClear->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/del.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnClear->setIcon(icon);
        BtnClear->setFlat(true);

        horizontalLayout->addWidget(BtnClear);

        BtnPause = new QPushButton(Panel1);
        BtnPause->setObjectName(QString::fromUtf8("BtnPause"));
        BtnPause->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/buttons/pause.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnPause->setIcon(icon1);
        BtnPause->setCheckable(true);
        BtnPause->setFlat(true);

        horizontalLayout->addWidget(BtnPause);

        BtnDown = new QPushButton(Panel1);
        BtnDown->setObjectName(QString::fromUtf8("BtnDown"));
        BtnDown->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/buttons/fitd.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnDown->setIcon(icon2);
        BtnDown->setFlat(true);

        horizontalLayout->addWidget(BtnDown);

        SelEph = new QComboBox(Panel1);
        SelEph->addItem(QString());
        SelEph->addItem(QString());
        SelEph->setObjectName(QString::fromUtf8("SelEph"));
        SelEph->setEnabled(true);

        horizontalLayout->addWidget(SelEph);

        SelFmt = new QComboBox(Panel1);
        SelFmt->addItem(QString());
        SelFmt->addItem(QString());
        SelFmt->setObjectName(QString::fromUtf8("SelFmt"));
        SelFmt->setEnabled(true);

        horizontalLayout->addWidget(SelFmt);

        Label = new QLabel(Panel1);
        Label->setObjectName(QString::fromUtf8("Label"));
        Label->setEnabled(true);

        horizontalLayout->addWidget(Label);


        verticalLayout->addWidget(Panel1);

        Console = new QTableWidget(MonitorDialog);
        Console->setObjectName(QString::fromUtf8("Console"));

        verticalLayout->addWidget(Console);


        retranslateUi(MonitorDialog);

        BtnClose->setDefault(true);


        QMetaObject::connectSlotsByName(MonitorDialog);
    } // setupUi

    void retranslateUi(QWidget *MonitorDialog)
    {
        MonitorDialog->setWindowTitle(QCoreApplication::translate("MonitorDialog", "RTK Monitor", nullptr));
#if QT_CONFIG(tooltip)
        MonitorDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel1->setProperty("text", QVariant(QString()));
        Type->setItemText(0, QCoreApplication::translate("MonitorDialog", "RTK", nullptr));
        Type->setItemText(1, QCoreApplication::translate("MonitorDialog", "Obs Data", nullptr));
        Type->setItemText(2, QCoreApplication::translate("MonitorDialog", "Nav GPS", nullptr));
        Type->setItemText(3, QCoreApplication::translate("MonitorDialog", "Nav GLONASS", nullptr));
        Type->setItemText(4, QCoreApplication::translate("MonitorDialog", "Nav Galileo", nullptr));
        Type->setItemText(5, QCoreApplication::translate("MonitorDialog", "Nav QZSS", nullptr));
        Type->setItemText(6, QCoreApplication::translate("MonitorDialog", "Nav BeiDou", nullptr));
        Type->setItemText(7, QCoreApplication::translate("MonitorDialog", "Nav GEO", nullptr));
        Type->setItemText(8, QCoreApplication::translate("MonitorDialog", "Time/Iono", nullptr));
        Type->setItemText(9, QCoreApplication::translate("MonitorDialog", "Streams", nullptr));
        Type->setItemText(10, QCoreApplication::translate("MonitorDialog", "Sat GPS", nullptr));
        Type->setItemText(11, QCoreApplication::translate("MonitorDialog", "Sat GLONASS", nullptr));
        Type->setItemText(12, QCoreApplication::translate("MonitorDialog", "Sat Galileo", nullptr));
        Type->setItemText(13, QCoreApplication::translate("MonitorDialog", "Sat QZSS", nullptr));
        Type->setItemText(14, QCoreApplication::translate("MonitorDialog", "Sat BeiDou", nullptr));
        Type->setItemText(15, QCoreApplication::translate("MonitorDialog", "Sat GEO", nullptr));
        Type->setItemText(16, QCoreApplication::translate("MonitorDialog", "States", nullptr));
        Type->setItemText(17, QCoreApplication::translate("MonitorDialog", "Covariance", nullptr));
        Type->setItemText(18, QCoreApplication::translate("MonitorDialog", "SBAS Msgs", nullptr));
        Type->setItemText(19, QCoreApplication::translate("MonitorDialog", "SBAS Long", nullptr));
        Type->setItemText(20, QCoreApplication::translate("MonitorDialog", "SBAS Iono", nullptr));
        Type->setItemText(21, QCoreApplication::translate("MonitorDialog", "SBAS Fast", nullptr));
        Type->setItemText(22, QCoreApplication::translate("MonitorDialog", "RTCM Msgs", nullptr));
        Type->setItemText(23, QCoreApplication::translate("MonitorDialog", "RTCM DGPS", nullptr));
        Type->setItemText(24, QCoreApplication::translate("MonitorDialog", "RTCM SSR", nullptr));
        Type->setItemText(25, QCoreApplication::translate("MonitorDialog", "LEX Msgs", nullptr));
        Type->setItemText(26, QCoreApplication::translate("MonitorDialog", "LEX Eph/Clock", nullptr));
        Type->setItemText(27, QCoreApplication::translate("MonitorDialog", "LEX Iono", nullptr));
        Type->setItemText(28, QCoreApplication::translate("MonitorDialog", "Iono Correction", nullptr));
        Type->setItemText(29, QCoreApplication::translate("MonitorDialog", "1 Rover", nullptr));
        Type->setItemText(30, QCoreApplication::translate("MonitorDialog", "2 Base Station", nullptr));
        Type->setItemText(31, QCoreApplication::translate("MonitorDialog", "3 Correction", nullptr));
        Type->setItemText(32, QCoreApplication::translate("MonitorDialog", "4 Solution1", nullptr));
        Type->setItemText(33, QCoreApplication::translate("MonitorDialog", "5 Solution2", nullptr));
        Type->setItemText(34, QCoreApplication::translate("MonitorDialog", "Error/Warning", nullptr));

#if QT_CONFIG(tooltip)
        Type->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SelObs->setItemText(0, QCoreApplication::translate("MonitorDialog", "Normal", nullptr));
        SelObs->setItemText(1, QCoreApplication::translate("MonitorDialog", "Extended", nullptr));

#if QT_CONFIG(tooltip)
        SelObs->setToolTip(QCoreApplication::translate("MonitorDialog", "Stream", nullptr));
#endif // QT_CONFIG(tooltip)
        SelIon->setItemText(0, QCoreApplication::translate("MonitorDialog", "OFF", nullptr));
        SelIon->setItemText(1, QCoreApplication::translate("MonitorDialog", "Broadcast", nullptr));
        SelIon->setItemText(2, QCoreApplication::translate("MonitorDialog", "SBAS", nullptr));
        SelIon->setItemText(3, QCoreApplication::translate("MonitorDialog", "Dual-Freq", nullptr));
        SelIon->setItemText(4, QCoreApplication::translate("MonitorDialog", "Estimate STEC", nullptr));
        SelIon->setItemText(5, QCoreApplication::translate("MonitorDialog", "IONEX TEC", nullptr));
        SelIon->setItemText(6, QCoreApplication::translate("MonitorDialog", "QZS Broadcast", nullptr));
        SelIon->setItemText(7, QCoreApplication::translate("MonitorDialog", "QZS LEX", nullptr));

#if QT_CONFIG(tooltip)
        SelIon->setToolTip(QCoreApplication::translate("MonitorDialog", "Stream", nullptr));
#endif // QT_CONFIG(tooltip)
        SelSat->setItemText(0, QCoreApplication::translate("MonitorDialog", "All", nullptr));
        SelSat->setItemText(1, QCoreApplication::translate("MonitorDialog", "Only OK", nullptr));

#if QT_CONFIG(tooltip)
        SelSat->setToolTip(QCoreApplication::translate("MonitorDialog", "Stream", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnClose->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnClose->setText(QCoreApplication::translate("MonitorDialog", "&Close", nullptr));
        SelStr->setItemText(0, QCoreApplication::translate("MonitorDialog", "1 Rover", nullptr));
        SelStr->setItemText(1, QCoreApplication::translate("MonitorDialog", "2 Base Station", nullptr));
        SelStr->setItemText(2, QCoreApplication::translate("MonitorDialog", "3 Correction", nullptr));
        SelStr->setItemText(3, QCoreApplication::translate("MonitorDialog", "0 Combined", nullptr));

#if QT_CONFIG(tooltip)
        SelStr->setToolTip(QCoreApplication::translate("MonitorDialog", "Stream", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnClear->setToolTip(QCoreApplication::translate("MonitorDialog", "Clear", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnClear->setText(QString());
#if QT_CONFIG(tooltip)
        BtnPause->setToolTip(QCoreApplication::translate("MonitorDialog", "Pause", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnPause->setText(QString());
#if QT_CONFIG(tooltip)
        BtnDown->setToolTip(QCoreApplication::translate("MonitorDialog", "Scroll Down", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnDown->setText(QString());
        SelEph->setItemText(0, QCoreApplication::translate("MonitorDialog", "Current", nullptr));
        SelEph->setItemText(1, QCoreApplication::translate("MonitorDialog", "Previous", nullptr));

#if QT_CONFIG(tooltip)
        SelEph->setToolTip(QCoreApplication::translate("MonitorDialog", "Stream", nullptr));
#endif // QT_CONFIG(tooltip)
        SelFmt->setItemText(0, QCoreApplication::translate("MonitorDialog", "HEX", nullptr));
        SelFmt->setItemText(1, QCoreApplication::translate("MonitorDialog", "ASCII", nullptr));

#if QT_CONFIG(tooltip)
        SelFmt->setToolTip(QCoreApplication::translate("MonitorDialog", "Stream", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MonitorDialog: public Ui_MonitorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONDLG_H
