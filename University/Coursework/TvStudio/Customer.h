#include<iostream>
#include <string>
using namespace std;

class Customer
{
protected:
    int (*money);
   string  name;
   string surname;
public:
  void Adjustments();
  void Agreements();
  void WriteOrderList();
  void WriteCustomerInfo();
  void WriteUserInfo();

  Customer()
    {
        money = new int;
        (*money) = 0;
    }
    void setMoney(int f)
    {
        (*money) = f;
    }

    int getMoney()
    {
    return (*money);
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
        cout << endl << "Money: " << (*money) << endl << "Name: " << name << endl
             << "Surname: " << surname ;
    }
    ~Customer()
    {
        delete money;
    }
};
