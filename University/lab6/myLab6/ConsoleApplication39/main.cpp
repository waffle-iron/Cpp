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


	/*���������� ��������� ���������*/
	MyArray ArrayInt(5);    //������� ������ ������ � ���������� � ���� ������
	ArrayInt[0] = 1;
	ArrayInt[1] = 5;
	ArrayInt[2] = 2;
	ArrayInt[3] = 6;
	ArrayInt[4] = 8;

	MyArray ArrayInt2(10); // ������ ������ ������ � �������� �� 10 ���������
	cout << "Array ArrayInt2: ";
	ArrayInt2.showData();
	ArrayInt2 = ArrayInt; // �������� ������ �� ArrayInt � ArrayInt3
	cout << "Array ArrayInt2 after copy: \n";
	ArrayInt2.showData();

	return 0;
}
