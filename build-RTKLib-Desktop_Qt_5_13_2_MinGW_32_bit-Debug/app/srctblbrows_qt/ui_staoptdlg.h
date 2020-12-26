/********************************************************************************
** Form generated from reading UI file 'staoptdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAOPTDLG_H
#define UI_STAOPTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StaListDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *StaList;
    QWidget *Panel1;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnLoad;
    QPushButton *BtnSave;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *StaListDialog)
    {
        if (StaListDialog->objectName().isEmpty())
            StaListDialog->setObjectName(QString::fromUtf8("StaListDialog"));
        StaListDialog->resize(214, 300);
        verticalLayout = new QVBoxLayout(StaListDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, 9, -1, -1);
        StaList = new QListWidget(StaListDialog);
        StaList->setObjectName(QString::fromUtf8("StaList"));

        verticalLayout->addWidget(StaList);

        Panel1 = new QWidget(StaListDialog);
        Panel1->setObjectName(QString::fromUtf8("Panel1"));
        Panel1->setEnabled(true);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(Panel1);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnLoad = new QPushButton(Panel1);
        BtnLoad->setObjectName(QString::fromUtf8("BtnLoad"));
        BtnLoad->setEnabled(true);

        horizontalLayout->addWidget(BtnLoad);

        BtnSave = new QPushButton(Panel1);
        BtnSave->setObjectName(QString::fromUtf8("BtnSave"));
        BtnSave->setEnabled(true);

        horizontalLayout->addWidget(BtnSave);

        BtnOk = new QPushButton(Panel1);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        horizontalLayout->addWidget(BtnOk);

        BtnCancel = new QPushButton(Panel1);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);

        horizontalLayout->addWidget(BtnCancel);


        verticalLayout->addWidget(Panel1);


        retranslateUi(StaListDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(StaListDialog);
    } // setupUi

    void retranslateUi(QWidget *StaListDialog)
    {
        StaListDialog->setWindowTitle(QCoreApplication::translate("StaListDialog", "Stations", nullptr));
#if QT_CONFIG(tooltip)
        StaListDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel1->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        BtnLoad->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnLoad->setText(QCoreApplication::translate("StaListDialog", "Load...", nullptr));
#if QT_CONFIG(tooltip)
        BtnSave->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnSave->setText(QCoreApplication::translate("StaListDialog", "&Save...", nullptr));
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("StaListDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("StaListDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StaListDialog: public Ui_StaListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAOPTDLG_H
