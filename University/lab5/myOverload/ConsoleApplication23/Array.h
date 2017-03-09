#include<iostream> 
using namespace std;

class Array
{

	int* ptr;

	int size;
public:

	Array(int s = 10);

	Array(Array& arr);

	virtual ~Array();

	void Rindomize(int num = 10);

	int operator== (Array& arr);
	
	Array operator++ ();

	Array operator++ (int);
};
