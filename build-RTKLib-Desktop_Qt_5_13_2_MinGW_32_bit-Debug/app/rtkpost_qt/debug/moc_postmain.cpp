/****************************************************************************
** Meta object code from reading C++ file 'postmain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../RTKLIB-rtklib_2.4.3-master/app/rtkpost_qt/postmain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'postmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProcessingThread_t {
    QByteArrayData data[3];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProcessingThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProcessingThread_t qt_meta_stringdata_ProcessingThread = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ProcessingThread"
QT_MOC_LITERAL(1, 17, 4), // "done"
QT_MOC_LITERAL(2, 22, 0) // ""

    },
    "ProcessingThread\0done\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProcessingThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void ProcessingThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProcessingThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->done((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProcessingThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessingThread::done)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ProcessingThread::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_ProcessingThread.data,
    qt_meta_data_ProcessingThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProcessingThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProcessingThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessingThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ProcessingThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ProcessingThread::done(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MainForm_t {
    QByteArrayData data[42];
    char stringdata0[647];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainForm_t qt_meta_stringdata_MainForm = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MainForm"
QT_MOC_LITERAL(1, 9, 12), // "BtnPlotClick"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "BtnViewClick"
QT_MOC_LITERAL(4, 36, 13), // "BtnToKMLClick"
QT_MOC_LITERAL(5, 50, 14), // "BtnOptionClick"
QT_MOC_LITERAL(6, 65, 12), // "BtnExecClick"
QT_MOC_LITERAL(7, 78, 13), // "BtnAbortClick"
QT_MOC_LITERAL(8, 92, 12), // "BtnExitClick"
QT_MOC_LITERAL(9, 105, 13), // "BtnAboutClick"
QT_MOC_LITERAL(10, 119, 13), // "BtnTime1Click"
QT_MOC_LITERAL(11, 133, 13), // "BtnTime2Click"
QT_MOC_LITERAL(12, 147, 18), // "BtnInputFile1Click"
QT_MOC_LITERAL(13, 166, 18), // "BtnInputFile3Click"
QT_MOC_LITERAL(14, 185, 18), // "BtnInputFile2Click"
QT_MOC_LITERAL(15, 204, 18), // "BtnInputFile4Click"
QT_MOC_LITERAL(16, 223, 18), // "BtnInputFile5Click"
QT_MOC_LITERAL(17, 242, 18), // "BtnOutputFileClick"
QT_MOC_LITERAL(18, 261, 18), // "BtnInputView1Click"
QT_MOC_LITERAL(19, 280, 18), // "BtnInputView3Click"
QT_MOC_LITERAL(20, 299, 18), // "BtnInputView2Click"
QT_MOC_LITERAL(21, 318, 18), // "BtnInputView4Click"
QT_MOC_LITERAL(22, 337, 18), // "BtnInputView5Click"
QT_MOC_LITERAL(23, 356, 19), // "BtnOutputView1Click"
QT_MOC_LITERAL(24, 376, 19), // "BtnOutputView2Click"
QT_MOC_LITERAL(25, 396, 18), // "BtnInputPlot1Click"
QT_MOC_LITERAL(26, 415, 18), // "BtnInputPlot2Click"
QT_MOC_LITERAL(27, 434, 15), // "BtnKeywordClick"
QT_MOC_LITERAL(28, 450, 14), // "TimeStartClick"
QT_MOC_LITERAL(29, 465, 12), // "TimeEndClick"
QT_MOC_LITERAL(30, 478, 13), // "TimeIntFClick"
QT_MOC_LITERAL(31, 492, 14), // "TimeUnitFClick"
QT_MOC_LITERAL(32, 507, 16), // "InputFile1Change"
QT_MOC_LITERAL(33, 524, 14), // "OutDirEnaClick"
QT_MOC_LITERAL(34, 539, 14), // "BtnOutDirClick"
QT_MOC_LITERAL(35, 554, 12), // "OutDirChange"
QT_MOC_LITERAL(36, 567, 18), // "BtnInputFile6Click"
QT_MOC_LITERAL(37, 586, 18), // "BtnInputView6Click"
QT_MOC_LITERAL(38, 605, 10), // "FormCreate"
QT_MOC_LITERAL(39, 616, 18), // "ProcessingFinished"
QT_MOC_LITERAL(40, 635, 7), // "ShowMsg"
QT_MOC_LITERAL(41, 643, 3) // "msg"

    },
    "MainForm\0BtnPlotClick\0\0BtnViewClick\0"
    "BtnToKMLClick\0BtnOptionClick\0BtnExecClick\0"
    "BtnAbortClick\0BtnExitClick\0BtnAboutClick\0"
    "BtnTime1Click\0BtnTime2Click\0"
    "BtnInputFile1Click\0BtnInputFile3Click\0"
    "BtnInputFile2Click\0BtnInputFile4Click\0"
    "BtnInputFile5Click\0BtnOutputFileClick\0"
    "BtnInputView1Click\0BtnInputView3Click\0"
    "BtnInputView2Click\0BtnInputView4Click\0"
    "BtnInputView5Click\0BtnOutputView1Click\0"
    "BtnOutputView2Click\0BtnInputPlot1Click\0"
    "BtnInputPlot2Click\0BtnKeywordClick\0"
    "TimeStartClick\0TimeEndClick\0TimeIntFClick\0"
    "TimeUnitFClick\0InputFile1Change\0"
    "OutDirEnaClick\0BtnOutDirClick\0"
    "OutDirChange\0BtnInputFile6Click\0"
    "BtnInputView6Click\0FormCreate\0"
    "ProcessingFinished\0ShowMsg\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  209,    2, 0x0a /* Public */,
       3,    0,  210,    2, 0x0a /* Public */,
       4,    0,  211,    2, 0x0a /* Public */,
       5,    0,  212,    2, 0x0a /* Public */,
       6,    0,  213,    2, 0x0a /* Public */,
       7,    0,  214,    2, 0x0a /* Public */,
       8,    0,  215,    2, 0x0a /* Public */,
       9,    0,  216,    2, 0x0a /* Public */,
      10,    0,  217,    2, 0x0a /* Public */,
      11,    0,  218,    2, 0x0a /* Public */,
      12,    0,  219,    2, 0x0a /* Public */,
      13,    0,  220,    2, 0x0a /* Public */,
      14,    0,  221,    2, 0x0a /* Public */,
      15,    0,  222,    2, 0x0a /* Public */,
      16,    0,  223,    2, 0x0a /* Public */,
      17,    0,  224,    2, 0x0a /* Public */,
      18,    0,  225,    2, 0x0a /* Public */,
      19,    0,  226,    2, 0x0a /* Public */,
      20,    0,  227,    2, 0x0a /* Public */,
      21,    0,  228,    2, 0x0a /* Public */,
      22,    0,  229,    2, 0x0a /* Public */,
      23,    0,  230,    2, 0x0a /* Public */,
      24,    0,  231,    2, 0x0a /* Public */,
      25,    0,  232,    2, 0x0a /* Public */,
      26,    0,  233,    2, 0x0a /* Public */,
      27,    0,  234,    2, 0x0a /* Public */,
      28,    0,  235,    2, 0x0a /* Public */,
      29,    0,  236,    2, 0x0a /* Public */,
      30,    0,  237,    2, 0x0a /* Public */,
      31,    0,  238,    2, 0x0a /* Public */,
      32,    0,  239,    2, 0x0a /* Public */,
      33,    0,  240,    2, 0x0a /* Public */,
      34,    0,  241,    2, 0x0a /* Public */,
      35,    0,  242,    2, 0x0a /* Public */,
      36,    0,  243,    2, 0x0a /* Public */,
      37,    0,  244,    2, 0x0a /* Public */,
      38,    0,  245,    2, 0x0a /* Public */,
      39,    1,  246,    2, 0x0a /* Public */,
      40,    1,  249,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,   41,

       0        // eod
};

void MainForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BtnPlotClick(); break;
        case 1: _t->BtnViewClick(); break;
        case 2: _t->BtnToKMLClick(); break;
        case 3: _t->BtnOptionClick(); break;
        case 4: _t->BtnExecClick(); break;
        case 5: _t->BtnAbortClick(); break;
        case 6: _t->BtnExitClick(); break;
        case 7: _t->BtnAboutClick(); break;
        case 8: _t->BtnTime1Click(); break;
        case 9: _t->BtnTime2Click(); break;
        case 10: _t->BtnInputFile1Click(); break;
        case 11: _t->BtnInputFile3Click(); break;
        case 12: _t->BtnInputFile2Click(); break;
        case 13: _t->BtnInputFile4Click(); break;
        case 14: _t->BtnInputFile5Click(); break;
        case 15: _t->BtnOutputFileClick(); break;
        case 16: _t->BtnInputView1Click(); break;
        case 17: _t->BtnInputView3Click(); break;
        case 18: _t->BtnInputView2Click(); break;
        case 19: _t->BtnInputView4Click(); break;
        case 20: _t->BtnInputView5Click(); break;
        case 21: _t->BtnOutputView1Click(); break;
        case 22: _t->BtnOutputView2Click(); break;
        case 23: _t->BtnInputPlot1Click(); break;
        case 24: _t->BtnInputPlot2Click(); break;
        case 25: _t->BtnKeywordClick(); break;
        case 26: _t->TimeStartClick(); break;
        case 27: _t->TimeEndClick(); break;
        case 28: _t->TimeIntFClick(); break;
        case 29: _t->TimeUnitFClick(); break;
        case 30: _t->InputFile1Change(); break;
        case 31: _t->OutDirEnaClick(); break;
        case 32: _t->BtnOutDirClick(); break;
        case 33: _t->OutDirChange(); break;
        case 34: _t->BtnInputFile6Click(); break;
        case 35: _t->BtnInputView6Click(); break;
        case 36: _t->FormCreate(); break;
        case 37: _t->ProcessingFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->ShowMsg((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainForm::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_MainForm.data,
    qt_meta_data_MainForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainForm.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::MainForm"))
        return static_cast< Ui::MainForm*>(this);
    return QDialog::qt_metacast(_clname);
}

int MainForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 39;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
