#include <QCoreApplication>
#include <QIODevice>
#include <QFile> //Подключаем для работы с классом QFile
#include <QTextStream>
#include <QDebug>
#include <fstream>
#include "Operator.h"
using namespace std;


void ReadCateg(QString Category)
{
QFile mFile(Category);

if(!mFile.open((QFile::ReadOnly | QFile::Text)))
{
    qDebug() << "Could not open file for writing";
    return;
}

QTextStream in(&mFile);
while (!in.atEnd())
{
QString mText = in.readLine();
qDebug() << mText;
}
mFile.close();
}


void Operator::ShowAllFileCateg(){
    QString Category = "Category.txt";
    ReadCateg(Category);
}

void Operator::ShowAllFileOrd(){
    QString Category = "Orderlist.txt";
    ReadCateg(Category);
}
