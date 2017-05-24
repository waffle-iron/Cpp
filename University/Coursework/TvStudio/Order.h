#ifndef ORDER_H
#define ORDER_H
#include "Customer.h"
#include<iostream>
#include <string>
using namespace std;

class Order : virtual public Customer
{
protected:
    int ID;
    int price;
    string nameTvProgram;


public:
    Order()
    {
        money = 0; price = 0; ID = 0;
    }

    void setID(int idOrd)
    {
        ID = idOrd;
    }

    string getName()
    {
        return name;
    }

    string getSurname()
    {
        return surname;
    }

    void setPrices(int pr)
    {
        price = pr;
    }

    int getPrices()
    {
        return price;
    }

   string getNameTvProgram()
   {
       return nameTvProgram;
   }

   void setNameTvProgram(string ntv)
   {
    nameTvProgram= ntv;
   }
};
#endif
