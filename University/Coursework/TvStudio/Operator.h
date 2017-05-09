#include<iostream>
#include <string>
using namespace std;


class Operator : public Agreement,public Order
{
public:
    int cafes;
    int ID;
public:
    Operator()
    {
        (*money) = 0;
        cafes = 0;
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

    string getTarget()
    {
        return target;
    }

    void setTarget(string tr)
    {
     target = tr;
    }

    void setID(int idOrd)
    {
        ID = idOrd;
    }


    virtual void showinfo()
    {
        Agreement::showinfo();
        cout << target << endl;
    }
};
