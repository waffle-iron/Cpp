#include <iostream>
using namespace std;

template <class T>
void Swap(T* x, T* y)
{
T z(*x);
*x = *y;
*y = z;
}


int main()
{
	int ai = 10, bi = 20;
	Swap(&ai,&bi);
	cout << ai << endl;
	cout << bi << endl;
	float af = 23.24, bf =1.14;
	cout << af << endl;
	cout << bf << endl;
	Swap(&af,&bf);
	cout << af << endl;
	cout << bf << endl;

	const char* ac = "Test";
	const char* bc = "succesful";
	Swap(&ac,&bc);
	cout << ac << endl;
	cout << bc << endl;
	return 0;
}
