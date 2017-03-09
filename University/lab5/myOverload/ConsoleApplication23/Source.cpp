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
// Main function for the program
int main()
{
	Box Box1; // Declare Box1 of type Box
	Box Box2; // Declare Box2 of type Box
	Box Box3; // Declare Box3 of type Box
	double volume = 0.0; // Store the volume of a box here
						 // box 1 specification
	Box1.setLength(6.0);
	Box1.setBreadth(7.0);
	Box1.setHeight(5.0);
	// box 2 specification
	Box2.setLength(12.0);
	Box2.setBreadth(13.0);
	Box2.setHeight(10.0);
	// volume of box 1
	volume = Box1.getVolume();
	cout << "Volume of Box1 : " << volume << endl;
	// volume of box 2
	volume = Box2.getVolume();
	cout << "Volume of Box2 : " << volume << endl;
	
	
	// multiply two object as follows:
	Box3 = Box1 * Box2;
	// volume of box 3
	volume = Box3.getVolume();
	cout << " \" * \" Volume of Box3 : " << volume << endl;

	// divide two object as follows:
	Box3 = Box1 / Box2;

	// volume of box 3
	volume = Box3.getVolume();
	cout << " \" / \" Volume of Box3 : " << volume << endl;

	// overloaded prefix -- operator
	cout << "length = " << Box1.getLength() << endl;
	Box3 = --Box1;
	volume = Box3.getLength();
	cout << "overloaded prefix -- operator Box3 = --Box1:  "
		<< volume << endl;

	// overloaded postfix -- operator
	cout << "length = " << Box1.getLength() << endl;
	Box3 = Box1--;
	volume = Box3.getLength();
	cout << "overloaded postfix -- operator Box3 = Box1--:  "
		<< volume << endl;

	// overloaded == operator
	if (Box1.getLength() == Box2.getLength())
		cout << "overloaded == operator - false " << endl;
	else
	{
		cout << "overloaded == operator - true" << endl;
	}
	return 0;
}