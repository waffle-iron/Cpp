#include <iostream>
#include <string>
#include <stdlib.h>
#include "Customer.h"
#include "Order.h"
#include "Agreement.h"
#include "Operator.h"

#include <fstream>
#include "ShowOneLine.h"
using namespace std;

Order list;


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
    system ("clear");
    /*Function for order*/
list.WriteOrderList();

    break;


case 2:
    /*Function for operator*/

    break;

case 3:

    break;

default:
    system ("clear");
    cout <<"Incorrect selection,try again!";
    break;
}

//system ("clear");
    }
    while(r != 1 && r != 2 && r != 3);
if(r == 3)
    break;
    }


/*
    cout << endl << "------------\\create Customer C-----------------";
    cout << endl << "--------------\\use function showinfo() for C-------------------";
    Customer C;
    C.setMoney(10);
    C.setName("Vova");
    C.setSurame("Zubrytskyi");
    C.showinfo();
    C.Adjustments();
    cout << endl << "------------\\create Operator C1-----------------";
    cout << endl << "--------------\\use function showinfo() for C1-------------------";
    Operator C1;
    C1.setMoney(5);
    C1.setName("Volodymyr");
    C1.setSurame("Zubrytskyi");
    //C1.setPrices(36);
    C1.setTarget("TestTarger");

    C1.showinfo();

    list.getName();
    list.showinfo();*/
    return 0;
}
