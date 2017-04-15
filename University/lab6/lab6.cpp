#include<iostream>
using namespace std;

class Home
{
public:
	virtual ~Home();
	virtual char* Color() = 0;  // колір
	virtual int Price() = 0;  //ціна
	virtual int Floors() = 0; //к-сь поверхів
	

	void setFloors(int x)
	{
		floors = x;
	}

	int getFloors()
	{
		return floors;
	}

	void setSize(int s)
	{
		size = s;	
	}

	int getSize()
	{
	return size;
	}

protected:
	int size = 0;
	int doors = 0;
	int windows = 0;
	int floors = 0;
	char* color = new char [15];
};

Home::~Home(){}

class Office : public Home
{
public:
	virtual ~Office();
	virtual char* Color();
	virtual int Price();
	virtual int Floor(); 
	int employee = 0;
	int rent = 0;
};

char* Office::Color()
{
	cout << "Choose color office!!!\n";
	cout << "1.Green\n 2.Blue\n 3.Red\n";
	int i = 1;
	cin >> i;
	while(i != 1 || i != 2 || i != 3)
	{
	switsh(i){
		case 1: { color = "Green"; break;}
		case 2: { color = "Blue" ; break;}
		case 3: { color = "Red"; break;}
	default:{ cout << "Incorrect, try again!!!"; break;}
	}
	return color;
}

int Office::Price()
{
	rent = windows * doors * size * employee * floors;
	cout << " Rent office is:"<< rent <<endl;
	return rent;
}

int main(int argc, char const *argv[])
{
	
	capac.setFloors(4);
	
	cout << "You office center have" << capac.getFloors() 
	<< "floors" << endl;
	Office pric;
	pric.Price();
	cout << "Price in your office is:" << pric.Price() << endl;
	Office col;
	col.Color();
	cout << "Color your office is:" << color;
	return 0;
}