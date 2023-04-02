#include <iostream>
using namespace std;

//Function Prototypes
int getNumOfAccidents(int&, int&, int&, int&, int&);       //A Value-Returning Function / Pass by Reference
void findLowest(int, int, int, int, int);                  //Void Function

int main()
{
	//Declaration Variables
	int north,
		south,
		east,
		west,
		central;

	//Call Functions
	getNumOfAccidents(north, south, east, west, central);
	findLowest(north, south, east, west, central);
}

/*Function Definition / Prompt user to enter in # of accidents for each region /
Input vaildation for each region / Pass by reference to "int main()" function*/
int getNumOfAccidents(int& north, int& south, int& east, int& west, int& central)
{
	cout << "North Region\n";
	cout << "Enter in number of accidents: ";
	cin >> north;

	cout << "\nSouth Region\n";
	cout << "Enter in number of accidents: ";
	cin >> south;

	cout << "\nEast Region\n";
	cout << "Enter in number of accidents: ";
	cin >> east;

	cout << "\nWest Region\n";
	cout << "Enter in number of accidents: ";
	cin >> west;

	cout << "\nCentral Region\n";
	cout << "Enter in number of accidents: ";
	cin >> central;

	//Input validation for North region
	while (north < 0)
	{
		cout << "\nNorth Input Invalid! Try again: ";
		cin >> north;
	}

	//Input validation for South region
	while (south < 0)
	{
		cout << "\nSouth Input Invalid! Try again: ";
		cin >> south;
	}

	//Input validation for East region
	while (east < 0)
	{
		cout << "\nEast Input Invalid! Try again: ";
		cin >> east;
	}

	//Input validation for West region
	while (west < 0)
	{
		cout << "\nWest Input Invalid! Try again: ";
		cin >> west;
	}

	//Input validation for Central region
	while (central < 0)
	{
		cout << "\nCentral Input Invalid! Try again: ";
		cin >> central;
	}

	return north, south, east, west, central;  //Return values to main function

}

/*Function Definition / Grab values from getNumOfAccidents() and Pass by Reference
to findLowest() function / Prints lowest number of accidents from a region*/
void findLowest(int north, int south, int east, int west, int central)
{
	if (north < south && north < east && north < west && north < central)
	{
		cout << "\nLowest automoblie accidents\n";
		cout << "North Region: " << north;
	}

	if (south < north && south < east && south < west && south < central)
	{
		cout << "\nLowest automoblie accidents\n";
		cout << "South Region: " << south;
	}

	if (east < north && east < south && east < west && east < central)
	{
		cout << "\nLowest automoblie accidents\n";
		cout << "East Region: " << east;
	}

	if (west < north && west < south && west < east && west < central)
	{
		cout << "\nLowest automoblie accidents\n";
		cout << "West Region: " << west;
	}

	if (central < north && central < south && central < east && central << west)
	{
		cout << "\nLowest automoblie accidents\n";
		cout << "Central Region: " << central;
	}

}