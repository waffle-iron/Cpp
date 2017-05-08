#include<iostream>
#include "Customer.h"
#include "Order.h"
#include "Agreement.h"
#include "Operator.h"
using namespace std;

int main()
{
    cout << endl << "------------\\create Shopping Leisure Centre C-----------------";
    cout << endl << "--------------\\use function showinfo() for C-------------------";
    Customer C;
    C.setfloors(10);
    C.setcapacity(100);
    C.showinfo();
    cout << endl << "------------\\create Shopping Leisure Centre C1-----------------";
    cout << endl << "--------------\\use function showinfo() for C1-------------------";
    Operator C1;
    C1.setfloors(5);
    C1.setcapacity(500);
    C1.setshops(56);
    C1.setattractions(36);
    C1.setcafes(12);
    C1.showinfo();

    return 0;
}
