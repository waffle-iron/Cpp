#include<iostream>
#include <string>
#include "Agreement.h"
#include "Order.h"
using namespace std;

class Operator : public Agreement,public Order
{
public:
    int ID;
    void PriceChange();
    void ShowAllFile();

    Operator()
    {
        money = 0;
        ID = 0;
    }

    string getName()
    {
        return name;
    }

    string getSurname()
    {
        return surname;
    }


    void setID(int idOrd)
    {
        ID = idOrd;
    }
};
