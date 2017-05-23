#include<iostream>
#include <string>
using namespace std;

class Order : virtual public Customer
{
protected:
    int ID;
    int price;
    int deadline;
    string target;
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

   int getDateOfDeadline()
   {
    return  deadline;
   }

   void setDateOfDeadline(int DofDl)
   {
    deadline = DofDl;
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

   string getTarget()
   {
       return target;
   }

   void setTarget(string tr)
   {
    target = tr;
   }

   string getNameTvProgram()
   {
       return nameTvProgram;
   }

   void setNameTvProgram(string ntv)
   {
    nameTvProgram= ntv;
   }


    virtual void showinfo()
    {
        Customer::showinfo();
        cout << "price: " << price << endl << "target: " << target;
    }
};
