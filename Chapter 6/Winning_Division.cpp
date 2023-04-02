#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototypes
double getSales(double&, double&, double&, double&);        //A Value-Returning Function / Passing by Reference
void findHighest(double, double, double, double);       //Void Function / Passing by Reference

int main()
{
	//Declaration variables
	double NE{}, SE{}, NW{}, SW{};

	//Call functions
	getSales(NE, SE, NW, SW);
	findHighest(NE, SE, NW, SW);
	
	return 0;
}

//Function Definition / Ask user to enter each divisions quarter sales
double getSales(double& NE, double& SE, double& NW, double& SW)
{
	cout << "Enter in Northeast sales: $";
	cin >> NE;
	cout << "Enter in Southeast sales: $";
	cin >> SE;
	cout << "Enter in Northwest sales: $";
	cin >> NW;
	cout << "Enter in Southwest sales: $";
	cin >> SW;

	//Input validation for Northeast division
	while (NE < 0)
	{
		cout << "Input Invalid Northeast! Try agian: ";
		cin >> NE;

		cout << endl;
	}

	//Input valdiation for Southeast division
	while (SE < 0)
	{
		cout << "Input Invalid Southeast! Try agian: ";
		cin >> SE;

		cout << endl;
	}

	//Input validation for Northwest division
	while (NW < 0)
	{
		cout << "Input Invalid Northwest! Try agian: ";
		cin >> NW;

		cout << endl;
	}

	//Input validation for Southwest division
	while (SW < 0)
	{
		cout << "Input Invalid Southwest! Try agian: ";
		cin >> SW;

		cout << endl;
	}

	return NE, SE, NW, SW;  //Return to main function
}

/*Function Definition / Grab values from getSale() and Pass by Reference
to findHighest() function / Print higest grossing division*/
void findHighest(double NE, double SE, double NW, double SW)
{
	cout << fixed << setprecision(2);

	if (NE > SE && NE > NW && NE > SW)
	{
		cout << "\nHighest-grossing division\n";
		cout << "Northeast: $" << NE;
	}

	if (SE > NE && SE > NW && SE > SW)
	{
		cout << "\nHighest-grossing division\n";
		cout << "Southeast: $" << SE;
	}

	if (NW > NE && NW > SE && NE > SW)
	{
		cout << "\nHighest-grossing division\n";
		cout << "Northwest: $" << NW;
	}

	if (SW > NE && SW > SE && SW > NW)
	{
		cout << "\nHighest-grossing division\n";
		cout << "Southwest: $" << SW;
	}
}