#include <iostream>
using namespace std;

class MyArray
{
	int *numbers;
	int sizeOfArray;
public:
	MyArray()       //  Конструктор без параметрів
	{
		sizeOfArray = 0;
		numbers = 0;
	}
	//----------------------------------------------- Конструктор з параметрами
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
	~MyArray()      //деструктор
	{
		delete[] numbers;
	}
	//-----------------------------------------------
	void showData()         //вивід данних масива на екран
	{
		for (int i = 0; i < sizeOfArray; i++)
		{
			cout << numbers[i] << " | ";
		}
		cout << endl << endl;
	}
	

	MyArray& operator=(MyArray &arrInt2) //перегрузка оператора присвоювання
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

	int &operator[](int j) //перегрузка []     
	{
		return numbers[j];
	}
};
