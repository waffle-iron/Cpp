#include<iostream>
#include <string>
#include "Customer.h"
#include "Order.h"
#include "Agreement.h"
#include "Operator.h"
using namespace std;

int main()
{
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

    return 0;
}
