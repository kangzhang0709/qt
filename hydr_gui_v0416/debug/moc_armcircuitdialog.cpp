/****************************************************************************
** Meta object code from reading C++ file 'armcircuitdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../armcircuitdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'armcircuitdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ArmCircuitDialog_t {
    QByteArrayData data[18];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ArmCircuitDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ArmCircuitDialog_t qt_meta_stringdata_ArmCircuitDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ArmCircuitDialog"
QT_MOC_LITERAL(1, 17, 9), // "loopMovie"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "switchPage"
QT_MOC_LITERAL(4, 39, 5), // "index"
QT_MOC_LITERAL(5, 45, 15), // "getRealtimeData"
QT_MOC_LITERAL(6, 61, 16), // "onRunStopChanged"
QT_MOC_LITERAL(7, 78, 3), // "run"
QT_MOC_LITERAL(8, 82, 10), // "updatePlot"
QT_MOC_LITERAL(9, 93, 12), // "updatePeriod"
QT_MOC_LITERAL(10, 106, 9), // "startSave"
QT_MOC_LITERAL(11, 116, 11), // "openHistory"
QT_MOC_LITERAL(12, 128, 10), // "evalHealth"
QT_MOC_LITERAL(13, 139, 14), // "displaySensor1"
QT_MOC_LITERAL(14, 154, 14), // "displaySensor2"
QT_MOC_LITERAL(15, 169, 14), // "displaySensor3"
QT_MOC_LITERAL(16, 184, 14), // "displaySensor4"
QT_MOC_LITERAL(17, 199, 14) // "displaySensor5"

    },
    "ArmCircuitDialog\0loopMovie\0\0switchPage\0"
    "index\0getRealtimeData\0onRunStopChanged\0"
    "run\0updatePlot\0updatePeriod\0startSave\0"
    "openHistory\0evalHealth\0displaySensor1\0"
    "displaySensor2\0displaySensor3\0"
    "displaySensor4\0displaySensor5"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ArmCircuitDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    1,   85,    2, 0x08 /* Private */,
       5,    1,   88,    2, 0x08 /* Private */,
       6,    1,   91,    2, 0x08 /* Private */,
       8,    0,   94,    2, 0x08 /* Private */,
       9,    1,   95,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    1,  101,    2, 0x08 /* Private */,
      14,    1,  104,    2, 0x08 /* Private */,
      15,    1,  107,    2, 0x08 /* Private */,
      16,    1,  110,    2, 0x08 /* Private */,
      17,    1,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void ArmCircuitDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ArmCircuitDialog *_t = static_cast<ArmCircuitDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loopMovie(); break;
        case 1: _t->switchPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->getRealtimeData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->onRunStopChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updatePlot(); break;
        case 5: _t->updatePeriod((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->startSave(); break;
        case 7: _t->openHistory(); break;
        case 8: _t->evalHealth(); break;
        case 9: _t->displaySensor1((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->displaySensor2((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->displaySensor3((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->displaySensor4((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->displaySensor5((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ArmCircuitDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ArmCircuitDialog.data,
      qt_meta_data_ArmCircuitDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ArmCircuitDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArmCircuitDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ArmCircuitDialog.stringdata0))
        return static_cast<void*>(const_cast< ArmCircuitDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ArmCircuitDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
