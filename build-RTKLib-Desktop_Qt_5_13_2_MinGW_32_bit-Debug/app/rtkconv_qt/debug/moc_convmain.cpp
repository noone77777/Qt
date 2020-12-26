/****************************************************************************
** Meta object code from reading C++ file 'convmain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../RTKLIB-rtklib_2.4.3-master/app/rtkconv_qt/convmain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'convmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConversionThread_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConversionThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConversionThread_t qt_meta_stringdata_ConversionThread = {
    {
QT_MOC_LITERAL(0, 0, 16) // "ConversionThread"

    },
    "ConversionThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConversionThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ConversionThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ConversionThread::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_ConversionThread.data,
    qt_meta_data_ConversionThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConversionThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConversionThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConversionThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ConversionThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[39];
    char stringdata0[607];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "FormCreate"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "BtnPlotClick"
QT_MOC_LITERAL(4, 36, 15), // "BtnConvertClick"
QT_MOC_LITERAL(5, 52, 15), // "BtnOptionsClick"
QT_MOC_LITERAL(6, 68, 12), // "BtnExitClick"
QT_MOC_LITERAL(7, 81, 13), // "BtnAboutClick"
QT_MOC_LITERAL(8, 95, 13), // "BtnTime1Click"
QT_MOC_LITERAL(9, 109, 13), // "BtnTime2Click"
QT_MOC_LITERAL(10, 123, 14), // "BtnInFileClick"
QT_MOC_LITERAL(11, 138, 16), // "BtnOutFile1Click"
QT_MOC_LITERAL(12, 155, 16), // "BtnOutFile2Click"
QT_MOC_LITERAL(13, 172, 16), // "BtnOutFile3Click"
QT_MOC_LITERAL(14, 189, 16), // "BtnOutFile4Click"
QT_MOC_LITERAL(15, 206, 20), // "BtnOutFileView1Click"
QT_MOC_LITERAL(16, 227, 20), // "BtnOutFileView2Click"
QT_MOC_LITERAL(17, 248, 20), // "BtnOutFileView3Click"
QT_MOC_LITERAL(18, 269, 20), // "BtnOutFileView4Click"
QT_MOC_LITERAL(19, 290, 13), // "BtnAbortClick"
QT_MOC_LITERAL(20, 304, 15), // "TimeStartFClick"
QT_MOC_LITERAL(21, 320, 13), // "TimeEndFClick"
QT_MOC_LITERAL(22, 334, 13), // "TimeIntFClick"
QT_MOC_LITERAL(23, 348, 14), // "OutDirEnaClick"
QT_MOC_LITERAL(24, 363, 12), // "InFileChange"
QT_MOC_LITERAL(25, 376, 20), // "BtnOutFileView5Click"
QT_MOC_LITERAL(26, 397, 16), // "BtnOutFile5Click"
QT_MOC_LITERAL(27, 414, 12), // "FormatChange"
QT_MOC_LITERAL(28, 427, 20), // "BtnOutFileView6Click"
QT_MOC_LITERAL(29, 448, 16), // "BtnOutFile6Click"
QT_MOC_LITERAL(30, 465, 12), // "OutDirChange"
QT_MOC_LITERAL(31, 478, 14), // "BtnOutDirClick"
QT_MOC_LITERAL(32, 493, 11), // "BtnKeyClick"
QT_MOC_LITERAL(33, 505, 12), // "BtnPostClick"
QT_MOC_LITERAL(34, 518, 16), // "BtnOutFile7Click"
QT_MOC_LITERAL(35, 535, 20), // "BtnOutFileView7Click"
QT_MOC_LITERAL(36, 556, 18), // "BtnInFileViewClick"
QT_MOC_LITERAL(37, 575, 18), // "ConversionFinished"
QT_MOC_LITERAL(38, 594, 12) // "UpdateEnable"

    },
    "MainWindow\0FormCreate\0\0BtnPlotClick\0"
    "BtnConvertClick\0BtnOptionsClick\0"
    "BtnExitClick\0BtnAboutClick\0BtnTime1Click\0"
    "BtnTime2Click\0BtnInFileClick\0"
    "BtnOutFile1Click\0BtnOutFile2Click\0"
    "BtnOutFile3Click\0BtnOutFile4Click\0"
    "BtnOutFileView1Click\0BtnOutFileView2Click\0"
    "BtnOutFileView3Click\0BtnOutFileView4Click\0"
    "BtnAbortClick\0TimeStartFClick\0"
    "TimeEndFClick\0TimeIntFClick\0OutDirEnaClick\0"
    "InFileChange\0BtnOutFileView5Click\0"
    "BtnOutFile5Click\0FormatChange\0"
    "BtnOutFileView6Click\0BtnOutFile6Click\0"
    "OutDirChange\0BtnOutDirClick\0BtnKeyClick\0"
    "BtnPostClick\0BtnOutFile7Click\0"
    "BtnOutFileView7Click\0BtnInFileViewClick\0"
    "ConversionFinished\0UpdateEnable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  199,    2, 0x0a /* Public */,
       3,    0,  200,    2, 0x0a /* Public */,
       4,    0,  201,    2, 0x0a /* Public */,
       5,    0,  202,    2, 0x0a /* Public */,
       6,    0,  203,    2, 0x0a /* Public */,
       7,    0,  204,    2, 0x0a /* Public */,
       8,    0,  205,    2, 0x0a /* Public */,
       9,    0,  206,    2, 0x0a /* Public */,
      10,    0,  207,    2, 0x0a /* Public */,
      11,    0,  208,    2, 0x0a /* Public */,
      12,    0,  209,    2, 0x0a /* Public */,
      13,    0,  210,    2, 0x0a /* Public */,
      14,    0,  211,    2, 0x0a /* Public */,
      15,    0,  212,    2, 0x0a /* Public */,
      16,    0,  213,    2, 0x0a /* Public */,
      17,    0,  214,    2, 0x0a /* Public */,
      18,    0,  215,    2, 0x0a /* Public */,
      19,    0,  216,    2, 0x0a /* Public */,
      20,    0,  217,    2, 0x0a /* Public */,
      21,    0,  218,    2, 0x0a /* Public */,
      22,    0,  219,    2, 0x0a /* Public */,
      23,    0,  220,    2, 0x0a /* Public */,
      24,    0,  221,    2, 0x0a /* Public */,
      25,    0,  222,    2, 0x0a /* Public */,
      26,    0,  223,    2, 0x0a /* Public */,
      27,    0,  224,    2, 0x0a /* Public */,
      28,    0,  225,    2, 0x0a /* Public */,
      29,    0,  226,    2, 0x0a /* Public */,
      30,    0,  227,    2, 0x0a /* Public */,
      31,    0,  228,    2, 0x0a /* Public */,
      32,    0,  229,    2, 0x0a /* Public */,
      33,    0,  230,    2, 0x0a /* Public */,
      34,    0,  231,    2, 0x0a /* Public */,
      35,    0,  232,    2, 0x0a /* Public */,
      36,    0,  233,    2, 0x0a /* Public */,
      37,    0,  234,    2, 0x0a /* Public */,
      38,    0,  235,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FormCreate(); break;
        case 1: _t->BtnPlotClick(); break;
        case 2: _t->BtnConvertClick(); break;
        case 3: _t->BtnOptionsClick(); break;
        case 4: _t->BtnExitClick(); break;
        case 5: _t->BtnAboutClick(); break;
        case 6: _t->BtnTime1Click(); break;
        case 7: _t->BtnTime2Click(); break;
        case 8: _t->BtnInFileClick(); break;
        case 9: _t->BtnOutFile1Click(); break;
        case 10: _t->BtnOutFile2Click(); break;
        case 11: _t->BtnOutFile3Click(); break;
        case 12: _t->BtnOutFile4Click(); break;
        case 13: _t->BtnOutFileView1Click(); break;
        case 14: _t->BtnOutFileView2Click(); break;
        case 15: _t->BtnOutFileView3Click(); break;
        case 16: _t->BtnOutFileView4Click(); break;
        case 17: _t->BtnAbortClick(); break;
        case 18: _t->TimeStartFClick(); break;
        case 19: _t->TimeEndFClick(); break;
        case 20: _t->TimeIntFClick(); break;
        case 21: _t->OutDirEnaClick(); break;
        case 22: _t->InFileChange(); break;
        case 23: _t->BtnOutFileView5Click(); break;
        case 24: _t->BtnOutFile5Click(); break;
        case 25: _t->FormatChange(); break;
        case 26: _t->BtnOutFileView6Click(); break;
        case 27: _t->BtnOutFile6Click(); break;
        case 28: _t->OutDirChange(); break;
        case 29: _t->BtnOutDirClick(); break;
        case 30: _t->BtnKeyClick(); break;
        case 31: _t->BtnPostClick(); break;
        case 32: _t->BtnOutFile7Click(); break;
        case 33: _t->BtnOutFileView7Click(); break;
        case 34: _t->BtnInFileViewClick(); break;
        case 35: _t->ConversionFinished(); break;
        case 36: _t->UpdateEnable(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 37;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
