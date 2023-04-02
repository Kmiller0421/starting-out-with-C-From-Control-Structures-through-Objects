#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	int j = 0;

	char firstName[12];           //First name array
	char middleName[12];          //Middle name array
	char lastName[12];            //Last name array
	char arranged[24];            //Complete name array

	//Prompt user to enter in their first, middle, and last name
	cout << "Enter in first name: ";
	cin >> firstName;
	cout << "Enter in middle name: ";
	cin >> middleName;
	cout << "Enter in last Name: ";
	cin >> lastName;

	//Copies last name into arranged array
	while (lastName[i] != '\0')
	{
		arranged[j] = lastName[i];
		j++;
		i++;
	}

	arranged[j] = ',';
	j++;

	arranged[j] = ' ';
	j++;

	//Copies first name into arranged array
	i = 0;
	while (firstName[i] != '\0')
	{
		arranged[j] = firstName[i];
		j++;
		i++;
	}

	arranged[j] = ' ';
	j++;

	//Copies middle name into arranged array
	i = 0;
	while (middleName[i] != '\0')
	{
		arranged[j] = middleName[i];
		j++;
		i++;
	}

	arranged[j] = '\0';

	cout << arranged << endl;

	return 0;
}