#include <iostream>
#include "Source.h"
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