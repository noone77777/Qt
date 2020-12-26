/********************************************************************************
** Form generated from reading UI file 'markdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKDLG_H
#define UI_MARKDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MarkDialog
{
public:
    QGridLayout *gridLayout;
    QComboBox *MarkerName;
    QLabel *Label2;
    QLineEdit *MarkerComment;
    QLabel *LabelPosMode;
    QRadioButton *RadioGo;
    QRadioButton *RadioStop;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;
    QCheckBox *ChkMarkerName;
    QLabel *Label1;
    QPushButton *BtnRepDlg;

    void setupUi(QWidget *MarkDialog)
    {
        if (MarkDialog->objectName().isEmpty())
            MarkDialog->setObjectName(QString::fromUtf8("MarkDialog"));
        MarkDialog->resize(415, 207);
        gridLayout = new QGridLayout(MarkDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        MarkerName = new QComboBox(MarkDialog);
        MarkerName->setObjectName(QString::fromUtf8("MarkerName"));
        MarkerName->setEnabled(true);
        MarkerName->setEditable(true);

        gridLayout->addWidget(MarkerName, 1, 0, 1, 5);

        Label2 = new QLabel(MarkDialog);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setEnabled(true);

        gridLayout->addWidget(Label2, 2, 0, 1, 1);

        MarkerComment = new QLineEdit(MarkDialog);
        MarkerComment->setObjectName(QString::fromUtf8("MarkerComment"));
        MarkerComment->setEnabled(true);

        gridLayout->addWidget(MarkerComment, 3, 0, 1, 5);

        LabelPosMode = new QLabel(MarkDialog);
        LabelPosMode->setObjectName(QString::fromUtf8("LabelPosMode"));
        LabelPosMode->setEnabled(true);

        gridLayout->addWidget(LabelPosMode, 4, 0, 1, 2);

        RadioGo = new QRadioButton(MarkDialog);
        RadioGo->setObjectName(QString::fromUtf8("RadioGo"));
        RadioGo->setEnabled(true);
        RadioGo->setLayoutDirection(Qt::LeftToRight);
        RadioGo->setChecked(false);

        gridLayout->addWidget(RadioGo, 4, 2, 1, 2);

        RadioStop = new QRadioButton(MarkDialog);
        RadioStop->setObjectName(QString::fromUtf8("RadioStop"));
        RadioStop->setEnabled(true);
        RadioStop->setLayoutDirection(Qt::LeftToRight);
        RadioStop->setChecked(false);

        gridLayout->addWidget(RadioStop, 4, 4, 1, 1);

        BtnOk = new QPushButton(MarkDialog);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        gridLayout->addWidget(BtnOk, 6, 1, 1, 2);

        BtnCancel = new QPushButton(MarkDialog);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);

        gridLayout->addWidget(BtnCancel, 6, 3, 1, 2);

        ChkMarkerName = new QCheckBox(MarkDialog);
        ChkMarkerName->setObjectName(QString::fromUtf8("ChkMarkerName"));
        ChkMarkerName->setChecked(false);

        gridLayout->addWidget(ChkMarkerName, 0, 0, 1, 1);

        Label1 = new QLabel(MarkDialog);
        Label1->setObjectName(QString::fromUtf8("Label1"));

        gridLayout->addWidget(Label1, 5, 0, 1, 1);

        BtnRepDlg = new QPushButton(MarkDialog);
        BtnRepDlg->setObjectName(QString::fromUtf8("BtnRepDlg"));
        BtnRepDlg->setFlat(true);

        gridLayout->addWidget(BtnRepDlg, 6, 0, 1, 1);


        retranslateUi(MarkDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(MarkDialog);
    } // setupUi

    void retranslateUi(QWidget *MarkDialog)
    {
        MarkDialog->setWindowTitle(QCoreApplication::translate("MarkDialog", "Add Mark", nullptr));
#if QT_CONFIG(tooltip)
        MarkDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MarkerName->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label2->setText(QCoreApplication::translate("MarkDialog", "Comment", nullptr));
#if QT_CONFIG(tooltip)
        MarkerComment->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MarkerComment->setText(QString());
#if QT_CONFIG(tooltip)
        LabelPosMode->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelPosMode->setText(QCoreApplication::translate("MarkDialog", "Switch Positioning Mode", nullptr));
#if QT_CONFIG(tooltip)
        RadioGo->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RadioGo->setText(QCoreApplication::translate("MarkDialog", "&GO (Kinematic)", nullptr));
#if QT_CONFIG(tooltip)
        RadioStop->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RadioStop->setText(QCoreApplication::translate("MarkDialog", "STOP (Stati&c)", nullptr));
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("MarkDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("MarkDialog", "&Cancel", nullptr));
#if QT_CONFIG(tooltip)
        ChkMarkerName->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ChkMarkerName->setText(QCoreApplication::translate("MarkDialog", "Marker Name", nullptr));
        Label1->setText(QCoreApplication::translate("MarkDialog", "%r=001", nullptr));
        BtnRepDlg->setText(QCoreApplication::translate("MarkDialog", "?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MarkDialog: public Ui_MarkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKDLG_H
