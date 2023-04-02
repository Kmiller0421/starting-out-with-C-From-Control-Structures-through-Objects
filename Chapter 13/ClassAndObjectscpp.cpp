//This program demonstrates a simple class
#include <iostream>
using namespace std;

// Rectangle class declaration
class Rectangle
{
	private:                      // Can only be called by or accessed by functions that are members of the class
		double width;
		double length;
	public:                       // Can be accessed by functions outside of the class
		void setWidth(double);
		void setLength(double);
		double getWidth() const;
		double getLength() const;
		double getArea() const;
};

// setWidth assigns a value to the width member
void Rectangle::setWidth(double w)
{
	width = w;	
}

// setLength assigns a value to the length member
void Rectangle::setLength(double len)
{
	length = len;
}

// getWidth returns the value in the width member
double Rectangle::getWidth() const
{
	return width;
}

// getLength returns the value in the length member
double Rectangle::getLength() const
{
	return length;
}

// getArea returns the product of width times length
double Rectangle::getArea() const
{
	return width * length;
}

// Main function
int main()
{
	Rectangle box;     // Define an instance of the Rectangle class
	double rectWidth;  // Local variable for width
	double rectLength; // Local variable for length

	// Prompt user to type in width and length
	cout << "This program will calculate the area of a\n";
	cout << "rectangle. what is the width? ";
	cin >> rectWidth;
	cout << "What is the length? ";
	cin >> rectLength;

	// Store the width and length of the rectangle
	box.setWidth(rectWidth);
	box.setLength(rectLength);

	// Display the results of the rectangle
	cout << "Here is the rectangle's data:\n";
	cout << "Width: " << box.getWidth() << endl;
	cout << "Length: " << box.getLength() << endl;
	cout << "Area: " << box.getArea() << endl;
	
	return 0;
}