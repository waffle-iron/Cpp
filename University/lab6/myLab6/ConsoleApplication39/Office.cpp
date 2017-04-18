#include "Office.h"
#include <iostream>
using namespace std;

char Office::Colors()
{
	int i = 0;
	do
	{
		cout << "\nChoose color office!!!\n";
		cout << "\n1.Green\n2.Blue\n3.Red\n";
		cin >> i;
		{
			switch (i) {
			case 1: { color = "Green"; return *color; }
			case 2: { color = "Blue"; return *color; }
			case 3: { color = "Red";  return *color; }
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

