/****************************************************
Program Function: Display the Roman numeral version 
of that number entered in by the user
****************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Hold user number
	int num;

	//Prompt user to enter in a number
	cout << "Enter in a number: ";
	cin >> num;

	//Input Validation
	while (num < 1 || num > 10)
	{
		cout << "Input Invalid! Enter in a number "
			 << "greater than 1 and less than 10: ";
		cin >> num;
	}

	cout << "Roman Numeral: ";

	//Switch Statement
	switch (num)
	{
	case 1:
		cout << "I";
		break;
	case 2:
		cout << "II";
		break;
	case 3:
		cout << "III";
		break;
	case 4:
		cout << "IV";
		break;
	case 5:
		cout << "V";
		break;
	case 6:
		cout << "VI";
		break;
	case 7:
		cout << "VII";
		break;
	case 8:
		cout << "VIII";
		break;
	case 9:
		cout << "IX";
		break;
	case 10:
		cout << "X";
		break;
	}

	return 0;
}
