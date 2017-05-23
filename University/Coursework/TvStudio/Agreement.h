#include<iostream>
#include <string>
using namespace std;


class Agreement:virtual public Customer
{
protected:
    int ID;
    int price;
     int deadline;
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
        cout << endl ;
    }
};
