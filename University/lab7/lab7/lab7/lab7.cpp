#include <iostream>
#include <cstring>
#include <iomanip>
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
		cout << endl << "Power: " << (*power) << endl << "Price: " <<  price;
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
	int speed;
public:
	CMachineGun()
	{
		(*power) = 0; price = 0; speed = 0;
	}
	void setSpeed(int at)
	{
		speed = at;
	}
	void openSpeed()
	{
		speed++;
	}
	void closeSpeed()
	{
		speed--;
	}
	virtual void showinfo()
	{
		CAssaulRife::showinfo();
		cout << "Speed: " << speed;
	}
};
class CGun : public CBazooka, public CMachineGun
{
public:
	int usable;
public:
	CGun()
	{
		(*power) = 0;
		price = 0;
		nShops = 0;
		speed = 0;
		usable = 0;
	}
	void setUsable(int caf)
	{
		usable = caf;
	}
	void openUsable()
	{
		usable++;
	}
	void closeUsable()
	{
		usable--;
	}
	virtual void showinfo()
	{
		CBazooka::showinfo();
		cout << endl << "speed: " << speed << endl << "Usable: " << usable;
	}
};

int main()
{
	cout << endl << "--------------\\create AssaulRife C-----------------------------";
	cout << endl << "--------------\\use function showinfo() for C-------------------";
	CAssaulRife C;
	C.setPower(10);
	C.setPrice(100);
	C.showinfo();
	cout << endl << "-------------\\create CGun C1------------------------------------";
	cout << endl << "--------------\\use function showinfo() for C1-------------------";
	CGun C1;
	C1.setPower(5);
	C1.setPrice(500);
	C1.setshops(56);
	C1.setSpeed(36);
	C1.setUsable(12);
	C1.showinfo();

	
	return 0;
}