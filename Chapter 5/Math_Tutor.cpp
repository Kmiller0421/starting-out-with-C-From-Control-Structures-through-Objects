#include <iostream>	
#include <iomanip>
using namespace std;

int main()
{
	int choice;
	double user_num1{},
		   user_num2{};
	double total;
	char again{};

	do
	{
		cout << "Math Tutor" << endl;
		cout << "Please choose the following:" << endl;
		cout << "1) Addition" << endl;
		cout << "2) Subtraction" << endl;
		cout << "3) Multiplication" << endl;
		cout << "4) Division" << endl;
		cout << "Enter in choice: ";
		cin >> choice;

		while (choice < 1 || choice > 4)
		{
			cout << "Input Invalid!!! Try again: ";
			cin >> choice;
		}

		switch (choice)
		{
		case 1:
			cout << "Enter in the first number: ";
			cin >> user_num1;
			cout << "Enter in the second number: ";
			cin >> user_num2;
			total = user_num1 + user_num2;
			cout << user_num1 << " + " << user_num2 << " = " << total;
			break;
		case 2:
			cout << "Enter in the first number: ";
			cin >> user_num1;
			cout << "Enter in the second number: ";
			cin >> user_num2;
			total = user_num1 - user_num2;
			cout << user_num1 << " - " << user_num2 << " = " << total;
			break;
		case 3:
			cout << "Enter in the first number: ";
			cin >> user_num1;
			cout << "Enter in the second number: ";
			cin >> user_num2;
			total = user_num1 * user_num2;
			cout << user_num1 << " * " << user_num2 << " = " << total;
			break;
		case 4:
			cout << "Enter in the first number: ";
			cin >> user_num1;
			cout << "Enter in the second number: ";
			cin >> user_num2;
			total = user_num1 / user_num2;
			cout << user_num1 << " / " << user_num2 << " = " << total;
			break;
		}

		cout << endl;

		cout << "Would you like you try again(Y/N): ";
		cin >> again;

	}
	while (again == 'Y' || again == 'y');

	cout << "See you later!!!!";

	return 0;
}