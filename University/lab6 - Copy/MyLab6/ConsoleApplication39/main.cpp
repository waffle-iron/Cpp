#include "Office.h"
#include "Operator.h"
#include <iostream>
using namespace std;

int main()
{
	Office building("4bit");
	building.setDoors(50);
	building.setFloors(11);
	building.setWindows(150);

	building.Colors();
	building.Price();


	/*Перегрузка оператора присвоєння*/
	MyArray ArrayInt(5);    //создаем объект класса и записываем в него данные
	ArrayInt[0] = 1;
	ArrayInt[1] = 5;
	ArrayInt[2] = 2;
	ArrayInt[3] = 6;
	ArrayInt[4] = 8;

	MyArray ArrayInt2(10); // третий объект класса с массивом из 10 элементов
	cout << "Array ArrayInt2: ";
	ArrayInt2.showData();
	ArrayInt2 = ArrayInt; // копируем массив из ArrayInt в ArrayInt3
	cout << "Array ArrayInt2 after copy: \n";
	ArrayInt2.showData();

	return 0;
}
