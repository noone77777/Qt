/****************************************************************************
** Meta object code from reading C++ file 'fileseldlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../RTKLIB-rtklib_2.4.3-master/app/rtkplot_qt/fileseldlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileseldlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileSelDialog_t {
    QByteArrayData data[9];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileSelDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileSelDialog_t qt_meta_stringdata_FileSelDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FileSelDialog"
QT_MOC_LITERAL(1, 14, 13), // "FileListClick"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 41, 12), // "DirSelChange"
QT_MOC_LITERAL(5, 54, 14), // "DirSelSelected"
QT_MOC_LITERAL(6, 69, 15), // "DriveSelChanged"
QT_MOC_LITERAL(7, 85, 11), // "FilterClick"
QT_MOC_LITERAL(8, 97, 14) // "BtnDirSelClick"

    },
    "FileSelDialog\0FileListClick\0\0QModelIndex\0"
    "DirSelChange\0DirSelSelected\0DriveSelChanged\0"
    "FilterClick\0BtnDirSelClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileSelDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       5,    1,   50,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FileSelDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileSelDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FileListClick((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 1: _t->DirSelChange((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: _t->DirSelSelected((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: _t->DriveSelChanged(); break;
        case 4: _t->FilterClick(); break;
        case 5: _t->BtnDirSelClick(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileSelDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_FileSelDialog.data,
    qt_meta_data_FileSelDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileSelDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileSelDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileSelDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FileSelDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
