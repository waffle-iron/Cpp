#include <QCoreApplication>
#include <QFile> //Подключаем для работы с классом QFile
#include <QTextStream>
#include <QDebug>
#include <iostream>
#include <string>
#include <fstream>
#include "Customer.h"
   Customer infoUsr;


#include <fstream>
#include <iostream>
#include <cstring>

void Customer::WriteUserInfo()
{

    int money;
    string name;
    string surname;
    name = infoUsr.getName();
    surname = infoUsr.getSurame();
    money = infoUsr.getMoney();

    ofstream fin("Orderlist.txt");


    fin << "1."<< name <<"\t2." << surname << "\t3." << money;
    fin << endl;

    fin.close();
}




using namespace std;

string myname;
string mysurname;
int balance;


/*void WriteUserInfo(QString FilenameOrd)
{
QFile cusFile(FilenameOrd);

if(!cusFile.open((QFile::WriteOnly | QFile::Text)))
{
    qDebug() << "Could not open file for writing";
    return;
}

QTextStream out(&cusFile);
out << cusFile.getName() << "1."<< infoUsr.getName() <<"\t2." << infoUsr.getSurame() << "\t3." << infoUsr.getMoney() ;
cusFile.flush();
cusFile.close();
}
*/

void Customer::WriteCustomerInfo()
{
    //Customer infoUsr;
   // QString Filename = "Orderlist.txt";
   WriteUserInfo();

    cout << "\nYou name: ";
    cin >> myname;
    infoUsr.setName(myname);
    cout << "\nYou surname: ";
    cin >> mysurname;
    infoUsr.setSurame(mysurname);
    cout << "\nYour Balance($): " ;
    cin >> balance;
   infoUsr.setMoney(balance);
    cout << endl;
}
