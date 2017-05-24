#include <iostream>
#include "Customer.h"
#include "Order.h"
#include "Agreement.h"
#include "Operator.h"
#include "ShowOneLine.h"

using namespace std;

Order list;
Operator change;

int main()
{
    cout <<"*************************Welcome to the TV program*****************************";
    int r;
    while (true) {
    do
    {
    cout << "\nSelect role:\n1.Order\n2.Operator\n3.Exit\n";
    cin >> r;

switch (r) {

case 1:
    /*Function for order*/
    system ("clear");
list.WriteOrderList();

    break;

case 2:
   /*Function for operator*/
    system ("clear");
    int c;
    do{

    cout <<"\nSelect action:\n1.Show category || pricelist.\n2.Change price\n3.Exit\n";
    cin >> c;
    if(c == 1){
    system ("clear");
    change.ShowAllFile();
    }
    if(c == 2){
    change.PriceChange();
    system ("clear");
    }
    }
    while(c != 3);
    system ("clear");
    break;

case 3:
    break;

default:
    system ("clear");
    cout <<"Incorrect selection,try again!";
    break;
}
    }
    while(r != 1 && r != 2 && r != 3);
if(r == 3)
    break;
    }
    return 0;
}
