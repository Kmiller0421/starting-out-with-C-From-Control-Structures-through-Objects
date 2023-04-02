#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int num_monkeys = 3, num_days = 5;    //Size declarator
	double monkey_data[num_monkeys][num_days];  //ROWS and COLS
	int least, greatest;
	double total = 0;
	double average;
	int monk, days;     //monk means Monkey

	//Prompts the user to type the amount of food eaten and checks for invalid number
	for (monk = 0; monk < num_monkeys; monk++)
	{
		for (days = 0; days < num_days; days++)
		{
			cout << "Enter amount of food eaten by monkey " << (monk + 1);
			cout << ", Day " << (days + 1) << ": ";
			cin >> monkey_data[monk][days];

			while (monkey_data[monk][days] < 0)
			{
				cout << "The number you have entered is invalid. Enter in a positive number: ";
				cin >> monkey_data[monk][days];
			}
		}
		cout << endl;
	}

	//Nested loop to add all the elements
	for (monk = 0; monk < num_monkeys; monk++)
	{
		for (days = 0; days < num_days; days++)     
			total += monkey_data[monk][days];
	}

	//Average eaten from all 3 monkeys
	average = total / num_days;
	
	//Least amount of food eaten
	for (monk = 0; monk < num_monkeys; monk++)
	{
		least = monkey_data[0][0];
		for (days = 1; days < num_days; days++)
			if (monkey_data[monk][days] < least)
				least = monkey_data[monk][days];
	}

	//Greatest amount of food eaten
	for (monk = 0; monk < num_monkeys; monk++)
	{
		greatest = monkey_data[0][0];
		for (days = 1; days < num_days; days++)
			if (monkey_data[monk][days] > greatest)
			greatest = monkey_data[monk][days];
	}
	


	cout << fixed << showpoint << setprecision(2);
	cout << "Average amount eaten from all three monkeys: " << average << endl;
	cout << "Greatest amount of food eaten: " << greatest << endl;
	cout << "Least amount of food eaten: " << least << endl;

	return 0;
}