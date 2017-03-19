#include <iostream>
using namespace std;

class Fish
{
public:
	bool FreashWaterFish;

	void Swim()
	{
		if (FreashWaterFish)
			cout << "Swims in lake" << endl;
		else
			cout << "Swim in sea" << endl;
	}
};

class Tuna : public Fish
{
public: 
	Tuna()
	{
		FreashWaterFish = false;
	}
};

class Carp : public Fish
{
public:
	Carp()
	{
		FreashWaterFish = true;
	}
	};

int main()
{
	Carp myLunch;
	Tuna myDinner;

	cout << "Getting my food to swim" << endl;

	cout << "Lunch: ";
	myLunch.Swim();

	cout << "Dinner: ";
	myDinner.Swim();

	return 0;
}