#include <iostream>

using namespace std;
class Box
{
public:
	double getLength(void)
	{
		return length;
	}
	
	double getVolume(void)
	{
		return length * breadth * height;
	}
	void setLength(double len)
	{
		length = len;
	}
	void setBreadth(double bre)
	{
		breadth = bre;
	}
	void setHeight(double hei)
	{
		height = hei;
	}
	// Overload * operator to multiply two Box objects.
	Box operator * (const Box& b)
	{
		Box box;
		box.length = this->length * b.length;
		box.breadth = this->breadth * b.breadth;
		box.height = this->height * b.height;
		return box;
	}


	// Overload operator to divide two Box objects.
	Box operator / (const Box& b)
	{
		Box box1;
		box1.length = this->length / b.length;
		box1.breadth = this->breadth / b.breadth;
		box1.height = this->height / b.height;
		return box1;
	}

	// overloaded prefix -- operator
	Box operator -- ()
		{
		Box box1;
		box1.length = --length;  // decrement this object
		//box1.breadth = --breadth;
	//	box1.height = --height;
		return box1;
	}

	// overloaded postfix -- operator
	Box operator -- (int)
	{
		Box box1;
		box1.length = --length;  // decrement this object
		box1.breadth = --breadth;
		box1.height = --height;
		return box1;
	}

	// overloaded == operator
	bool operator == (const  Box& b)
	{
		if (length == b.length)
			return true;
		else
		{
			return false;
		}
	}


private:
	double length; // Length of a box
	double breadth; // Breadth of a box
	double height; // Height of a box
};
