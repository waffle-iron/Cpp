#include<iostream>
#include<conio.h>
#include<cstring>
#include<iomanip>
using namespace std;
class CBuilding
{
protected:
	int (*floors);
	int capacity;
public:
	CBuilding()
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
	~CBuilding()
	{
		delete floors;
	}
};
class CShoppingCentre:virtual public CBuilding
{
protected:
	int shops;
public:
	CShoppingCentre()
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
		CBuilding::showinfo();
		cout << endl << "shops: " << shops;
	}
};
class CEntertainmentCentre : virtual public CBuilding
{
protected:
	int attractions;
public:
	CEntertainmentCentre()
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
		CBuilding::showinfo();
		cout << "attactions: " << attractions;
	}
};
class CShoppingLeisureCentre : public CShoppingCentre,public CEntertainmentCentre
{
public:
	int cafes;
public:
	CShoppingLeisureCentre()
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
		CShoppingCentre::showinfo();
		cout << endl << "attractions: " << attractions << endl << "cafes: " << cafes;
	}
};
int main()
{
	cout << endl << "------------\\create Shopping Leisure Centre C-----------------";
	cout << endl << "--------------\\use function showinfo() for C-------------------";
	CBuilding C;
	C.setfloors(10);
	C.setcapacity(100);
	C.showinfo();
	cout << endl << "------------\\create Shopping Leisure Centre C1-----------------";
	cout << endl << "--------------\\use function showinfo() for C1-------------------";
	CShoppingLeisureCentre C1;
	C1.setfloors(5);
	C1.setcapacity(500);
	C1.setshops(56);
	C1.setattractions(36);
	C1.setcafes(12);
	C1.showinfo();
	_getch();
	return 0;
}