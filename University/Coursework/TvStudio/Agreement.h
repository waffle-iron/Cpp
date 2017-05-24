#ifndef AGREEMENT_H
#define AGREEMENT_H

#include<iostream>
#include <string>
#include "Customer.h"
using namespace std;


class Agreement:virtual public Customer
{
protected:
    int ID;
    int price;
     string nameTvProgram;
public:
    Agreement()
    {
        money = 0; price = 0; ID = 1;

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
