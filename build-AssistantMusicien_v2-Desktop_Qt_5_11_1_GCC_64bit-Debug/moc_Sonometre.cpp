/****************************************************************************
** Meta object code from reading C++ file 'Sonometre.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AssistantMusicien_v2/Sonometre.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Sonometre.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sonometre_t {
    QByteArrayData data[9];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sonometre_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sonometre_t qt_meta_stringdata_sonometre = {
    {
QT_MOC_LITERAL(0, 0, 9), // "sonometre"
QT_MOC_LITERAL(1, 10, 11), // "LevelChange"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 28), // "on_pushButtonQuitter_clicked"
QT_MOC_LITERAL(4, 52, 15), // "calculerMoyenne"
QT_MOC_LITERAL(5, 68, 28), // "on_lineEditSeuil_textChanged"
QT_MOC_LITERAL(6, 97, 4), // "arg1"
QT_MOC_LITERAL(7, 102, 37), // "on_horizontalSliderSeuil_valu..."
QT_MOC_LITERAL(8, 140, 5) // "value"

    },
    "sonometre\0LevelChange\0\0"
    "on_pushButtonQuitter_clicked\0"
    "calculerMoyenne\0on_lineEditSeuil_textChanged\0"
    "arg1\0on_horizontalSliderSeuil_valueChanged\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sonometre[] = {

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
       5,    1,   42,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void sonometre::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sonometre *_t = static_cast<sonometre *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LevelChange(); break;
        case 1: _t->on_pushButtonQuitter_clicked(); break;
        case 2: _t->calculerMoyenne(); break;
        case 3: _t->on_lineEditSeuil_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_horizontalSliderSeuil_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sonometre::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_sonometre.data,
      qt_meta_data_sonometre,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sonometre::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sonometre::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sonometre.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int sonometre::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
