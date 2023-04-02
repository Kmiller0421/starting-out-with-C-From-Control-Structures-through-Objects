#include <iostream>
#include <cmath>  //Use pow() function
using namespace std;

//Function Prototype
double fallingDistance(double);  //A Value-Returning Function

int main()
{
	//Declaration Variables
	double d, time;

	cout << "Falling Distance Formula: (1/2gt^2)\n";
	cout << "\nFalling Distance passing 1 - 10 as arguments\n";
	cout << "-----------------------------------------------\n";

	for (int count = 1; count <= 10; count++)   //Iterate 1 through 10
	{
		d = fallingDistance(count);             //count argument passes through fallingDistance Function

		cout << count << "\t\t" << d << endl;
	}

	return 0;
}

/*Function Defintion / Pass time argument into fallingDistance function /
Calculate the distance / Return the distance value back to the main function*/
double fallingDistance(double t)
{
	double d;

	//Calculate falling distance
	d = (0.5 * 9.8 * pow(t, 2)); 

	return d;  //Retrun value back to main function
}