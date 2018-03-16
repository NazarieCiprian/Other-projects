/****************************************************************************
** Meta object code from reading C++ file 'quizv2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../quizv2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quizv2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_quizv2_t {
    QByteArrayData data[9];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_quizv2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_quizv2_t qt_meta_stringdata_quizv2 = {
    {
QT_MOC_LITERAL(0, 0, 6), // "quizv2"
QT_MOC_LITERAL(1, 7, 11), // "addQuestion"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 13), // "showEasyQuest"
QT_MOC_LITERAL(4, 34, 15), // "showMediumQuest"
QT_MOC_LITERAL(5, 50, 13), // "showHardQuest"
QT_MOC_LITERAL(6, 64, 15), // "listItemChanged"
QT_MOC_LITERAL(7, 80, 14), // "submitQuestion"
QT_MOC_LITERAL(8, 95, 10) // "finishQuiz"

    },
    "quizv2\0addQuestion\0\0showEasyQuest\0"
    "showMediumQuest\0showHardQuest\0"
    "listItemChanged\0submitQuestion\0"
    "finishQuiz"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_quizv2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void quizv2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        quizv2 *_t = static_cast<quizv2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addQuestion(); break;
        case 1: _t->showEasyQuest(); break;
        case 2: _t->showMediumQuest(); break;
        case 3: _t->showHardQuest(); break;
        case 4: _t->listItemChanged(); break;
        case 5: _t->submitQuestion(); break;
        case 6: _t->finishQuiz(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject quizv2::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_quizv2.data,
      qt_meta_data_quizv2,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *quizv2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *quizv2::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_quizv2.stringdata0))
        return static_cast<void*>(const_cast< quizv2*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int quizv2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
