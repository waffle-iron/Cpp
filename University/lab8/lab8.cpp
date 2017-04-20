#include <iostream>

using namespace std;

template <class T>
class Arr
{
protected:
	T k;
	int lenght,l,n;
	T mas[100];
public:
	Arr()
	{
	lenght=5;
	for(l=0; l<lenght; l++)
	 {
	 mas[l]=0;
	 }
	n = 1;
	}
	

	void func()
	{
	 int i;
	 for(i=0; i < lenght; i++)
	 {
		if (mas[i] < mas[i + 1]) 
		{ 
			n++;
		}
		else if ( mas[i] >= mas[i + 1] )
		{
			i++;
		}
	 }
	 cout << "Number is:" << n <<endl;
     }

	void cin_arr()
	{
	 cout<<"Enter size array: ";
	 cin>>lenght;
	 cout<<"\nEnter array: ";
	for(int i=0;i<lenght;i++)
	 {
		cin >> mas[i];
	 }
	}
	
~Arr(){}

};

int main()
{	
	Arr<int> ob;
    ob.cin_arr();
	ob.func();

	Arr<char> ob2;
	ob2.cin_arr();
	ob2.func();
	return 0;
}