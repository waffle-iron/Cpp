#include "Home.h"

class Office : public Home
{
public:
	//Office(char* fName);
	//virtual ~Office();
	virtual int Price();
	virtual char Colors();
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