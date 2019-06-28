/****************************************************************************
** Meta object code from reading C++ file 'partieoperative.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TestBarquettes/partieoperative.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'partieoperative.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PartieOperative_t {
    QByteArrayData data[7];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartieOperative_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartieOperative_t qt_meta_stringdata_PartieOperative = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PartieOperative"
QT_MOC_LITERAL(1, 16, 13), // "CapteurChange"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "capteurs"
QT_MOC_LITERAL(4, 40, 36), // "on_pushButtonDebutProduction_..."
QT_MOC_LITERAL(5, 77, 38), // "on_pushButtonNouvelleBarquett..."
QT_MOC_LITERAL(6, 116, 18) // "on_timerPo_timeout"

    },
    "PartieOperative\0CapteurChange\0\0capteurs\0"
    "on_pushButtonDebutProduction_clicked\0"
    "on_pushButtonNouvelleBarquette_clicked\0"
    "on_timerPo_timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartieOperative[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PartieOperative::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PartieOperative *_t = static_cast<PartieOperative *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CapteurChange((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 1: _t->on_pushButtonDebutProduction_clicked(); break;
        case 2: _t->on_pushButtonNouvelleBarquette_clicked(); break;
        case 3: _t->on_timerPo_timeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PartieOperative::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartieOperative::CapteurChange)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PartieOperative::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PartieOperative.data,
      qt_meta_data_PartieOperative,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PartieOperative::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartieOperative::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartieOperative.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PartieOperative::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PartieOperative::CapteurChange(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
