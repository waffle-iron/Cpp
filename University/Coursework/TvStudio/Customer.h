#include<iostream>
#include <string>
using namespace std;

class Customer
{
protected:
    int money;
   string  name;
   string surname;
   string nameTvProgram;

public:
  void Adjustments();
  void Agreements();
  void WriteOrderList();
  void WriteCustomerInfo();
  void WriteUserInfo();


  void setNameTvProgram(string ntvp)
  {
      nameTvProgram = ntvp;
  }

  string getNameTvProgram()
    {
        return nameTvProgram;
    }

    void setMoney(int f)
    {
       money = f;
    }

    int getMoney()
    {
    return money;
    }

    string getName()
    {
        return name;
    }

    void setName(string n)
    {
        name = n;
    }

    void setSurame(string s)
    {
        surname = s;
    }

    string getSurame()
    {
        return surname;
    }



    virtual void showinfo()
    {
        cout << endl << "Money: " << money << endl << "Name: " << name << endl
             << "Surname: " << surname ;
    }

};
