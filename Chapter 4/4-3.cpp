/****************************************************
Program Function: Determines whether the month times
the day is equal to the year.
****************************************************/
#include <iostream>
using namespace std;

int main()
{
	//Hold month, day, and year
	int mm,
		dd,
		yy;

	//Hold mm(month) * dd(day) results
	int result;                                            

	//Prompt user to enter in month, day, and year
	cout << "Enter in a month in numberic form (mm): ";
	cin >> mm;
	cout << "Enter in a month in numeric form (dd): ";
	cin >> dd;
	cout << "Enter in a year in numeric form (yy): ";
	cin >> yy;

	result = mm *= dd;                                                   //Calculate mm(month) * dd(day)

	//Test condition
	if (result == yy)
	{
		cout << "This date is magic";
	}
	else
	{
		cout << "This date is not magic";
	}
	
	return 0;
}
