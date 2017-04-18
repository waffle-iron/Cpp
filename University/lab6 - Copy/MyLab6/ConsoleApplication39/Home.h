#include <iostream>
using namespace std;

class Home
{
public:
	virtual int Price() = 0;
	virtual char Colors() = 0;

protected:
	char* color;
	int nDoors;
	int nWindows;
	int nRooms;
	int floors;
};

