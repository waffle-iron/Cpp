#include <iostream>
using namespace std;

class MyArray
{
	int *numbers;
	int sizeOfArray;
public:
	MyArray()     
	{
		sizeOfArray = 0;
		numbers = 0;
	}
	//-----------------------------------------------
	MyArray(int size)    
	{
		sizeOfArray = size;
		numbers = new int[sizeOfArray];
		for (int i = 0; i < sizeOfArray; i++)
		{
			numbers[i] = 0;
		}
	}
	//-----------------------------------------------
	~MyArray()

		delete[] numbers;
	}
	//-----------------------------------------------
	void showData()         
	{
		for (int i = 0; i < sizeOfArray; i++)
		{
			cout << numbers[i] << " | ";
		}
		cout << endl << endl;
	}
	

	MyArray& operator=(MyArray &arrInt2)
	{
		delete[] numbers;

		sizeOfArray = arrInt2.sizeOfArray;

		numbers = new int[sizeOfArray];
		for (int i = 0; i < sizeOfArray; i++)
		{
			numbers[i] = arrInt2.numbers[i];
		}

		return *this;
	}	

	int &operator[](int j)   
	{
		return numbers[j];
	}
};
