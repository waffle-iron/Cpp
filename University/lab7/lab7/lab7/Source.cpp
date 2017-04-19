#include<iostream>
#include<conio.h>
#include<cstring>
#include<iomanip>
using namespace std;
class CAssaulRife
{
protected:
	int(*power);
	int price;
public:
	CAssaulRife()
	{
		power = new int;
		(*power) = 0; price = 0;
	}
	void setPower(int f)
	{
		(*power) = f;
	}
	void setPrice(int c)
	{
		price = c;
	}
	virtual void showinfo()
	{
		cout << endl << "floors: " << (*power) << endl << "capacity: " <<  price;
	}
	~CAssaulRife()
	{
		delete power;
	}
};
class CBazooka :virtual public CAssaulRife
{
protected:
	int nShops;
public:
	CBazooka()
	{
		(*power) = 0;
		price = 0;
		nShops = 0;
	}
	void setshops(int sh)
	{
		nShops = sh;
	}
	void openshop()
	{
		nShops++;
	}
	void closeshop()
	{
		nShops--;
	}
	virtual void showinfo()
	{
		CAssaulRife::showinfo();
		cout << endl << "shops: " << nShops;
	}
};
class CMachineGun : virtual public CAssaulRife
{
protected:
	int attractions;
public:
	CMachineGun()
	{
		(*power) = 0; price = 0; attractions = 0;
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
		CAssaulRife::showinfo();
		cout << "attactions: " << attractions;
	}
};
class CShoppingLeisureCentre : public CBazooka, public CMachineGun
{
public:
	int cafes;
public:
	CShoppingLeisureCentre()
	{
		(*power) = 0;
		price = 0;
		nShops = 0;
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
		CBazooka::showinfo();
		cout << endl << "attractions: " << attractions << endl << "cafes: " << cafes;
	}
};
int main()
{
	cout << endl << "------------\\create Shopping Leisure Centre C-----------------";
	cout << endl << "--------------\\use function showinfo() for C-------------------";
	CAssaulRife C;
	C.setPower(10);
	C.setPrice(100);
	C.showinfo();
	cout << endl << "------------\\create Shopping Leisure Centre C1-----------------";
	cout << endl << "--------------\\use function showinfo() for C1-------------------";
	CShoppingLeisureCentre C1;
	C1.setPower(5);
	C1.setPrice(500);
	C1.setshops(56);
	C1.setattractions(36);
	C1.setcafes(12);
	C1.showinfo();
	_getch();
	return 0;
}