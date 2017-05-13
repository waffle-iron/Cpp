/*Function for Customer*/
#include "Customer.h"
#include <iostream>

using namespace std;
Customer agreementwrt;
void Customer::writeOrderList(){
   int ord;
   string myname;
   string mysurname;
   int balance;
    do
           {
           cout << "\nSelect action:\n1.Add information about me.\n2.Make agreements.\n"
                   "3.Do some adjustments.\n";
           cin >> ord;
       switch (ord) {
       case 1:
        cout << "\nYou name: ";
        cin >> myname;
        Customer::setName(myname);
        cout << "\nYou surname: ";
        cin >> mysurname;
        Customer::setSurame(mysurname);
        cout << "\nYour Balance($): " ;
        cin >> balance;
        Customer::setMoney(balance);
        cout << endl;
           break;

       case 2:
cout << "\nBy print \'y\', you agree to TvStudio User Agreement, Provacy Policy.\n";
    char y;
    cin >> y;
    if(y == 'y')
    {
        /*Agriment function*/
        agreementwrt.Agreements();
        cout << "You don't have error\n";
    }
           break;
       default:
           cout <<"Incorrect selection,try again!";
           break;
       }
      // system ("clear");
           }
           while(ord != 1 && ord != 2 && ord != 3);
   }
