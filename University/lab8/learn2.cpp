#include <iostream>
#include <conio.h>

using namespace std;

template<class type>
class Arr
{
protected:
	type k;
	int lenght,l;
	float n;
	type mas[100];
public:
	Arr()
	{
	lenght=5;
	for(l=0;l<lenght;l++)
	 {
	 mas[l]=0;
	 }
	n=0;
	k=0;

	}
	

	void func()
	{
	 int i;
	 for(i=0;i<lenght;i++)
	 {
		k+=mas[i];
	 }
	 n=float(k)/lenght;

	 for(i=0;i<lenght;i++)
	 {
	 if(mas[i]>n)
	 {
	  mas[i]=n;
	 }
	 }
     }

	void cout_arr()
	{
	for(int i=0;i<lenght;i++)
	 {
		cout<< mas[i]<<"\t";
	 }
	cout<<endl;
	}

	void cin_arr()
	{
	 cout<<"Enter size array: ";
	 cin>>lenght;
	 cout<<"Enter array: ";
	for(int i=0;i<lenght;i++)
	 {
		cin>> mas[i];
	 }
	}
	
~Arr(){}
};

int main()
{
	setlocale (LC_CTYPE, "ukr");
	
	Arr<float> ob;
    ob.cin_arr();
	ob.cout_arr();
	ob.func();
	ob.cout_arr();
	
	system("pause");
	return 0;
}