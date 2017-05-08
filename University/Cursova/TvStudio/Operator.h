#include<iostream>
using namespace std;


class Operator : public Agreement,public Order
{
public:
    int cafes;
public:
    Operator()
    {
        (*floors) = 0;
        capacity = 0;
        shops = 0;
        attractions = 0;
        cafes = 0;
    }
    void setcafes(int caf)
    {
        cafes = caf;
    }
    void opencafe()
    {
        cafes++;
    }
    void closecafe()
    {
        cafes--;
    }
    virtual void showinfo()
    {
        Agreement::showinfo();
        cout << endl << "attractions: " << attractions << endl << "cafes: " << cafes;
    }
};
