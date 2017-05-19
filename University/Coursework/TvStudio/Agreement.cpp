#include <QCoreApplication>
#include <QFile> //Подключаем для работы с классом QFile
#include <QTextStream>
#include <QDebug>
#include <iostream>
#include <string>
#include <fstream>
#include "Customer.h"

using namespace std;


void Read(QString Category)
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


void Customer::Agreements(){
   int categ;
    do{
    cout << "\nSelect a category:";
    QString Category = "Category.txt";
    Read(Category);
    cin >> categ;
    if (categ < 1 || categ > 7)
        system("clear");
    cout << "Entered not offered,try againe!\n";
    }
    while(categ < 1 || categ > 7);
      }


