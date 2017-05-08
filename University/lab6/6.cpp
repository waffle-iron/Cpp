#include<iostream>
#include<cstring>
#include<iomanip>
enum colors{green, red, yellow, black};
using namespace std;
class door
{
public:
	int *opening;
	int closing;
	colors color;
	int condition;
public:
	door()
	{
		opening = new int;
		*opening = 0;
		closing = 0; color = black; condition = 0;
	}
	void setcolor()
	{
		char ch;
		cout <<endl<<"What color do you want to paint the door?(g - green, r - red, y - yellow): "; cin >> ch;
		switch (ch)
		{
		case 'g': color = green; break;
		case 'r': color = red; break;
		case 'y': color = yellow; break;
		}
	}
	void getInform()
	{
		cout<< endl << "The door was opened " << *opening << " times";
		cout << endl << "The door was closed " << closing << " times";
		cout << endl << "Door color: ";
		switch (color)
		{
		case green: cout << "green";
			break;
		case red: cout << "red";
			break;
		case yellow: cout << "yellow";
			break;
		case black: cout << "black";
			break;
		}
		if (condition == 0) cout << endl << "The door is closed";
		else cout << endl << "The door is opened";
	}
	void open()
	{
		if (condition == 0)
		{
			condition = 1;
			(*opening)++;
			int x = 0;
		}
		else cout << endl << "The door is already open";
	}
	void close()
	{
		if (condition == 1)
		{
			condition = 0;
			closing++;
		}
		else cout << endl << "The door is already close";
	}
	virtual ~door()
	{
		delete opening;

	}
};
class CodeLockDoor : public door
{
private:
	int c1;
	int c2;
	int c3;
public:
	CodeLockDoor() : door()
	{
		c1 = 0; c2 = 0; c3 = 0;
	}
	void setcode()
	{
		cout << endl << "numeral1: "; cin >> c1;
		cout << endl << "numeral2: "; cin >> c2;
		cout << endl << "numeral3: "; cin >> c3;
	}
	void open()
	{
		if (condition == 1)
		{
			cout << "The door is already open";
			return;
		}
		int n1, n2, n3;
		cout <<endl<< "first numeral of parole: "; cin >> n1;
		cout <<endl<< "second numeral of parole: "; cin >> n2;
		cout << endl << "third numeral of parole: "; cin >> n3;
		if (n1 == c1 && n2 == c2 && n3 == c3) door::open();
		else cout << endl << "Incorrect parole";
	}
};
int main()
{
	int ans = 6;
	CodeLockDoor d1;
	d1.setcode();
	while (ans != 5)
	{
		cout << endl << "1 - open, 2 - close, 3 - paint, 4 - show information, 5 - exit: "; cin >> ans;
		switch (ans)
		{
		case 1: d1.open(); break;
		case 2: d1.close(); break;
		case 3: d1.setcolor(); break;
		case 4: d1.getInform(); break;
		}
		cout << endl << "-----------------------------------------------------" << endl;
	}
	return 0;
}
