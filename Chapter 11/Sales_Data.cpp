#include <iostream>
#include <iomanip>
using namespace std;

//Four structure divisions (East, West, North, and South)
struct EastDivision
{
	double firstQuarter,
		secondQuarter,
		thirdQuarter,
		fourthQuarter,
		totalAnnual,
		averageAnnual;
};
struct WestDivision
{
	double firstQuarter,
		secondQuarter,
		thirdQuarter,
		fourthQuarter,
		totalAnnual,
		averageAnnual;
};
struct NorthDivision
{
	double firstQuarter,
		secondQuarter,
		thirdQuarter,
		fourthQuarter,
		totalAnnual,
		averageAnnual;
};
struct SouthDivision
{
	double firstQuarter,
		secondQuarter,
		thirdQuarter,
		fourthQuarter,
		totalAnnual,
		averageAnnual;
};

//Function Prototypes
void DisplayData_1(EastDivision);
void DisplayData_2(WestDivision);
void DisplayData_3(NorthDivision);
void DisplayData_4(SouthDivision);

int main()
{
	EastDivision division_1{};
	WestDivision division_2{};
	NorthDivision division_3{};
	SouthDivision division_4{};

	//Call Functions
	DisplayData_1(division_1);
	DisplayData_2(division_2);
	DisplayData_3(division_3);
	DisplayData_4(division_4);


	return 0;
}

void DisplayData_1(EastDivision East)
{

	cout << "East Divison";
	cout << "\n-----------------------------";

	cout << "\nEnter in first quarter sales: $";
	cin >> East.firstQuarter;

	cout << "Enter in second quarter sales: $";
	cin >> East.secondQuarter;

	cout << "Enter in third quarter sales: $";
	cin >> East.thirdQuarter;

	cout << "Enter in fourth quarter sales: $";
	cin >> East.fourthQuarter;

	//Input Validation
	do
	{
		if (East.firstQuarter < 0)
		{
			cout << "Input Invalid! Please try again(First Quarter): ";
			cin >> East.firstQuarter;
		}
		else if (East.secondQuarter < 0)
		{
			cout << "Input Invalid! Please try again(Second Quarter): ";
			cin >> East.secondQuarter;
		}
		else if (East.thirdQuarter < 0)
		{
			cout << "Input Invalid! Please try again(Third Quarter): ";
			cin >> East.thirdQuarter;
		}
		else if (East.fourthQuarter < 0)
		{
			cout << "Input Invalid! Please try again(Fourth Quarter): ";
			cin >> East.fourthQuarter;
		}
	} while (East.firstQuarter < 0 || East.secondQuarter < 0 || East.thirdQuarter < 0 || East.fourthQuarter < 0);

	//Calculate total and average annual
	East.totalAnnual = East.firstQuarter + East.secondQuarter + East.thirdQuarter + East.fourthQuarter;
	East.averageAnnual = East.totalAnnual / 4;

	cout << endl;

	cout << fixed << setprecision(2) << showpoint;
	cout << "East Division Total Annual: $" << East.totalAnnual << endl;
	cout << "East Divison Average Annual: $" << East.averageAnnual << endl;
}

void DisplayData_2(WestDivision West)
{
	cout << endl;
	cout << "\nWest Divison";
	cout << "\n----------------------------";

	cout << "\nEnter in first quarter sales: $";
	cin >> West.firstQuarter;

	cout << "Enter in second quarter sales: $";
	cin >> West.secondQuarter;

	cout << "Enter in third quarter sales: $";
	cin >> West.thirdQuarter;

	cout << "Enter in fourth quarter sales: $";
	cin >> West.fourthQuarter;

	//Input Validation
	do
	{
		if (West.firstQuarter < 0)
		{
			cout << "Input Invalid! Please try again(First Quarter): ";
			cin >> West.firstQuarter;
		}
		else if (West.secondQuarter < 0)
		{
			cout << "Input Invalid! Please try again(Second Quarter): ";
			cin >> West.secondQuarter;
		}
		else if (West.thirdQuarter < 0)
		{
			cout << "Input Invalid! Please try again(Third Quarter): ";
			cin >> West.thirdQuarter;
		}
		else if (West.fourthQuarter < 0)
		{
			cout << "Input Invalid! Please try again(Fourth Quarter): ";
			cin >> West.fourthQuarter;
		}
	} while (West.firstQuarter < 0 || West.secondQuarter < 0 || West.thirdQuarter < 0 || West.fourthQuarter < 0);

	//Calculate total and average annual
	West.totalAnnual = West.firstQuarter + West.secondQuarter + West.thirdQuarter + West.fourthQuarter;
	West.averageAnnual = West.totalAnnual / 4;

	cout << endl;

	cout << fixed << setprecision(2) << showpoint;
	cout << "West Division Total Annual: $" << West.totalAnnual << endl;
	cout << "West Divison Average Annual: $" << West.averageAnnual << endl;
}

