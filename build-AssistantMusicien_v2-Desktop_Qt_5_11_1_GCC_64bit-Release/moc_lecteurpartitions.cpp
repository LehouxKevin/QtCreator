/****************************************************************************
** Meta object code from reading C++ file 'lecteurpartitions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Documents/PROJET_ASSISTANT_INSTALLER/AssistantMusicien_v2/lecteurpartitions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lecteurpartitions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LecteurPartitions_t {
    QByteArrayData data[12];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LecteurPartitions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LecteurPartitions_t qt_meta_stringdata_LecteurPartitions = {
    {
QT_MOC_LITERAL(0, 0, 17), // "LecteurPartitions"
QT_MOC_LITERAL(1, 18, 11), // "resizeEvent"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "QResizeEvent*"
QT_MOC_LITERAL(4, 45, 5), // "event"
QT_MOC_LITERAL(5, 51, 36), // "onQPushButtonListePartitions_..."
QT_MOC_LITERAL(6, 88, 28), // "on_pushButtonCharger_clicked"
QT_MOC_LITERAL(7, 117, 29), // "on_pushButtonPagePrec_clicked"
QT_MOC_LITERAL(8, 147, 29), // "on_pushButtonPageSuiv_clicked"
QT_MOC_LITERAL(9, 177, 29), // "on_pushButtonZoomPlus_clicked"
QT_MOC_LITERAL(10, 207, 40), // "on_pushButtonPartitionPrecede..."
QT_MOC_LITERAL(11, 248, 38) // "on_pushButtonPartitionSuivant..."

    },
    "LecteurPartitions\0resizeEvent\0\0"
    "QResizeEvent*\0event\0"
    "onQPushButtonListePartitions_clicked\0"
    "on_pushButtonCharger_clicked\0"
    "on_pushButtonPagePrec_clicked\0"
    "on_pushButtonPageSuiv_clicked\0"
    "on_pushButtonZoomPlus_clicked\0"
    "on_pushButtonPartitionPrecedente_clicked\0"
    "on_pushButtonPartitionSuivante_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LecteurPartitions[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,
      10,    0,   62,    2, 0x08 /* Private */,
      11,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LecteurPartitions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LecteurPartitions *_t = static_cast<LecteurPartitions *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 1: _t->onQPushButtonListePartitions_clicked(); break;
        case 2: _t->on_pushButtonCharger_clicked(); break;
        case 3: _t->on_pushButtonPagePrec_clicked(); break;
        case 4: _t->on_pushButtonPageSuiv_clicked(); break;
        case 5: _t->on_pushButtonZoomPlus_clicked(); break;
        case 6: _t->on_pushButtonPartitionPrecedente_clicked(); break;
        case 7: _t->on_pushButtonPartitionSuivante_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LecteurPartitions::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LecteurPartitions.data,
      qt_meta_data_LecteurPartitions,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LecteurPartitions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LecteurPartitions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LecteurPartitions.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LecteurPartitions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
