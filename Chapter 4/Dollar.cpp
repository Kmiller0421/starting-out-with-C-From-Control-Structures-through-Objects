/**********************************************************************************************************************************************
Program Name: Change for a Dollar Game
Programmer: Kaleb Miller
Program Function: Get the user to enter the number of coins required to make exactly one dollar
Inputs: pennies, nickels, dimes, quarters
Outputs: total
Calculations used: (pennies *= 0.01), (nickels *= 0.05), (dimes *= 0.10), (quarters *= 0.25)
************************************************************************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double pennies,
		   nickels,
		   dimes,
		   quarters,
		   total;

	//Prompt
	cout << "Enter in number of pennies: ";
	cin >> pennies;
	cout << "Enter in number of nickels: ";
	cin >> nickels;
	cout << "Enter in number of dimes: ";
	cin >> dimes;
	cout << "Enter in number of quarters: ";
	cin >> quarters;

	//Calculate how much the change is worth
	pennies *= 0.01;
	nickels *= 0.05;
	dimes *= 0.10;
	quarters *= 0.25;

	//Calculate total amount of change
	total = pennies + nickels + dimes + quarters;

	cout << fixed << setprecision(2);

	//Conditional Statement
	if (total == 1.00)
	{
		cout << "The amount enter was exactly one dollar\n";
		cout << "Amount: $" << total;
	}
	else if (total > 1.00)
	{
		cout << "The amount entered was more than one dollar\n";
		cout << "Amount: $" << total;
	}
	else
	{
		cout << "The amount entered was less than one dollar\n";
		cout << "Amount: $" << total;
	}

	return 0;
}
