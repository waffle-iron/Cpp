#include "Office.h"
#include <iostream>
using namespace std;

int main()
{
	Office building;
   // Office("myCompany");
	building.setDoors(50);
	building.setFloors(11);
	building.setWindows(150);

	building.Colors();
	building.Price();

	return 0;
}
