/****************************************************************************
** Meta object code from reading C++ file 'videos.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../xdd/media_player/videos.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_videos_t {
    QByteArrayData data[14];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_videos_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_videos_t qt_meta_stringdata_videos = {
    {
QT_MOC_LITERAL(0, 0, 6), // "videos"
QT_MOC_LITERAL(1, 7, 23), // "on_actionopen_triggered"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 24), // "on_actionpause_triggered"
QT_MOC_LITERAL(4, 57, 23), // "on_actionplay_triggered"
QT_MOC_LITERAL(5, 81, 10), // "recivedata"
QT_MOC_LITERAL(6, 92, 24), // "on_actionClose_triggered"
QT_MOC_LITERAL(7, 117, 10), // "closeEvent"
QT_MOC_LITERAL(8, 128, 12), // "QCloseEvent*"
QT_MOC_LITERAL(9, 141, 5), // "event"
QT_MOC_LITERAL(10, 147, 23), // "on_actionmute_triggered"
QT_MOC_LITERAL(11, 171, 36), // "on_actionIncrease_Playback_tr..."
QT_MOC_LITERAL(12, 208, 31), // "on_actionReduce_Speed_triggered"
QT_MOC_LITERAL(13, 240, 31) // "on_actionNormal_Speed_triggered"

    },
    "videos\0on_actionopen_triggered\0\0"
    "on_actionpause_triggered\0"
    "on_actionplay_triggered\0recivedata\0"
    "on_actionClose_triggered\0closeEvent\0"
    "QCloseEvent*\0event\0on_actionmute_triggered\0"
    "on_actionIncrease_Playback_triggered\0"
    "on_actionReduce_Speed_triggered\0"
    "on_actionNormal_Speed_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_videos[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    1,   67,    2, 0x08 /* Private */,
       6,    0,   70,    2, 0x08 /* Private */,
       7,    1,   71,    2, 0x08 /* Private */,
      10,    0,   74,    2, 0x08 /* Private */,
      11,    0,   75,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void videos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<videos *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionopen_triggered(); break;
        case 1: _t->on_actionpause_triggered(); break;
        case 2: _t->on_actionplay_triggered(); break;
        case 3: _t->recivedata((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->on_actionClose_triggered(); break;
        case 5: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 6: _t->on_actionmute_triggered(); break;
        case 7: _t->on_actionIncrease_Playback_triggered(); break;
        case 8: _t->on_actionReduce_Speed_triggered(); break;
        case 9: _t->on_actionNormal_Speed_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject videos::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_videos.data,
    qt_meta_data_videos,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *videos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *videos::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_videos.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int videos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
