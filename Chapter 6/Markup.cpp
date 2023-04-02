#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototype / A value-returning function 
double calculateRetail(double, double);

int main()
{
	//Declaration variable
	double wholeSale, 
		   markUp, 
		   retail;

	//Prompt user to enter in whole sale and markup 
	cout << "Enter in whole sale: ";
	cin >> wholeSale;
	cout << "Enter in mark up: ";
	cin >> markUp;

	//Input validation for whole sale
	while (wholeSale < 0)
	{
		cout << "\n\aWhole Sale Error!!! Type in a postive value: ";
		cin >> wholeSale;
	}

	//Input validation for markup
	while (markUp < 0)
	{
		cout << "\n\aMark Up Error!!! Type in a postive value: ";
		cin >> markUp;
		cout << endl;
	}

	//Assign value to function call
	retail = calculateRetail(wholeSale, markUp);

	cout << fixed << setprecision(2) << showpoint;
	cout << "Retail Price: " << "$" << retail;
	return 0;
}

//Function Definition / Returning a Value From a Function
double calculateRetail(double num1, double num2)
{
	double retail;
	return retail = num1 * num2 / 100 + num1;
}