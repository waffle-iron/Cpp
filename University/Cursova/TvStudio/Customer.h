#include<iostream>
using namespace std;
class Customer
{
protected:
    int (*floors);
    int capacity;
public:
    Customer()
    {
        floors = new int;
        (*floors) = 0; capacity = 0;
    }
    void setfloors(int f)
    {
        (*floors) = f;
    }
    void setcapacity(int c)
    {
        capacity = c;
    }
    virtual void showinfo()
    {
        cout << endl << "floors: " << (*floors) << endl << "capacity: " << capacity;
    }
    ~Customer()
    {
        delete floors;
    }
};
