#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class CAssaulRife
{
protected:
	int(*power);
	int price;
	char* m_pszName;
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
		delete  power;
	}

CAssaulRife& operator=(const CAssaulRife&);
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

	CBazooka& operator=(const CBazooka&);
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

	CMachineGun& operator=(const CMachineGun&);
};

class CGun : public CBazooka, public CMachineGun
{
 protected:
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

  CGun& operator=(const CGun&);

};


CAssaulRife& CAssaulRife::operator=(const CAssaulRife& obj) 
{
	if (this != &obj){
	cout << "CAssaulRife operator=" << endl;
	delete [] m_pszName;
	m_pszName = new char[strlen(obj.m_pszName) + 1];	
	strcpy(m_pszName, obj.m_pszName);
	}
	return *this;
}


CBazooka& CBazooka::operator=(const CBazooka& obj)
{
if (this != &obj){
	cout << "CBazooka operator=" << endl;
	delete [] m_pszName;
	m_pszName = new char[strlen(obj.m_pszName) + 1];	
	strcpy(m_pszName, obj.m_pszName);
	}
	return *this;
}

CMachineGun& CMachineGun::operator=(const CMachineGun& obj)
{
if (this != &obj){
	cout << "MachineGun operator=" << endl;
	delete [] m_pszName;
	m_pszName = new char[strlen(obj.m_pszName) + 1];	
	strcpy(m_pszName, obj.m_pszName);
	CAssaulRife::operator=(obj);
	}
	return *this;
}

CGun& CGun::operator=(const CGun& obj)
{
if (this != &obj){
	cout << "CGun operator=" << endl;
	delete [] m_pszName;
	CBazooka::operator=(obj);
	CMachineGun::operator=(obj);

	}
	return *this;
}

int main()
{
	cout << endl << "--------------\\create AssaulRife C-----------------------------";
	cout << endl << "--------------\\use function showinfo() for C-------------------";
	CAssaulRife c;
	c.setPower(10);
	c.setPrice(100);
	c.showinfo();
	cout << endl << "-------------\\create CGun C1------------------------------------";
	cout << endl << "--------------\\use function showinfo() for C1-------------------";
	
	CGun c1;
	c1.setPower(5);
	c1.setPrice(500);
	c1.setshops(56);
	c1.setSpeed(36);
	c1.setUsable(12);
	c1.showinfo();

	//CGun c2(c1);   //Overloading
	//cout << endl;
	//c2.showinfo();

	
	return 0;
}