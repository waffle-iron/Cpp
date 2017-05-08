#include<iostream>
using namespace std;


class Agreement:virtual public Customer
{
protected:
    int shops;
public:
    Agreement()
    {
        (*floors) = 0;
        capacity = 0;
        shops = 0;
    }
    void setshops(int sh)
    {
        shops = sh;
    }
    void openshop()
    {
        shops++;
    }
    void closeshop()
    {
        shops--;
    }
    virtual void showinfo()
    {
        Customer::showinfo();
        cout << endl << "shops: " << shops;
    }
};
