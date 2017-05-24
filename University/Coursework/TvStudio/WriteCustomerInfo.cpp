#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "Customer.h"

using namespace std;


 Customer infoUsr;

void Customer::WriteCustomerInfo()
{
    srand(time(0));
    int ID = rand()%101;
    string myname;
    string mysurname;
    int balance;

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

    ofstream OrderList;
    OrderList.open("Orderlist.txt", ios::app);
    //OrderList.open("Orderlist1.txt", ios::app);
    OrderList << endl << ID << "     " << infoUsr.getName() << "                " << infoUsr.getSurame()
              << "                    " << infoUsr.getMoney();
    OrderList.close();

    ofstream OrderList1;
    OrderList1.open("Orderlist1.txt", ios::app);
    OrderList1 << endl << ID << "     " << infoUsr.getName() << "                " << infoUsr.getSurame()
              << "                    " << infoUsr.getMoney();
    OrderList1.close();

    ofstream Bank;
    Bank.open("Bank.txt");
    Bank << infoUsr.getSurame() << " " << infoUsr.getMoney();
    Bank.close();
}

