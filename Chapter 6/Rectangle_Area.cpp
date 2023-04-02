#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototypes
double getWidth(double);           //A Value - Returning Function
double getLength(double);          //A Value - Returning Function
double getArea(double, double);    //A Value - Returning Function

void displayData(double);          /*Does not have a return value and
								   terminates once it displays the data*/

int main()
{
	//Declaration Variables
	double width{},
		   length{},
		   area;

	/*Each function returns a value back to "int main()" and assign
	the value to width, length and area in "int main()"*/
	width = getWidth(width);
	length = getLength(length);
	area = getArea(width, length);
	
	displayData(area);

	return 0;
}

//Function Definition / Ask user for width of rectangle
double getWidth(double width)
{
	cout << "Enter in width: ";
	cin >> width;
	
	return width; //Return value back to main function
}

//Function Definition / Ask user for length of rectangle
double getLength(double length)
{
	cout << "Enter in length: ";
	cin >> length;
	
	return length; //Return value back to main function
}

//Function Definition / Calculate the area of the rectangle (width * length)
double getArea(double width, double length)
{
	double area;
	
	area = width * length;
	
	return area; //Return value back to main function
}

//Function Definition / Display result to user 
void displayData(double area)
{
	cout << fixed << setprecision(2);
	cout << "Area of Rectangle: " << area;

	//Function Terminates or ends
}