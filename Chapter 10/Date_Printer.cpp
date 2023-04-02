#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Declare variables (Month, Day, Year)
	string mm, dd, yyyy;
	string date_1;

	//Prompt user to enter (mm/dd/yyyy)
	cout << "Enter in date (mm/dd/yyyy): ";
	cin >> date_1;

	//substr Returns a copy of a substring
	mm = date_1.substr(0, 2);
	dd = date_1.substr(3, 2);
	yyyy = date_1.substr(6, 4);

	//Test if mm equals any of the months
	if (mm == "01")
		cout << "January";
	else if (mm == "02")
		cout << "February";
	else if (mm == "03")
		cout << "March";
	else if (mm == "04")
		cout << "April";
	else if (mm == "05")
		cout << "May";
	else if (mm == "06")
		cout << "June";
	else if (mm == "07")
		cout << "July";
	else if (mm == "08")
		cout << "August";
	else if (mm == "09")
		cout << "September";
	else if (mm == "10")
		cout << "October";
	else if (mm == "11")
		cout << "November";
	else if (mm == "12")
		cout << "December";
	else
		cout << "Invalid input!";

	cout << " " << dd << "," << yyyy;
}

