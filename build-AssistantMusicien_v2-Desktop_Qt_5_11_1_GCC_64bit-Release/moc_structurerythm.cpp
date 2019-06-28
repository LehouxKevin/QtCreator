/****************************************************************************
** Meta object code from reading C++ file 'structurerythm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Documents/PROJET_ASSISTANT_INSTALLER/AssistantMusicien_v2/structurerythm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'structurerythm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StructureRythm_t {
    QByteArrayData data[11];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StructureRythm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StructureRythm_t qt_meta_stringdata_StructureRythm = {
    {
QT_MOC_LITERAL(0, 0, 14), // "StructureRythm"
QT_MOC_LITERAL(1, 15, 6), // "Valide"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 26), // "on_pushButtonRonde_clicked"
QT_MOC_LITERAL(4, 50, 25), // "on_pushButtonNoir_clicked"
QT_MOC_LITERAL(5, 76, 26), // "on_pushButtonNoirP_clicked"
QT_MOC_LITERAL(6, 103, 28), // "on_pushButtonBlanche_clicked"
QT_MOC_LITERAL(7, 132, 29), // "on_pushButtonBLancheP_clicked"
QT_MOC_LITERAL(8, 162, 28), // "on_pushButtonValider_clicked"
QT_MOC_LITERAL(9, 191, 26), // "on_pushButtonReset_clicked"
QT_MOC_LITERAL(10, 218, 27) // "on_pushButtonCroche_clicked"

    },
    "StructureRythm\0Valide\0\0"
    "on_pushButtonRonde_clicked\0"
    "on_pushButtonNoir_clicked\0"
    "on_pushButtonNoirP_clicked\0"
    "on_pushButtonBlanche_clicked\0"
    "on_pushButtonBLancheP_clicked\0"
    "on_pushButtonValider_clicked\0"
    "on_pushButtonReset_clicked\0"
    "on_pushButtonCroche_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StructureRythm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
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

void StructureRythm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StructureRythm *_t = static_cast<StructureRythm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Valide(); break;
        case 1: _t->on_pushButtonRonde_clicked(); break;
        case 2: _t->on_pushButtonNoir_clicked(); break;
        case 3: _t->on_pushButtonNoirP_clicked(); break;
        case 4: _t->on_pushButtonBlanche_clicked(); break;
        case 5: _t->on_pushButtonBLancheP_clicked(); break;
        case 6: _t->on_pushButtonValider_clicked(); break;
        case 7: _t->on_pushButtonReset_clicked(); break;
        case 8: _t->on_pushButtonCroche_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StructureRythm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StructureRythm::Valide)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StructureRythm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_StructureRythm.data,
      qt_meta_data_StructureRythm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StructureRythm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StructureRythm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StructureRythm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int StructureRythm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void StructureRythm::Valide()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
