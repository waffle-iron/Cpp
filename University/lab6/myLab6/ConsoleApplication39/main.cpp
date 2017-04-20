#include "Office.h"
#include "Operator.h"
#include <iostream>
using namespace std;

class Home
{
public:
	virtual int Price() = 0;
	virtual void Colors() = 0;

protected:
	char* color;
	int nDoors;
	int nWindows;
	int nRooms;
	int floors;
};

void Office::Colors()
{
	int i = 0;
	do

	{
		cout << "Choose color office!!!\n";
		cout << "\n1.Green\n2.Blue\n3.Red\n";
		cin >> i;
		{
			switch (i) {
			case 1: { cout << "Green"; }
			case 2: { cout << "Blue"; }
			case 3: { cout << "Red"; }
			default: { cout << "Incorrect, try again!!!"; break; }
			}
		}
	} while (i != 1 || i != 2 || i != 3);
}

int Office::Price()
{
	rent = getWindows() * getDoors() * capacity * employee * getFloors();
	cout << " Rent office is:" << rent << endl;
	return rent;
}


class Office : public Home
{
public:
	//Office(char* fName);
	//virtual ~Office();
	 int Price();
	 void Colors();
	
	void setDoors(int d);
	int getDoors();
	void setWindows(int w);
	int getWindows();
	void setRooms(int r);	
	int getRooms();
	void setFloors(int f);
	int getFloors(); 
	
private:
	int employee = 700;
	int rent;
	int capacity = 5000;
	char* nameCompany;
};

/*
Office::Office(char* fName) {
	nameCompany = new char[strlen(fName) + 1];
	cout << "\nName company is:\n" << nameCompany;
}

Office::~Office()
{
	if (nameCompany != 0)
		delete[] nameCompany;
}
*/

void Office::setDoors(int d) {
		nDoors = d;
	}

	int Office::getDoors() {
		return nDoors;
	}

	void Office::setWindows(int w) {
		nWindows = w;
	}

	int Office::getWindows() {
		return nWindows;
	}

	void Office::setRooms(int r) {
		nRooms = r;
	}

	int Office::getRooms() {
		return nRooms;
	}

	void Office::setFloors(int f) {
		floors = f;
	}

	int Office::getFloors() {
		return floors;
	}


int main()
{
	Office building("4bit");
	building.setDoors(50);
	building.setFloors(11);
	building.setWindows(150);

	building.Colors();
	building.Price();


	/*Перегрузка оператора присвоєння*/
	MyArray ArrayInt(5);    //создаем объект класса и записываем в него данные
	ArrayInt[0] = 1;
	ArrayInt[1] = 5;
	ArrayInt[2] = 2;
	ArrayInt[3] = 6;
	ArrayInt[4] = 8;

	MyArray ArrayInt2(10); // третий объект класса с массивом из 10 элементов
	cout << "Array ArrayInt2: ";
	ArrayInt2.showData();
	ArrayInt2 = ArrayInt; // копируем массив из ArrayInt в ArrayInt3
	cout << "Array ArrayInt2 after copy: \n";
	ArrayInt2.showData();

	return 0;
}
