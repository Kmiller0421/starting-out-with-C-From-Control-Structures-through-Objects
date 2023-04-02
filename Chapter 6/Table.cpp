#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototype 
double celsius(double);          //A Value-Returning Value

int main()
{
	//Declaration Variables
	double F, C;

	
	for (int F = 0; F <= 20; F++)            //Iterate until 0 is equal to 20
	{
		//Call function
		C = celsius(F);                     //Pass argument into celsius function

		cout << fixed << setprecision(2);

		cout << F << "\t\t" << C << endl;
	}

	return 0;
}

//Function Definition
double celsius(double fahrenheit)
{
	double C;
	
	C = 0.55 * (fahrenheit - 32);           //Calculate Fahrenheit to Celsius

	return C;
}