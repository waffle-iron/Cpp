/*Function for Customer*/
#include "Customer.h"
#include <iostream>

using namespace std;
Customer agreementwrt;
void Customer::WriteOrderList(){
   int ord;

    do
           {
           cout << "\nSelect action:\n1.Add information about me.\n2.Make agreements.\n"
                   "3.Do some adjustments.\n";
           cin >> ord;
       switch (ord) {
       case 1:
           system ("clear");
      agreementwrt.WriteCustomerInfo();
           break;

       case 2:
           system ("clear");
cout << "\nBy print \'y\', you agree to TvStudio User Agreement, Provacy Policy.\n";
    char y;
    cin >> y;
    if(y == 'y')
    {
        /*Agriment function*/
        agreementwrt.Agreements();
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
