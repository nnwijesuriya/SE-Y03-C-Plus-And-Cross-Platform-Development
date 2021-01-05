/****************************************************************************
** Meta object code from reading C++ file 'audio.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../media_player/audio.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'audio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_audio_t {
    QByteArrayData data[18];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_audio_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_audio_t qt_meta_stringdata_audio = {
    {
QT_MOC_LITERAL(0, 0, 5), // "audio"
QT_MOC_LITERAL(1, 6, 23), // "on_actionopen_triggered"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 23), // "on_actionplay_triggered"
QT_MOC_LITERAL(4, 55, 24), // "on_actionpause_triggered"
QT_MOC_LITERAL(5, 80, 23), // "on_progress_sliderMoved"
QT_MOC_LITERAL(6, 104, 8), // "position"
QT_MOC_LITERAL(7, 113, 21), // "on_volume_sliderMoved"
QT_MOC_LITERAL(8, 135, 18), // "on_durationChanged"
QT_MOC_LITERAL(9, 154, 18), // "on_positionChanged"
QT_MOC_LITERAL(10, 173, 23), // "on_actionstop_triggered"
QT_MOC_LITERAL(11, 197, 23), // "on_actionhome_triggered"
QT_MOC_LITERAL(12, 221, 23), // "on_actionmute_triggered"
QT_MOC_LITERAL(13, 245, 25), // "on_actionunmute_triggered"
QT_MOC_LITERAL(14, 271, 24), // "on_actionclose_triggered"
QT_MOC_LITERAL(15, 296, 10), // "closeEvent"
QT_MOC_LITERAL(16, 307, 12), // "QCloseEvent*"
QT_MOC_LITERAL(17, 320, 5) // "event"

    },
    "audio\0on_actionopen_triggered\0\0"
    "on_actionplay_triggered\0"
    "on_actionpause_triggered\0"
    "on_progress_sliderMoved\0position\0"
    "on_volume_sliderMoved\0on_durationChanged\0"
    "on_positionChanged\0on_actionstop_triggered\0"
    "on_actionhome_triggered\0on_actionmute_triggered\0"
    "on_actionunmute_triggered\0"
    "on_actionclose_triggered\0closeEvent\0"
    "QCloseEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_audio[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    1,   82,    2, 0x08 /* Private */,
       7,    1,   85,    2, 0x08 /* Private */,
       8,    1,   88,    2, 0x08 /* Private */,
       9,    1,   91,    2, 0x08 /* Private */,
      10,    0,   94,    2, 0x08 /* Private */,
      11,    0,   95,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,
      14,    0,   98,    2, 0x08 /* Private */,
      15,    1,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void audio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<audio *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionopen_triggered(); break;
        case 1: _t->on_actionplay_triggered(); break;
        case 2: _t->on_actionpause_triggered(); break;
        case 3: _t->on_progress_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_volume_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->on_positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->on_actionstop_triggered(); break;
        case 8: _t->on_actionhome_triggered(); break;
        case 9: _t->on_actionmute_triggered(); break;
        case 10: _t->on_actionunmute_triggered(); break;
        case 11: _t->on_actionclose_triggered(); break;
        case 12: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject audio::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_audio.data,
    qt_meta_data_audio,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *audio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *audio::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_audio.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int audio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
