#include "Customer.h"
#include "ShowOneLine.h"
#include <iostream>

using namespace std;

ShowOneLine line;
Customer agreementwrt;

void Customer::WriteOrderList(){
   int ord;


        do
           {
        system ("clear");
        cout << "\nSelect action:\n1.Add information about me.\n2.Make agreements.\n"
                   "3.Do some adjustments.\n4.Exit\n";
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

       case 3:
           cout << "\nYou information:" ;
           line.LastLineOrderlist();
           cout << endl << "    \t";
           line.intLastLineOrdList();

           agreementwrt.Adjustments();

        break;

       case 4:
        break;

       default:
           cout <<"Incorrect selection,try again!";
           break;
       }
           }
           while(ord != 4);
           system ("clear");
   }
