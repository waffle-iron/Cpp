#include<iostream>
using namespace std;

class Order : virtual public Customer
{
protected:
    int attractions;
public:
    Order()
    {
        (*floors) = 0; capacity = 0; attractions = 0;
    }
    void setattractions(int at)
    {
        attractions = at;
    }
    void openattract()
    {
        attractions++;
    }
    void closeattract()
    {
        attractions--;
    }
    virtual void showinfo()
    {
        Customer::showinfo();
        cout << "attactions: " << attractions;
    }
};
