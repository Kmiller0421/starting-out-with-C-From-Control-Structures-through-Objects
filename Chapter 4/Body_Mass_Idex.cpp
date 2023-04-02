/**********************************************************************************************************************************************
Program Name: Body Mass Index
Programmer: Kaleb Miller
Program Function: Calculates your Body Mass Index(BMI)
Inputs: weight, height
Outputs: BMI
Calculations used: (weight * 703 / pow(height, 2))
************************************************************************************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double weight,                  //Hold users weight
		height,                     //Hold users height
		BMI;                        //Hold BMI value

	//Prompt user to enter in their weight and height
	cout << "Enter in your weight(pounds): ";
	cin >> weight;
	cout << "Enter in your height(in): ";
	cin >> height;

	BMI = weight * 703 / pow(height, 2);         //Calculate body mass index (BMI)

	cout << setprecision(2) << fixed;
	cout << "BMI: " << BMI;
	
	cout << endl;

	//Conditional Statement
	if (BMI >= 18.5 && BMI <= 25)
	{
		cout << "Optimal Weight";
	}
	else if (BMI <= 18.5)
	{
		cout << "Underweight";
	}
	else if (BMI >= 25)
	{
		cout << "Overweight";
	}
	
	return 0;
}