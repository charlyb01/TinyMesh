/****************************************************************************
** Meta object code from reading C++ file 'qte.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Include/qte.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qte.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "editingSceneLeft"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 3), // "Ray"
QT_MOC_LITERAL(4, 33, 17), // "editingSceneRight"
QT_MOC_LITERAL(5, 51, 14), // "BoxMeshExample"
QT_MOC_LITERAL(6, 66, 11), // "ResetCamera"
QT_MOC_LITERAL(7, 78, 14), // "UpdateMaterial"
QT_MOC_LITERAL(8, 93, 7), // "LoadOBJ"
QT_MOC_LITERAL(9, 101, 7), // "SaveOBJ"
QT_MOC_LITERAL(10, 109, 10), // "GenerateBS"
QT_MOC_LITERAL(11, 120, 12), // "GenerateRevo"
QT_MOC_LITERAL(12, 133, 8), // "RenderBS"
QT_MOC_LITERAL(13, 142, 10), // "RenderRevo"
QT_MOC_LITERAL(14, 153, 13), // "DoGlobalTwist"
QT_MOC_LITERAL(15, 167, 12) // "DoLocalTwist"

    },
    "MainWindow\0editingSceneLeft\0\0Ray\0"
    "editingSceneRight\0BoxMeshExample\0"
    "ResetCamera\0UpdateMaterial\0LoadOBJ\0"
    "SaveOBJ\0GenerateBS\0GenerateRevo\0"
    "RenderBS\0RenderRevo\0DoGlobalTwist\0"
    "DoLocalTwist"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

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
       1,    1,   79,    2, 0x0a /* Public */,
       4,    1,   82,    2, 0x0a /* Public */,
       5,    0,   85,    2, 0x0a /* Public */,
       6,    0,   86,    2, 0x0a /* Public */,
       7,    0,   87,    2, 0x0a /* Public */,
       8,    0,   88,    2, 0x0a /* Public */,
       9,    0,   89,    2, 0x0a /* Public */,
      10,    0,   90,    2, 0x0a /* Public */,
      11,    0,   91,    2, 0x0a /* Public */,
      12,    0,   92,    2, 0x0a /* Public */,
      13,    0,   93,    2, 0x0a /* Public */,
      14,    0,   94,    2, 0x0a /* Public */,
      15,    0,   95,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editingSceneLeft((*reinterpret_cast< const Ray(*)>(_a[1]))); break;
        case 1: _t->editingSceneRight((*reinterpret_cast< const Ray(*)>(_a[1]))); break;
        case 2: _t->BoxMeshExample(); break;
        case 3: _t->ResetCamera(); break;
        case 4: _t->UpdateMaterial(); break;
        case 5: _t->LoadOBJ(); break;
        case 6: _t->SaveOBJ(); break;
        case 7: _t->GenerateBS(); break;
        case 8: _t->GenerateRevo(); break;
        case 9: _t->RenderBS(); break;
        case 10: _t->RenderRevo(); break;
        case 11: _t->DoGlobalTwist(); break;
        case 12: _t->DoLocalTwist(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
