/********************************************************************************
** Form generated from reading UI file 'browsmain.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSMAIN_H
#define UI_BROWSMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QAction *MenuOpen;
    QAction *MenuSave;
    QAction *MenuQuit;
    QAction *MenuUpdateCaster;
    QAction *MenuUpdateTable;
    QAction *MenuViewStr;
    QAction *MenuViewCas;
    QAction *MenuViewNet;
    QAction *MenuViewSrc;
    QAction *MenuAbout;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *Panel1;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *BtnList;
    QComboBox *Address;
    QPushButton *BtnUpdate;
    QToolButton *TypeStr;
    QToolButton *TypeCas;
    QToolButton *TypeNet;
    QToolButton *TypeSrc;
    QPushButton *BtnMap;
    QComboBox *FiltFmt;
    QCheckBox *StaMask;
    QPushButton *BtnSta;
    QTableWidget *Table1;
    QPlainTextEdit *Table3;
    QTableWidget *Table2;
    QTableWidget *Table0;
    QWidget *Panel2;
    QHBoxLayout *horizontalLayout_3;
    QWidget *Panel3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Message;
    QMenuBar *menubar;
    QMenu *File1;
    QMenu *Edit1;
    QMenu *View1;
    QMenu *Help1;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QString::fromUtf8("MainForm"));
        MainForm->resize(833, 422);
        MenuOpen = new QAction(MainForm);
        MenuOpen->setObjectName(QString::fromUtf8("MenuOpen"));
        MenuSave = new QAction(MainForm);
        MenuSave->setObjectName(QString::fromUtf8("MenuSave"));
        MenuQuit = new QAction(MainForm);
        MenuQuit->setObjectName(QString::fromUtf8("MenuQuit"));
        MenuUpdateCaster = new QAction(MainForm);
        MenuUpdateCaster->setObjectName(QString::fromUtf8("MenuUpdateCaster"));
        MenuUpdateTable = new QAction(MainForm);
        MenuUpdateTable->setObjectName(QString::fromUtf8("MenuUpdateTable"));
        MenuViewStr = new QAction(MainForm);
        MenuViewStr->setObjectName(QString::fromUtf8("MenuViewStr"));
        MenuViewStr->setCheckable(true);
        MenuViewCas = new QAction(MainForm);
        MenuViewCas->setObjectName(QString::fromUtf8("MenuViewCas"));
        MenuViewCas->setCheckable(true);
        MenuViewNet = new QAction(MainForm);
        MenuViewNet->setObjectName(QString::fromUtf8("MenuViewNet"));
        MenuViewNet->setCheckable(true);
        MenuViewSrc = new QAction(MainForm);
        MenuViewSrc->setObjectName(QString::fromUtf8("MenuViewSrc"));
        MenuViewSrc->setCheckable(true);
        MenuAbout = new QAction(MainForm);
        MenuAbout->setObjectName(QString::fromUtf8("MenuAbout"));
        centralwidget = new QWidget(MainForm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Panel1 = new QWidget(widget);
        Panel1->setObjectName(QString::fromUtf8("Panel1"));
        Panel1->setEnabled(true);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_4 = new QHBoxLayout(Panel1);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        BtnList = new QPushButton(Panel1);
        BtnList->setObjectName(QString::fromUtf8("BtnList"));
        BtnList->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/reload.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnList->setIcon(icon);

        horizontalLayout_4->addWidget(BtnList);

        Address = new QComboBox(Panel1);
        Address->setObjectName(QString::fromUtf8("Address"));
        Address->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Address->sizePolicy().hasHeightForWidth());
        Address->setSizePolicy(sizePolicy);
        Address->setEditable(true);

        horizontalLayout_4->addWidget(Address);

        BtnUpdate = new QPushButton(Panel1);
        BtnUpdate->setObjectName(QString::fromUtf8("BtnUpdate"));
        BtnUpdate->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/buttons/load.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnUpdate->setIcon(icon1);
        BtnUpdate->setFlat(true);

        horizontalLayout_4->addWidget(BtnUpdate);

        TypeStr = new QToolButton(Panel1);
        TypeStr->setObjectName(QString::fromUtf8("TypeStr"));
        TypeStr->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TypeStr->sizePolicy().hasHeightForWidth());
        TypeStr->setSizePolicy(sizePolicy1);
        TypeStr->setCheckable(true);

        horizontalLayout_4->addWidget(TypeStr);

        TypeCas = new QToolButton(Panel1);
        TypeCas->setObjectName(QString::fromUtf8("TypeCas"));
        TypeCas->setEnabled(true);
        sizePolicy1.setHeightForWidth(TypeCas->sizePolicy().hasHeightForWidth());
        TypeCas->setSizePolicy(sizePolicy1);
        TypeCas->setCheckable(true);

        horizontalLayout_4->addWidget(TypeCas);

        TypeNet = new QToolButton(Panel1);
        TypeNet->setObjectName(QString::fromUtf8("TypeNet"));
        TypeNet->setEnabled(true);
        sizePolicy1.setHeightForWidth(TypeNet->sizePolicy().hasHeightForWidth());
        TypeNet->setSizePolicy(sizePolicy1);
        TypeNet->setCheckable(true);

        horizontalLayout_4->addWidget(TypeNet);

        TypeSrc = new QToolButton(Panel1);
        TypeSrc->setObjectName(QString::fromUtf8("TypeSrc"));
        TypeSrc->setEnabled(true);
        sizePolicy1.setHeightForWidth(TypeSrc->sizePolicy().hasHeightForWidth());
        TypeSrc->setSizePolicy(sizePolicy1);
        TypeSrc->setCheckable(true);

        horizontalLayout_4->addWidget(TypeSrc);

        BtnMap = new QPushButton(Panel1);
        BtnMap->setObjectName(QString::fromUtf8("BtnMap"));
        BtnMap->setEnabled(true);

        horizontalLayout_4->addWidget(BtnMap);

        FiltFmt = new QComboBox(Panel1);
        FiltFmt->addItem(QString());
        FiltFmt->addItem(QString());
        FiltFmt->addItem(QString());
        FiltFmt->addItem(QString());
        FiltFmt->setObjectName(QString::fromUtf8("FiltFmt"));
        FiltFmt->setEnabled(true);

        horizontalLayout_4->addWidget(FiltFmt);

        StaMask = new QCheckBox(Panel1);
        StaMask->setObjectName(QString::fromUtf8("StaMask"));
        StaMask->setChecked(false);

        horizontalLayout_4->addWidget(StaMask);

        BtnSta = new QPushButton(Panel1);
        BtnSta->setObjectName(QString::fromUtf8("BtnSta"));
        BtnSta->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnSta->setPalette(palette);
        BtnSta->setFlat(false);

        horizontalLayout_4->addWidget(BtnSta);


        verticalLayout->addWidget(Panel1);

        Table1 = new QTableWidget(widget);
        Table1->setObjectName(QString::fromUtf8("Table1"));

        verticalLayout->addWidget(Table1);

        Table3 = new QPlainTextEdit(widget);
        Table3->setObjectName(QString::fromUtf8("Table3"));
        Table3->setEnabled(true);
        Table3->setFrameShape(QFrame::Panel);
        Table3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(Table3);

        Table2 = new QTableWidget(widget);
        Table2->setObjectName(QString::fromUtf8("Table2"));

        verticalLayout->addWidget(Table2);

        Table0 = new QTableWidget(widget);
        Table0->setObjectName(QString::fromUtf8("Table0"));

        verticalLayout->addWidget(Table0);

        Panel2 = new QWidget(widget);
        Panel2->setObjectName(QString::fromUtf8("Panel2"));
        Panel2->setEnabled(true);
        Panel2->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_3 = new QHBoxLayout(Panel2);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Panel3 = new QWidget(Panel2);
        Panel3->setObjectName(QString::fromUtf8("Panel3"));
        Panel3->setEnabled(true);
        Panel3->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_2 = new QHBoxLayout(Panel3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 0, 0);
        Message = new QLabel(Panel3);
        Message->setObjectName(QString::fromUtf8("Message"));
        Message->setEnabled(true);

        horizontalLayout_2->addWidget(Message);


        horizontalLayout_3->addWidget(Panel3);


        verticalLayout->addWidget(Panel2);


        horizontalLayout->addWidget(widget);

        MainForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainForm);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 833, 21));
        File1 = new QMenu(menubar);
        File1->setObjectName(QString::fromUtf8("File1"));
        File1->setEnabled(true);
        Edit1 = new QMenu(menubar);
        Edit1->setObjectName(QString::fromUtf8("Edit1"));
        Edit1->setEnabled(true);
        View1 = new QMenu(menubar);
        View1->setObjectName(QString::fromUtf8("View1"));
        View1->setEnabled(true);
        Help1 = new QMenu(menubar);
        Help1->setObjectName(QString::fromUtf8("Help1"));
        Help1->setEnabled(true);
        MainForm->setMenuBar(menubar);
        statusbar = new QStatusBar(MainForm);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainForm->setStatusBar(statusbar);

        menubar->addAction(File1->menuAction());
        menubar->addAction(Edit1->menuAction());
        menubar->addAction(View1->menuAction());
        menubar->addAction(Help1->menuAction());
        File1->addAction(MenuOpen);
        File1->addAction(MenuSave);
        File1->addSeparator();
        File1->addAction(MenuQuit);
        Edit1->addAction(MenuUpdateCaster);
        Edit1->addSeparator();
        Edit1->addAction(MenuUpdateTable);
        View1->addAction(MenuViewStr);
        View1->addAction(MenuViewCas);
        View1->addAction(MenuViewNet);
        View1->addSeparator();
        View1->addAction(MenuViewSrc);
        Help1->addAction(MenuAbout);

        retranslateUi(MainForm);

        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QMainWindow *MainForm)
    {
        MainForm->setWindowTitle(QCoreApplication::translate("MainForm", "MainWindow", nullptr));
        MenuOpen->setText(QCoreApplication::translate("MainForm", "&Open Source Table...", nullptr));
        MenuSave->setText(QCoreApplication::translate("MainForm", "&Save Source Table...", nullptr));
        MenuQuit->setText(QCoreApplication::translate("MainForm", "&Quit", nullptr));
        MenuUpdateCaster->setText(QCoreApplication::translate("MainForm", "Update &Caster List", nullptr));
        MenuUpdateTable->setText(QCoreApplication::translate("MainForm", "Update Source &Table", nullptr));
        MenuViewStr->setText(QCoreApplication::translate("MainForm", "&Stream List", nullptr));
        MenuViewCas->setText(QCoreApplication::translate("MainForm", "&Caster List", nullptr));
        MenuViewNet->setText(QCoreApplication::translate("MainForm", "&Network List", nullptr));
        MenuViewSrc->setText(QCoreApplication::translate("MainForm", "S&ource Table", nullptr));
        MenuAbout->setText(QCoreApplication::translate("MainForm", "&About...", nullptr));
#if QT_CONFIG(tooltip)
        Panel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel1->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        BtnList->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnList->setText(QString());
#if QT_CONFIG(tooltip)
        Address->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnUpdate->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnUpdate->setText(QString());
#if QT_CONFIG(tooltip)
        TypeStr->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TypeStr->setText(QCoreApplication::translate("MainForm", "STR", nullptr));
#if QT_CONFIG(tooltip)
        TypeCas->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TypeCas->setText(QCoreApplication::translate("MainForm", "CAS", nullptr));
#if QT_CONFIG(tooltip)
        TypeNet->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TypeNet->setText(QCoreApplication::translate("MainForm", "NET", nullptr));
#if QT_CONFIG(tooltip)
        TypeSrc->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TypeSrc->setText(QCoreApplication::translate("MainForm", "SRC", nullptr));
#if QT_CONFIG(tooltip)
        BtnMap->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnMap->setText(QCoreApplication::translate("MainForm", "MAP", nullptr));
        FiltFmt->setItemText(0, QString());
        FiltFmt->setItemText(1, QCoreApplication::translate("MainForm", "RTCM 3", nullptr));
        FiltFmt->setItemText(2, QCoreApplication::translate("MainForm", "RTCM 2", nullptr));
        FiltFmt->setItemText(3, QCoreApplication::translate("MainForm", "RAW", nullptr));

#if QT_CONFIG(tooltip)
        FiltFmt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        StaMask->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        StaMask->setText(QCoreApplication::translate("MainForm", "STA", nullptr));
#if QT_CONFIG(tooltip)
        BtnSta->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnSta->setText(QCoreApplication::translate("MainForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        Table3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Table3->setPlainText(QString());
#if QT_CONFIG(tooltip)
        Panel2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel2->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Panel3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel3->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Message->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Message->setText(QString());
#if QT_CONFIG(tooltip)
        File1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        File1->setTitle(QCoreApplication::translate("MainForm", "&File", nullptr));
#if QT_CONFIG(tooltip)
        Edit1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Edit1->setTitle(QCoreApplication::translate("MainForm", "&Edit", nullptr));
#if QT_CONFIG(tooltip)
        View1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        View1->setTitle(QCoreApplication::translate("MainForm", "&View", nullptr));
#if QT_CONFIG(tooltip)
        Help1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Help1->setTitle(QCoreApplication::translate("MainForm", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSMAIN_H