void DisplayData_3(NorthDivision North)
{
	cout << endl;
	cout << "\nNorth Divison";
	cout << "\n------------------------------";

	cout << "\nEnter in first quarter sales: $";
	cin >> North.firstQuarter;

	cout << "Enter in second quarter sales: $";
	cin >> North.secondQuarter;

	cout << "Enter in third quarter sales: $";
	cin >> North.thirdQuarter;

	cout << "Enter in fourth quarter sales: $";
	cin >> North.fourthQuarter;

	//Input Validation
	do
	{
		if (North.firstQuarter < 0)
		{
			cout << "Input Invalid! Please try again(First Quarter): ";
			cin >> North.firstQuarter;
		}
		else if (North.secondQuarter < 0)
		{
			cout << "Input Invalid! Please try again(Second Quarter): ";
			cin >> North.secondQuarter;
		}
		else if (North.thirdQuarter < 0)
		{
			cout << "Input Invalid! Please try again(Third Quarter): ";
			cin >> North.thirdQuarter;
		}
		else if (North.fourthQuarter < 0)
		{
			cout << "Input Invalid! Please try again(Fourth Quarter): ";
			cin >> North.fourthQuarter;
		}
	} while (North.firstQuarter < 0 || North.secondQuarter < 0 || North.thirdQuarter < 0 || North.fourthQuarter < 0);

	//Calculate total and average annual
	North.totalAnnual = North.firstQuarter + North.secondQuarter + North.thirdQuarter + North.fourthQuarter;
	North.averageAnnual = North.totalAnnual / 4;

	cout << endl;

	cout << fixed << setprecision(2) << showpoint;
	cout << "North Division Total Annual: $" << North.totalAnnual << endl;
	cout << "North Divison Average Annual: $" << North.averageAnnual << endl;
}

void DisplayData_4(SouthDivision South)
{
	cout << endl;
	cout << "\nSouth Divison";
	cout << "\n------------------------------";

	cout << "\nEnter in first quarter sales: $";
	cin >> South.firstQuarter;

	cout << "Enter in second quarter sales: $";
	cin >> South.secondQuarter;

	cout << "Enter in third quarter sales: $";
	cin >> South.thirdQuarter;

	cout << "Enter in fourth quarter sales: $";
	cin >> South.fourthQuarter;

	//Input Validation
	do
	{
		if (South.firstQuarter < 0)
		{
			cout << "Input Invalid! Please try again(First Quarter): ";
			cin >> South.firstQuarter;
		}
		else if (South.secondQuarter < 0)
		{
			cout << "Input Invalid! Please try again(Second Quarter): ";
			cin >> South.secondQuarter;
		}
		else if (South.thirdQuarter < 0)
		{
			cout << "Input Invalid! Please try again(Third Quarter): ";
			cin >> South.thirdQuarter;
		}
		else if (South.fourthQuarter < 0)
		{
			cout << "Input Invalid! Please try again(Fourth Quarter): ";
			cin >> South.fourthQuarter;
		}
	} while (South.firstQuarter < 0 || South.secondQuarter < 0 || South.thirdQuarter < 0 || South.fourthQuarter < 0);

	//Calculate total and average annual
	South.totalAnnual = South.firstQuarter + South.secondQuarter + South.thirdQuarter + South.fourthQuarter;
	South.averageAnnual = South.totalAnnual / 4;

	cout << endl;

	cout << fixed << setprecision(2) << showpoint;
	cout << "South Division Total Annual: $" << South.totalAnnual << endl;
	cout << "South Divison Average Annual: $" << South.averageAnnual << endl;
}