/****************************************************************************
** Meta object code from reading C++ file 'pharmacyproject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pharmacyproject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pharmacyproject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_pharmacyproject_t {
    QByteArrayData data[7];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pharmacyproject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pharmacyproject_t qt_meta_stringdata_pharmacyproject = {
    {
QT_MOC_LITERAL(0, 0, 15), // "pharmacyproject"
QT_MOC_LITERAL(1, 16, 15), // "listItemChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "addMedication"
QT_MOC_LITERAL(4, 47, 16), // "updateMedication"
QT_MOC_LITERAL(5, 64, 16), // "removeMedication"
QT_MOC_LITERAL(6, 81, 16) // "searchMedication"

    },
    "pharmacyproject\0listItemChanged\0\0"
    "addMedication\0updateMedication\0"
    "removeMedication\0searchMedication"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pharmacyproject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pharmacyproject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pharmacyproject *_t = static_cast<pharmacyproject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->listItemChanged(); break;
        case 1: _t->addMedication(); break;
        case 2: _t->updateMedication(); break;
        case 3: _t->removeMedication(); break;
        case 4: _t->searchMedication(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject pharmacyproject::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_pharmacyproject.data,
      qt_meta_data_pharmacyproject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *pharmacyproject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pharmacyproject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_pharmacyproject.stringdata0))
        return static_cast<void*>(const_cast< pharmacyproject*>(this));
    if (!strcmp(_clname, "Observer"))
        return static_cast< Observer*>(const_cast< pharmacyproject*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int pharmacyproject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
