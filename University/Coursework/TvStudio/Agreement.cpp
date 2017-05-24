#include <QCoreApplication>
#include <QIODevice>
#include <QFile> //Подключаем для работы с классом QFile
#include <QTextStream>
#include <QDebug>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
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
   int requestmoney;

   do{
    cout << "\nSelect a category:";
    QString Category = "Category.txt";
    Read(Category);
    cin >> categ;
    if (categ < 1 || categ > 7){
        system("clear");
    cout << "Entered not offered,try againe!\n";
    }
   }
    while(categ < 1 || categ > 7);

    string namePrograms;

    ifstream Bank("Bank.txt");
    string name;
    int a;
    while (Bank >> name) {
        Bank >> a;
    }
     requestmoney = categ * 1000;
    if (requestmoney > a)
    {
          cout << "You don't have money!!!";
    }

    else
    {
        string line;
         ifstream myfile ("Bank.txt");
         if (myfile.is_open())
         {
           while ( getline (myfile,line) )
           {
             cout << line << '\n';
           }
           myfile.close();
         }

         else cout << "Unable to open file";

         int newBalanse = a - requestmoney;
         ofstream Bank;
         Bank.open("Bank.txt");
         Bank << newBalanse;
         Bank.close();

         cout << "Enter name you program:";
         cin >>  namePrograms;
    }


     ofstream Orders;
     Orders.open("Orders.txt", ios::app);
     Orders << endl << "Number: " << categ << "\t" <<"Name:"<< namePrograms << endl;
     Orders.close();
}


