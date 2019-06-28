/****************************************************************************
** Meta object code from reading C++ file 'serveurcrawler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ServeurCrawler/serveurcrawler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serveurcrawler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ServeurCrawler_t {
    QByteArrayData data[9];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServeurCrawler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServeurCrawler_t qt_meta_stringdata_ServeurCrawler = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ServeurCrawler"
QT_MOC_LITERAL(1, 15, 37), // "on_pushButtonLancementServeur..."
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 26), // "onQTcpServer_newConnection"
QT_MOC_LITERAL(4, 81, 22), // "onQTcpSocket_readyRead"
QT_MOC_LITERAL(5, 104, 25), // "onQTcpSocket_disconnected"
QT_MOC_LITERAL(6, 130, 18), // "onQTcpSocket_error"
QT_MOC_LITERAL(7, 149, 23), // "QTcpSocket::SocketError"
QT_MOC_LITERAL(8, 173, 11) // "socketError"

    },
    "ServeurCrawler\0on_pushButtonLancementServeur_clicked\0"
    "\0onQTcpServer_newConnection\0"
    "onQTcpSocket_readyRead\0onQTcpSocket_disconnected\0"
    "onQTcpSocket_error\0QTcpSocket::SocketError\0"
    "socketError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServeurCrawler[] = {

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
       6,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void ServeurCrawler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ServeurCrawler *_t = static_cast<ServeurCrawler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonLancementServeur_clicked(); break;
        case 1: _t->onQTcpServer_newConnection(); break;
        case 2: _t->onQTcpSocket_readyRead(); break;
        case 3: _t->onQTcpSocket_disconnected(); break;
        case 4: _t->onQTcpSocket_error((*reinterpret_cast< QTcpSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ServeurCrawler::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ServeurCrawler.data,
      qt_meta_data_ServeurCrawler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ServeurCrawler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServeurCrawler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServeurCrawler.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ServeurCrawler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
