#include <QApplication>
#include <QTest>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include "Customer.h"
#include "Order.h"
#include "Agreement.h"
#include "Operator.h"
#include "ShowOneLine.h"
#include "Test.h"

using namespace std;

Order lists;
Operator change;

int main(int argc, char *argv[])
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
lists.WriteOrderList();

    break;

case 2:
   /*Function for operator*/
    system ("clear");
    int c;
    do{

    cout <<"\nSelect action:\n1.Show category || pricelist.\n2.Change price\n3.Show all orders\n4.Exit\n";
    cin >> c;
    if(c == 1){
    system ("clear");
    change.ShowAllFileCateg();
    }
    if(c == 2){
    change.PriceChange();
    system ("clear");
    }
    if(c == 3){
    system ("clear");
    change.ShowAllFileOrd();
    }
    }
    while(c != 4);
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
    freopen("testing.log", "w", stdout);
    QTest::qExec(new Test, argc, argv);

    return 0;
}

