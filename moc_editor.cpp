/****************************************************************************
** Meta object code from reading C++ file 'editor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "editor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_textEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      22,   11,   11,   11, 0x08,
      33,   11,   11,   11, 0x08,
      44,   11,   11,   11, 0x08,
      57,   11,   11,   11, 0x08,
      69,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_textEditor[] = {
    "textEditor\0\0newFile()\0saveFile()\0"
    "openFile()\0shiftRight()\0shiftLeft()\0"
    "toggleFullScreen()\0"
};

void textEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        textEditor *_t = static_cast<textEditor *>(_o);
        switch (_id) {
        case 0: _t->newFile(); break;
        case 1: _t->saveFile(); break;
        case 2: _t->openFile(); break;
        case 3: _t->shiftRight(); break;
        case 4: _t->shiftLeft(); break;
        case 5: _t->toggleFullScreen(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData textEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject textEditor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_textEditor,
      qt_meta_data_textEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &textEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *textEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *textEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_textEditor))
        return static_cast<void*>(const_cast< textEditor*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int textEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
