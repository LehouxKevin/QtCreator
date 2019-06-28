/****************************************************************************
** Meta object code from reading C++ file 'assistantmusicien.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AssistantMusicien_v2/assistantmusicien.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'assistantmusicien.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssistantMusicien_t {
    QByteArrayData data[8];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssistantMusicien_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssistantMusicien_t qt_meta_stringdata_AssistantMusicien = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AssistantMusicien"
QT_MOC_LITERAL(1, 18, 13), // "AfficherAudio"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "AfficherPartition"
QT_MOC_LITERAL(4, 51, 13), // "AfficherListe"
QT_MOC_LITERAL(5, 65, 17), // "AfficherMetronome"
QT_MOC_LITERAL(6, 83, 14), // "AfficherNiveau"
QT_MOC_LITERAL(7, 98, 18) // "AfficherParametres"

    },
    "AssistantMusicien\0AfficherAudio\0\0"
    "AfficherPartition\0AfficherListe\0"
    "AfficherMetronome\0AfficherNiveau\0"
    "AfficherParametres"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssistantMusicien[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AssistantMusicien::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AssistantMusicien *_t = static_cast<AssistantMusicien *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AfficherAudio(); break;
        case 1: _t->AfficherPartition(); break;
        case 2: _t->AfficherListe(); break;
        case 3: _t->AfficherMetronome(); break;
        case 4: _t->AfficherNiveau(); break;
        case 5: _t->AfficherParametres(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AssistantMusicien::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AssistantMusicien.data,
      qt_meta_data_AssistantMusicien,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AssistantMusicien::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssistantMusicien::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssistantMusicien.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AssistantMusicien::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
