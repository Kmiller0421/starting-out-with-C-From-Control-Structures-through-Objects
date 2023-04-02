#include <iostream>
using namespace std;

// Class declaration
class Date
{
public:
	int month;
	int day;
	int year;
};

int main()
{
	Date myobj;

	const int months = 12;
	string month_12[months] = { "January", "Feburary", "March", "April", "May", "June", "July", "August",
							   "September", "October", "November", "December" };
	string s_month;

	cout << "Enter in month(m/d/y): ";
	cin >> myobj.month;

	//Input Validation
	while (myobj.month > 12 || myobj.month < 1)
	{
		cout << "Invalid Month!!! Try again: ";
		cin >> myobj.month;
	}

	cout << "Enter in day(m/d/y): ";
	cin >> myobj.day;

	//Input Validation 
	while (myobj.day > 31 || myobj.day < 1)
	{
		cout << "Invalid Day!!! Try again: ";
		cin >> myobj.day;
	}

	cout << "Enter in year(m/d/y): ";
	cin >> myobj.year;

 
	if (myobj.month == 1)
	{
		s_month = month_12[0];
	}
	else if (myobj.month == 2)
	{
		s_month = month_12[1];
	}
	else if (myobj.month == 3)
	{
		s_month = month_12[2];
	}
	else if (myobj.month == 4)
	{
		s_month = month_12[3];
	}
	else if (myobj.month == 5)
	{
		s_month = month_12[4];
	}
	else if (myobj.month == 6)
	{
		s_month = month_12[5];
	}
	else if (myobj.month == 7)
	{
		s_month = month_12[6];
	}
	else if (myobj.month == 8)
	{
		s_month = month_12[7];
	}
	else if (myobj.month == 9)
	{
		s_month = month_12[8];
	}
	else if (myobj.month == 10)
	{
		s_month = month_12[9];
	}
	else if (myobj.month == 11)
	{
		s_month = month_12[10];
	}
	else
	{
		s_month = month_12[11];
	}

    //Displays the date out in three different forms
	cout << "\n";
	cout << myobj.month << "/" << myobj.day << "/" << myobj.year << endl;
	cout << s_month << " " << myobj.day << ", " << myobj.year << "\n";
	cout << myobj.day << " " << s_month << " " << myobj.year; 



	return 0;
}