/********************************************************************************
** Form generated from reading UI file 'kmzconv.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KMZCONV_H
#define UI_KMZCONV_H

#include <QtCore/QDate>
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConvDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel1;
    QGridLayout *gridLayout;
    QCheckBox *TimeSpan;
    QComboBox *TrackColor;
    QDateEdit *TimeY2;
    QLabel *Label5;
    QLineEdit *TimeInt;
    QLabel *Label2;
    QLabel *Label1;
    QComboBox *PointColor;
    QLabel *Label7;
    QPushButton *BtnGoogleEarthFile;
    QCheckBox *TimeIntF;
    QLineEdit *Offset2;
    QLineEdit *Offset3;
    QCheckBox *Compress;
    QLabel *Message;
    QLineEdit *OutputFile;
    QLineEdit *Offset1;
    QComboBox *QFlags;
    QComboBox *OutputAlt;
    QTimeEdit *TimeH1;
    QTimeEdit *TimeH2;
    QDateEdit *TimeY1;
    QLabel *Label4;
    QLineEdit *InputFile;
    QLabel *Label3;
    QLineEdit *GoogleEarthFile;
    QComboBox *OutputTime;
    QPushButton *BtnInputFile;
    QCheckBox *AddOffset;
    QLabel *label;
    QRadioButton *FormatKML;
    QRadioButton *FormatGPX;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnView;
    QPushButton *BtnConvert;
    QPushButton *BtnClose;

    void setupUi(QWidget *ConvDialog)
    {
        if (ConvDialog->objectName().isEmpty())
            ConvDialog->setObjectName(QString::fromUtf8("ConvDialog"));
        ConvDialog->resize(587, 413);
        verticalLayout = new QVBoxLayout(ConvDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Panel1 = new QWidget(ConvDialog);
        Panel1->setObjectName(QString::fromUtf8("Panel1"));
        Panel1->setEnabled(true);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(Panel1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        TimeSpan = new QCheckBox(Panel1);
        TimeSpan->setObjectName(QString::fromUtf8("TimeSpan"));
        TimeSpan->setChecked(false);

        gridLayout->addWidget(TimeSpan, 1, 0, 1, 1);

        TrackColor = new QComboBox(Panel1);
        TrackColor->addItem(QString());
        TrackColor->addItem(QString());
        TrackColor->addItem(QString());
        TrackColor->addItem(QString());
        TrackColor->addItem(QString());
        TrackColor->addItem(QString());
        TrackColor->setObjectName(QString::fromUtf8("TrackColor"));
        TrackColor->setEnabled(true);

        gridLayout->addWidget(TrackColor, 3, 2, 1, 2);

        TimeY2 = new QDateEdit(Panel1);
        TimeY2->setObjectName(QString::fromUtf8("TimeY2"));
        TimeY2->setEnabled(true);

        gridLayout->addWidget(TimeY2, 1, 5, 1, 1);

        Label5 = new QLabel(Panel1);
        Label5->setObjectName(QString::fromUtf8("Label5"));
        Label5->setEnabled(true);

        gridLayout->addWidget(Label5, 2, 4, 1, 2);

        TimeInt = new QLineEdit(Panel1);
        TimeInt->setObjectName(QString::fromUtf8("TimeInt"));
        TimeInt->setEnabled(true);

        gridLayout->addWidget(TimeInt, 2, 2, 1, 2);

        Label2 = new QLabel(Panel1);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setEnabled(true);

        gridLayout->addWidget(Label2, 4, 0, 1, 1);

        Label1 = new QLabel(Panel1);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 3, 0, 1, 1);

        PointColor = new QComboBox(Panel1);
        PointColor->addItem(QString());
        PointColor->addItem(QString());
        PointColor->addItem(QString());
        PointColor->addItem(QString());
        PointColor->addItem(QString());
        PointColor->addItem(QString());
        PointColor->setObjectName(QString::fromUtf8("PointColor"));
        PointColor->setEnabled(true);

        gridLayout->addWidget(PointColor, 4, 2, 1, 2);

        Label7 = new QLabel(Panel1);
        Label7->setObjectName(QString::fromUtf8("Label7"));
        Label7->setEnabled(true);

        gridLayout->addWidget(Label7, 6, 0, 1, 3);

        BtnGoogleEarthFile = new QPushButton(Panel1);
        BtnGoogleEarthFile->setObjectName(QString::fromUtf8("BtnGoogleEarthFile"));
        BtnGoogleEarthFile->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnGoogleEarthFile->setPalette(palette);
        BtnGoogleEarthFile->setFlat(false);

        gridLayout->addWidget(BtnGoogleEarthFile, 9, 8, 1, 1);

        TimeIntF = new QCheckBox(Panel1);
        TimeIntF->setObjectName(QString::fromUtf8("TimeIntF"));
        TimeIntF->setChecked(false);

        gridLayout->addWidget(TimeIntF, 2, 0, 1, 2);

        Offset2 = new QLineEdit(Panel1);
        Offset2->setObjectName(QString::fromUtf8("Offset2"));
        Offset2->setEnabled(true);

        gridLayout->addWidget(Offset2, 5, 5, 1, 2);

        Offset3 = new QLineEdit(Panel1);
        Offset3->setObjectName(QString::fromUtf8("Offset3"));
        Offset3->setEnabled(true);

        gridLayout->addWidget(Offset3, 5, 7, 1, 2);

        Compress = new QCheckBox(Panel1);
        Compress->setObjectName(QString::fromUtf8("Compress"));
        Compress->setChecked(false);

        gridLayout->addWidget(Compress, 6, 7, 1, 1);

        Message = new QLabel(Panel1);
        Message->setObjectName(QString::fromUtf8("Message"));
        Message->setEnabled(true);
        Message->setLayoutDirection(Qt::LeftToRight);
        Message->setFrameShape(QFrame::Box);
        Message->setFrameShadow(QFrame::Sunken);
        Message->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Message, 10, 0, 1, 9);

        OutputFile = new QLineEdit(Panel1);
        OutputFile->setObjectName(QString::fromUtf8("OutputFile"));
        OutputFile->setEnabled(true);

        gridLayout->addWidget(OutputFile, 8, 0, 1, 9);

        Offset1 = new QLineEdit(Panel1);
        Offset1->setObjectName(QString::fromUtf8("Offset1"));
        Offset1->setEnabled(true);

        gridLayout->addWidget(Offset1, 5, 3, 1, 2);

        QFlags = new QComboBox(Panel1);
        QFlags->addItem(QString());
        QFlags->addItem(QString());
        QFlags->addItem(QString());
        QFlags->addItem(QString());
        QFlags->addItem(QString());
        QFlags->addItem(QString());
        QFlags->addItem(QString());
        QFlags->setObjectName(QString::fromUtf8("QFlags"));
        QFlags->setEnabled(true);

        gridLayout->addWidget(QFlags, 2, 6, 1, 3);

        OutputAlt = new QComboBox(Panel1);
        OutputAlt->addItem(QString());
        OutputAlt->addItem(QString());
        OutputAlt->addItem(QString());
        OutputAlt->setObjectName(QString::fromUtf8("OutputAlt"));
        OutputAlt->setEnabled(true);

        gridLayout->addWidget(OutputAlt, 3, 6, 1, 3);

        TimeH1 = new QTimeEdit(Panel1);
        TimeH1->setObjectName(QString::fromUtf8("TimeH1"));
        TimeH1->setEnabled(true);

        gridLayout->addWidget(TimeH1, 1, 3, 1, 2);

        TimeH2 = new QTimeEdit(Panel1);
        TimeH2->setObjectName(QString::fromUtf8("TimeH2"));
        TimeH2->setEnabled(true);

        gridLayout->addWidget(TimeH2, 1, 7, 1, 2);

        TimeY1 = new QDateEdit(Panel1);
        TimeY1->setObjectName(QString::fromUtf8("TimeY1"));
        TimeY1->setEnabled(true);
        TimeY1->setDate(QDate(2000, 1, 2));

        gridLayout->addWidget(TimeY1, 1, 1, 1, 2);

        Label4 = new QLabel(Panel1);
        Label4->setObjectName(QString::fromUtf8("Label4"));
        Label4->setEnabled(true);

        gridLayout->addWidget(Label4, 4, 4, 1, 2);

        InputFile = new QLineEdit(Panel1);
        InputFile->setObjectName(QString::fromUtf8("InputFile"));
        InputFile->setEnabled(true);

        gridLayout->addWidget(InputFile, 7, 0, 1, 9);

        Label3 = new QLabel(Panel1);
        Label3->setObjectName(QString::fromUtf8("Label3"));
        Label3->setEnabled(true);

        gridLayout->addWidget(Label3, 3, 4, 1, 2);

        GoogleEarthFile = new QLineEdit(Panel1);
        GoogleEarthFile->setObjectName(QString::fromUtf8("GoogleEarthFile"));
        GoogleEarthFile->setEnabled(true);

        gridLayout->addWidget(GoogleEarthFile, 9, 0, 1, 8);

        OutputTime = new QComboBox(Panel1);
        OutputTime->addItem(QString());
        OutputTime->addItem(QString());
        OutputTime->addItem(QString());
        OutputTime->addItem(QString());
        OutputTime->setObjectName(QString::fromUtf8("OutputTime"));
        OutputTime->setEnabled(true);

        gridLayout->addWidget(OutputTime, 4, 6, 1, 3);

        BtnInputFile = new QPushButton(Panel1);
        BtnInputFile->setObjectName(QString::fromUtf8("BtnInputFile"));
        BtnInputFile->setEnabled(true);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnInputFile->setPalette(palette1);
        BtnInputFile->setFlat(false);

        gridLayout->addWidget(BtnInputFile, 6, 8, 1, 1);

        AddOffset = new QCheckBox(Panel1);
        AddOffset->setObjectName(QString::fromUtf8("AddOffset"));
        AddOffset->setChecked(false);

        gridLayout->addWidget(AddOffset, 5, 0, 1, 3);

        label = new QLabel(Panel1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        FormatKML = new QRadioButton(Panel1);
        FormatKML->setObjectName(QString::fromUtf8("FormatKML"));

        gridLayout->addWidget(FormatKML, 0, 2, 1, 2);

        FormatGPX = new QRadioButton(Panel1);
        FormatGPX->setObjectName(QString::fromUtf8("FormatGPX"));

        gridLayout->addWidget(FormatGPX, 0, 5, 1, 2);


        verticalLayout->addWidget(Panel1);

        widget = new QWidget(ConvDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnView = new QPushButton(widget);
        BtnView->setObjectName(QString::fromUtf8("BtnView"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/doc.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnView->setIcon(icon);

        horizontalLayout->addWidget(BtnView);

        BtnConvert = new QPushButton(widget);
        BtnConvert->setObjectName(QString::fromUtf8("BtnConvert"));
        BtnConvert->setEnabled(true);
        BtnConvert->setAutoDefault(true);

        horizontalLayout->addWidget(BtnConvert);

        BtnClose = new QPushButton(widget);
        BtnClose->setObjectName(QString::fromUtf8("BtnClose"));
        BtnClose->setEnabled(true);

        horizontalLayout->addWidget(BtnClose);


        verticalLayout->addWidget(widget);


        retranslateUi(ConvDialog);

        BtnConvert->setDefault(true);


        QMetaObject::connectSlotsByName(ConvDialog);
    } // setupUi

    void retranslateUi(QWidget *ConvDialog)
    {
        ConvDialog->setWindowTitle(QCoreApplication::translate("ConvDialog", "KML/GPX Converter", nullptr));
#if QT_CONFIG(tooltip)
        ConvDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel1->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        TimeSpan->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeSpan->setText(QCoreApplication::translate("ConvDialog", "Time Span", nullptr));
        TrackColor->setItemText(0, QCoreApplication::translate("ConvDialog", "OFF", nullptr));
        TrackColor->setItemText(1, QCoreApplication::translate("ConvDialog", "White", nullptr));
        TrackColor->setItemText(2, QCoreApplication::translate("ConvDialog", "Green", nullptr));
        TrackColor->setItemText(3, QCoreApplication::translate("ConvDialog", "Orange", nullptr));
        TrackColor->setItemText(4, QCoreApplication::translate("ConvDialog", "Red", nullptr));
        TrackColor->setItemText(5, QCoreApplication::translate("ConvDialog", "Yellow", nullptr));

#if QT_CONFIG(tooltip)
        TrackColor->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TimeY2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label5->setText(QCoreApplication::translate("ConvDialog", "Q-Flags", nullptr));
#if QT_CONFIG(tooltip)
        TimeInt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeInt->setText(QCoreApplication::translate("ConvDialog", "1", nullptr));
#if QT_CONFIG(tooltip)
        Label2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label2->setText(QCoreApplication::translate("ConvDialog", "Output Waypoint", nullptr));
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("ConvDialog", "Output Track", nullptr));
        PointColor->setItemText(0, QCoreApplication::translate("ConvDialog", "OFF", nullptr));
        PointColor->setItemText(1, QCoreApplication::translate("ConvDialog", "White", nullptr));
        PointColor->setItemText(2, QCoreApplication::translate("ConvDialog", "Green", nullptr));
        PointColor->setItemText(3, QCoreApplication::translate("ConvDialog", "Orange", nullptr));
        PointColor->setItemText(4, QCoreApplication::translate("ConvDialog", "Red", nullptr));
        PointColor->setItemText(5, QCoreApplication::translate("ConvDialog", "By Q-Flag", nullptr));

#if QT_CONFIG(tooltip)
        PointColor->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label7->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label7->setText(QCoreApplication::translate("ConvDialog", "Input/Output/GE Exe File", nullptr));
#if QT_CONFIG(tooltip)
        BtnGoogleEarthFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnGoogleEarthFile->setText(QCoreApplication::translate("ConvDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        TimeIntF->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeIntF->setText(QCoreApplication::translate("ConvDialog", "Interval (s)", nullptr));
#if QT_CONFIG(tooltip)
        Offset2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Offset2->setText(QCoreApplication::translate("ConvDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        Offset3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Offset3->setText(QCoreApplication::translate("ConvDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        Compress->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Compress->setText(QCoreApplication::translate("ConvDialog", ".kmz", nullptr));
#if QT_CONFIG(tooltip)
        Message->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Message->setText(QString());
#if QT_CONFIG(tooltip)
        OutputFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        OutputFile->setText(QString());
#if QT_CONFIG(tooltip)
        Offset1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Offset1->setText(QCoreApplication::translate("ConvDialog", "0", nullptr));
        QFlags->setItemText(0, QCoreApplication::translate("ConvDialog", "ALL", nullptr));
        QFlags->setItemText(1, QCoreApplication::translate("ConvDialog", "Q=1", nullptr));
        QFlags->setItemText(2, QCoreApplication::translate("ConvDialog", "Q=2", nullptr));
        QFlags->setItemText(3, QCoreApplication::translate("ConvDialog", "Q=3", nullptr));
        QFlags->setItemText(4, QCoreApplication::translate("ConvDialog", "Q=4", nullptr));
        QFlags->setItemText(5, QCoreApplication::translate("ConvDialog", "Q=5", nullptr));
        QFlags->setItemText(6, QCoreApplication::translate("ConvDialog", "Q=6", nullptr));

#if QT_CONFIG(tooltip)
        QFlags->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        OutputAlt->setItemText(0, QCoreApplication::translate("ConvDialog", "OFF", nullptr));
        OutputAlt->setItemText(1, QCoreApplication::translate("ConvDialog", "Ellipsoidal", nullptr));
        OutputAlt->setItemText(2, QCoreApplication::translate("ConvDialog", "Geodetic", nullptr));

#if QT_CONFIG(tooltip)
        OutputAlt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TimeH1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TimeH2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TimeY1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label4->setText(QCoreApplication::translate("ConvDialog", "Output Time", nullptr));
#if QT_CONFIG(tooltip)
        InputFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        InputFile->setText(QString());
#if QT_CONFIG(tooltip)
        Label3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label3->setText(QCoreApplication::translate("ConvDialog", "Output Altitude", nullptr));
#if QT_CONFIG(tooltip)
        GoogleEarthFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        GoogleEarthFile->setText(QString());
        OutputTime->setItemText(0, QCoreApplication::translate("ConvDialog", "OFF", nullptr));
        OutputTime->setItemText(1, QCoreApplication::translate("ConvDialog", "GPST", nullptr));
        OutputTime->setItemText(2, QCoreApplication::translate("ConvDialog", "UTC", nullptr));
        OutputTime->setItemText(3, QCoreApplication::translate("ConvDialog", "JST", nullptr));

#if QT_CONFIG(tooltip)
        OutputTime->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnInputFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnInputFile->setText(QCoreApplication::translate("ConvDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        AddOffset->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        AddOffset->setText(QCoreApplication::translate("ConvDialog", "Add Offset E/N/U (m)", nullptr));
        label->setText(QCoreApplication::translate("ConvDialog", "Output Format", nullptr));
        FormatKML->setText(QCoreApplication::translate("ConvDialog", "Google Earth &KML", nullptr));
        FormatGPX->setText(QCoreApplication::translate("ConvDialog", "GP&X", nullptr));
        BtnView->setText(QCoreApplication::translate("ConvDialog", "&View....", nullptr));
#if QT_CONFIG(tooltip)
        BtnConvert->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnConvert->setText(QCoreApplication::translate("ConvDialog", "Con&vert", nullptr));
#if QT_CONFIG(tooltip)
        BtnClose->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnClose->setText(QCoreApplication::translate("ConvDialog", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConvDialog: public Ui_ConvDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KMZCONV_H
