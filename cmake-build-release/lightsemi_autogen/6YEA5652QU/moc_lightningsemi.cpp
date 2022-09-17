/****************************************************************************
** Meta object code from reading C++ file 'lightningsemi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../include/lightningsemi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lightningsemi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Ui_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Ui_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Ui_MainWindow_t qt_meta_stringdata_Ui_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Ui_MainWindow"
QT_MOC_LITERAL(1, 14, 8), // "OpenPort"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 9), // "WritePort"
QT_MOC_LITERAL(4, 34, 3), // "msg"
QT_MOC_LITERAL(5, 38, 30), // "comboBox_5_currentIndexChanged"
QT_MOC_LITERAL(6, 69, 1), // "i"
QT_MOC_LITERAL(7, 71, 8), // "InitPort"
QT_MOC_LITERAL(8, 80, 11), // "SendCommand"
QT_MOC_LITERAL(9, 92, 14), // "Single_Rx_Test"
QT_MOC_LITERAL(10, 107, 12), // "Read_Rx_Info"
QT_MOC_LITERAL(11, 120, 13), // "Multiple_Test"
QT_MOC_LITERAL(12, 134, 18), // "Stop_Multiple_Test"
QT_MOC_LITERAL(13, 153, 8), // "ShowData"
QT_MOC_LITERAL(14, 162, 12), // "ClearBrowser"
QT_MOC_LITERAL(15, 175, 13), // "IsPortNotOpen"
QT_MOC_LITERAL(16, 189, 10), // "IsPortOpen"
QT_MOC_LITERAL(17, 200, 7), // "Tx_Test"
QT_MOC_LITERAL(18, 208, 11), // "Ble_Tx_Test"
QT_MOC_LITERAL(19, 220, 16), // "Stop_Ble_Tx_Test"
QT_MOC_LITERAL(20, 237, 11), // "Ble_Rx_Test"
QT_MOC_LITERAL(21, 249, 16) // "Stop_Ble_Rx_Test"

    },
    "Ui_MainWindow\0OpenPort\0\0WritePort\0msg\0"
    "comboBox_5_currentIndexChanged\0i\0"
    "InitPort\0SendCommand\0Single_Rx_Test\0"
    "Read_Rx_Info\0Multiple_Test\0"
    "Stop_Multiple_Test\0ShowData\0ClearBrowser\0"
    "IsPortNotOpen\0IsPortOpen\0Tx_Test\0"
    "Ble_Tx_Test\0Stop_Ble_Tx_Test\0Ble_Rx_Test\0"
    "Stop_Ble_Rx_Test"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ui_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    1,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  108,    2, 0x0a /* Public */,
       7,    0,  111,    2, 0x0a /* Public */,
       8,    0,  112,    2, 0x0a /* Public */,
       9,    0,  113,    2, 0x0a /* Public */,
      10,    0,  114,    2, 0x0a /* Public */,
      11,    0,  115,    2, 0x0a /* Public */,
      12,    0,  116,    2, 0x0a /* Public */,
      13,    1,  117,    2, 0x0a /* Public */,
      14,    0,  120,    2, 0x0a /* Public */,
      15,    0,  121,    2, 0x0a /* Public */,
      16,    0,  122,    2, 0x0a /* Public */,
      17,    0,  123,    2, 0x0a /* Public */,
      18,    0,  124,    2, 0x0a /* Public */,
      19,    0,  125,    2, 0x0a /* Public */,
      20,    0,  126,    2, 0x0a /* Public */,
      21,    0,  127,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    4,
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

void Ui_MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Ui_MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OpenPort(); break;
        case 1: _t->WritePort((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->comboBox_5_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->InitPort(); break;
        case 4: _t->SendCommand(); break;
        case 5: _t->Single_Rx_Test(); break;
        case 6: _t->Read_Rx_Info(); break;
        case 7: _t->Multiple_Test(); break;
        case 8: _t->Stop_Multiple_Test(); break;
        case 9: _t->ShowData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 10: _t->ClearBrowser(); break;
        case 11: _t->IsPortNotOpen(); break;
        case 12: _t->IsPortOpen(); break;
        case 13: _t->Tx_Test(); break;
        case 14: _t->Ble_Tx_Test(); break;
        case 15: _t->Stop_Ble_Tx_Test(); break;
        case 16: _t->Ble_Rx_Test(); break;
        case 17: _t->Stop_Ble_Rx_Test(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Ui_MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ui_MainWindow::OpenPort)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Ui_MainWindow::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ui_MainWindow::WritePort)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Ui_MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Ui_MainWindow.data,
    qt_meta_data_Ui_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Ui_MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ui_MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Ui_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Ui_MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Ui_MainWindow::OpenPort()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Ui_MainWindow::WritePort(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
