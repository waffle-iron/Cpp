#include <QtCore/QCoreApplication>
#include <QDataStream>
#include <QByteArray>
#include <QFile>
#include <QString>
#include <QHash>
#include <QDebug>

class simpleClass
{
struct anyStruct
{
short sVal;
float fVal;
double dVal;
short Empty;
char array[8];
}

QDataStream operator <<(QDataStream &out, const anyStruct &any)
{
    out << any.sVal;
    out << any.fVal;
    out << any.dVal;
    out << any.Empty;
    out.writeRawData(any.array,sizeof(any.array));
return out;
}

inline QDataStream &operator <<(QDataStream &stream,const simpleClass &sC) // сериализуем;
{
    stream << sC.a;
    stream << sC.b;
    stream << sC.c;
    return stream;
}

}
