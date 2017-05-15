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
    OrderList << endl << ID << "     " << infoUsr.getName() << "                " << infoUsr.getSurame()
              << "                    " << infoUsr.getMoney();
    OrderList.close();


}

