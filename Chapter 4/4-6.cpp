/****************************************************
Program Function: Display a message indicating that the
object is to heavy (1,000 newtons) or too light (10 newtons).
****************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double mass,                   //Hold users mass
		   weight;                 //Hold weight value

	//Prompt user to enter in objects mass
	cout << "Enter in the objects mass(kg): ";
	cin >> mass;

	cout << endl;

	weight = mass * 9.8;                       //Calculate its weight in newtons

	cout << fixed << setprecision(2) << showpoint;

	if (weight > 1000)                                 //1,000 newtons
	{
		cout << "Weight: " << weight << endl;
		cout << "This object is to heavy";
	}
	else if (weight < 10)                               //10 newtons
	{
		cout << "Weight: " << weight << endl;
		cout << "This object is to light";
	}
	else
	{
		cout << "Weight: " << weight << endl;
		cout << "This object has the right amount of weight";
	}

	return 0;
}
