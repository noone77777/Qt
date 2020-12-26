/****************************************************************************
** Meta object code from reading C++ file 'launchmain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../RTKLIB-rtklib_2.4.3-master/app/rtklaunch_qt/launchmain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'launchmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainForm_t {
    QByteArrayData data[13];
    char stringdata0[181];
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
QT_MOC_LITERAL(3, 23, 12), // "BtnConvClick"
QT_MOC_LITERAL(4, 36, 11), // "BtnStrClick"
QT_MOC_LITERAL(5, 48, 12), // "BtnPostClick"
QT_MOC_LITERAL(6, 61, 13), // "BtnNtripClick"
QT_MOC_LITERAL(7, 75, 12), // "BtnNaviClick"
QT_MOC_LITERAL(8, 88, 11), // "BtnGetClick"
QT_MOC_LITERAL(9, 100, 12), // "BtnTrayClick"
QT_MOC_LITERAL(10, 113, 17), // "TrayIconActivated"
QT_MOC_LITERAL(11, 131, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(12, 165, 15) // "MenuExpandClick"

    },
    "MainForm\0BtnPlotClick\0\0BtnConvClick\0"
    "BtnStrClick\0BtnPostClick\0BtnNtripClick\0"
    "BtnNaviClick\0BtnGetClick\0BtnTrayClick\0"
    "TrayIconActivated\0QSystemTrayIcon::ActivationReason\0"
    "MenuExpandClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,
      10,    1,   72,    2, 0x0a /* Public */,
      12,    0,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,

       0        // eod
};

void MainForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BtnPlotClick(); break;
        case 1: _t->BtnConvClick(); break;
        case 2: _t->BtnStrClick(); break;
        case 3: _t->BtnPostClick(); break;
        case 4: _t->BtnNtripClick(); break;
        case 5: _t->BtnNaviClick(); break;
        case 6: _t->BtnGetClick(); break;
        case 7: _t->BtnTrayClick(); break;
        case 8: _t->TrayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 9: _t->MenuExpandClick(); break;
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
    return QDialog::qt_metacast(_clname);
}

int MainForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
