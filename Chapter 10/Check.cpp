#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Function Definition
string convertToWords(int number)
{
	string word = "";

	if (number <= 19)
	{
		switch (number)
		{
		case 0:
			word += "";
			break;
		case 1:
			word += "one";
			break;
		case 2:
			word += "two";
			break;
		case 3:
			word += "three";
			break;
		case 4:
			word += "four";
			break;
		case 5:
			word += "five";
			break;
		case 6:
			word += "six";
			break;
		case 7:
			word += "seven";
			break;
		case 8:
			word += "eight";
			break;
		case 9:
			word += "nine";
			break;
		case 10:
			word += "ten";
			break;
		case 11:
			word += "eleven";
			break;
		case 12:
			word += "twelve";
			break;
		case 13:
			word += "thirteen";
			break;
		case 14:
			word += "fourteen";
			break;
		case 15:
			word += "fifteen";
			break;
		case 16:
			word += "sixteen";
			break;
		case 17:
			word += "seventeen";
			break;
		case 18:
			word += "eighteen";
			break;
		case 19:
			word += "nineteen";
			break;
		}
	}
	else 
	{
		switch (number - (number % 10))
		{
		case 20:
			word += "twenty";
			break;
		case 30:
			word += "thirty";
			break;
		case 40:
			word += "forty";
			break;
		case 50:
			word += "fifty";
			break;
		case 60:
			word += "sixty";
			break;
		case 70:
			word += "seventy";
			break;
		case 80:
			word += "eighty";
			break;
		case 90:
			word += "ninety";
			break;
		}
	}
	return word;
}

int main()
{
	//Variables
	string name;
	string AmountWords;
	string CheckAmount;
	string decimal;
	string date;
	string decimalPart;
	double AmountNum;


	//Prompt user to enter name, date, and check amount
	cout << "Enter in name: ";
	cin >> name;
	cout << "Enter in date (mm/dd/yyyy): ";
	cin >> date;
	cout << "Enter in check amount: $";
	cin >> CheckAmount;

	AmountNum = atof(CheckAmount.c_str());

	//Input validation
	while (AmountNum < 0 || AmountNum > 10000)
	{
		cout << "Input Invalid! Enter check amount: $";
		cin >> CheckAmount;
		AmountNum = atof(CheckAmount.c_str());
	}

	cout << setw(48) << "Date: " << date << endl << endl
		<< endl;
	cout << "Pay to the Order of: " << setw(21) << left << name
		<< fixed << setprecision(2) << "$" << AmountNum << endl
		<< endl;

	int inputAmount = (int)AmountNum;
	AmountWords = "";

	do
	{
		if (inputAmount == 0)
		{
			AmountWords.append("");
		}
		else if (inputAmount == 10000)
		{
			AmountWords.append(" Ten thousand ");
			inputAmount = 0;
		}
		else if (inputAmount > 999)
		{
			int n = inputAmount / 1000;
			string str = convertToWords(n);
			AmountWords.append(str);
			AmountWords.append(" thousand ");
			inputAmount = inputAmount % 1000;
		}
		else if (inputAmount > 99)
		{
			int n = inputAmount / 100;
			string str = convertToWords(n);
			AmountWords.append(str);
			AmountWords.append(" hundred ");
			inputAmount = inputAmount % 100;
		}
		else
		{
			string str = convertToWords(inputAmount);
			AmountWords.append(str);
			inputAmount = 0;
		}
	} while (inputAmount > 0);

	decimal = "";
	int flag = CheckAmount.find('.');
	if (flag > -1)
	{
		string sub = CheckAmount.substr(flag + 1, 2);
		int decimal = atoi(sub.c_str());
		
		if (AmountWords.length() != 0)
			decimalPart.append(" and ");

		if (decimal > 0)
		{
			decimalPart.append(sub);
			decimalPart.append(" cents");
		}

	}
	
	AmountWords.append(decimalPart);
	char ch = toupper(AmountWords.at(0));
	AmountWords = ch + AmountWords.substr(1, AmountWords.length());

	cout << AmountWords << endl;

	return 0;

}