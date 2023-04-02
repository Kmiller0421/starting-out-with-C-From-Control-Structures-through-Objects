#include <iostream>
#include <iomanip>
using namespace std;

struct MonthlyBudget
{
	double Housing,
		   Utilites,
		   Household_Expenses,
		   Transportation,
		   Food,
		   Medical,
		   Insurance,
		   Entertainment,
		   Clothing,
		   Miscellaneous;
};

//Function Prototype
void User_Spent(MonthlyBudget&);
void DisplayData(MonthlyBudget);

int main()
{

	MonthlyBudget User_Spendings;

	//Call Function
	User_Spent(User_Spendings);
	DisplayData(User_Spendings);

	return 0;
}

//Function Definition
void User_Spent(MonthlyBudget &mb)
{
	cout << "Enter in housing spendings: $";
	cin >> mb.Housing;
	cout << "Enter in utility spendings: $";
	cin >> mb.Utilites;
	cout << "Enter in household expense spendings: $";
	cin >> mb.Household_Expenses;
	cout << "Enter in transportation spendings: $";
	cin >> mb.Transportation;
	cout << "Enter in food spendings: $";
	cin >> mb.Food;
	cout << "Enter in medical spendings: $";
	cin >> mb.Medical;
	cout << "Enter in insurance spendings: $";
	cin >> mb.Insurance;
	cout << "Enter in entertainment spendings: $";
	cin >> mb.Entertainment;
	cout << "Enter in clothing spendings: $:";
	cin >> mb.Clothing;
	cout << "Enter in miscellaneous spendings: $";
	cin >> mb.Miscellaneous;
}

//Function Definition
void DisplayData(MonthlyBudget mb)
{
	cout << "\nMonthly Budgeting Report";
	cout << "\n-------------------------------------";

	cout << endl;

	cout << fixed << setprecision(2) << showpoint;

	if (mb.Housing <= 500.00)
	{
		cout << "Housing amount: Under $" << mb.Housing << endl;
	}
	else
	{
		cout << "Housing amount: Over $" << mb.Housing << endl;
	}

	if (mb.Utilites <= 150.00)
	{
		cout << "Utilites amount: Under $" << mb.Utilites << endl;
	}
	else
	{
		cout << "cout << Utilites amount : Over $" << mb.Utilites << endl;
	}

	if (mb.Household_Expenses <= 65.00)
	{
		cout << "Household expense amount: Under $" << mb.Household_Expenses << endl;
	}
	else
	{
		cout << "Household expense amount: Over $" << mb.Household_Expenses << endl;
	}
	
	if (mb.Transportation <= 50.00)
	{
		cout << "Transportation amount: Under $" << mb.Transportation << endl;
	}
	else
	{
		cout << "Transportation amount: Over $" << mb.Transportation << endl;
	}

	if (mb.Food <= 250.00)
	{
		cout << "Food amount: Under $" << mb.Food << endl;
	}
	else
	{
		cout << "Food amount: Over $" << mb.Food << endl;
	}

	if (mb.Medical <= 30.00)
	{
		cout << "Medical amount: Under $" << mb.Medical << endl;
	}
	else
	{
		cout << "Medical amount: Over $" << mb.Medical << endl;
	}

	if (mb.Insurance <= 100.00)
	{
		cout << "Insurance amount: Under $" << mb.Insurance << endl;
	}
	else
	{
		cout << "Insurance amount: Over $" << mb.Insurance << endl;
	}

	if (mb.Entertainment <= 150.00)
	{
		cout << "Entertainment amount: Under $" << mb.Entertainment << endl;
	}
	else
	{
		cout << "Entertainment amount: Over $" << mb.Entertainment << endl;
	}

	if (mb.Clothing <= 75.00)
	{
		cout << "Clothing amount: Under $" << mb.Clothing << endl;
	}
	else
	{
		cout << "Clothing amount: Over $" << mb.Clothing << endl;
	}

	if (mb.Miscellaneous <= 50.00)
	{
		cout << "Miscellaneous amount: Under $" << mb.Miscellaneous << endl;
	}
	else
	{
		cout << "Miscellaneous amount: Over $" << mb.Miscellaneous << endl;
	}

	double totalMonthly;

	totalMonthly = mb.Housing + mb.Utilites + mb.Household_Expenses + mb.Transportation
		         + mb.Food + mb.Medical + mb.Insurance + mb.Entertainment + mb.Clothing
		         + mb.Miscellaneous;

	
	if (totalMonthly <= 1420.00)
	{
		cout << "Entire monthly budget: Under $" << totalMonthly << endl;
	}
	else
	{
		cout << "Entire monthly budget: Over $" << totalMonthly << endl;
	}


}
