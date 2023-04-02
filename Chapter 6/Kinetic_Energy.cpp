#include <iostream>
#include <iomanip>
#include <cmath>          //Used for pow() function
using namespace std;

//Function Prototype
double kineticEnergy(double, double);     //A Value-Returning Function

int main()
{
	//Declaration variables
	double mass,                 //Objects mass(m)
		   velocity,             //Objects velocity(v)
		   result;               //Hold Kinetic energy value

	cout << "Kinetic Energy Formula: KE = (1/2mv^2)\n";
	cout << "Enter in objects mass(m): ";
	cin >> mass;
	cout << "Enter in objects velocity(v): ";
	cin >> velocity;

	//Call Function
	result = kineticEnergy(mass, velocity);    //Pass arguments to kineticEnergy Function

	cout << fixed << setprecision(3);
	cout << "The amount of kinetic energy = "
		 << result;

	return 0;
}

/*Function Defintion / Pass mass and velocity arguments into kineticEnergy function /
Calculate the KE / Return the KE value back to the main function*/
double kineticEnergy(double m, double v)          //m = mass and v = velocity
{
	double KE;

	//Calculate Kinetic Energy
	KE = (0.5 * m * pow(v, 2));
	
	return KE;  //Return value to main function
}