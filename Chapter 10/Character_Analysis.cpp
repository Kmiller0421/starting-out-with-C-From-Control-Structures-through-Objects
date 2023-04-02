#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
	//Input from the file
	ifstream inputFile;

	//Holds the # amount uppercase and lowercase letters.
	//Also, holds the # of digits.
	int upper = 0;
	int lower = 0;
	int digit = 0;
	char ch;

	//Open the .txt file
	inputFile.open("Text.txt");
	
	//Test if file opens
	if (!inputFile)
	{
		cout << "File open failure!";
	}

	//Loop through the file and calculate the amount of uppercase and lowercase letters.
	//Also, calculate the # of digits.
	while (inputFile)
	{
		inputFile.get(ch);
		if (isupper(ch))
		{
			upper = upper + 1;
		}
		else if (islower(ch))
		{
			lower = lower + 1;
		}
		else if (isdigit(ch))
		{
			digit = digit + 1;
		}
	}

	//Output the results to the user
	cout << "# of Uppercases = " << upper << endl;
	cout << "# of Lowercases = " << lower << endl;
	cout << "# of Digits = " << digit << endl;

	//Close file
	inputFile.close();

	return 0;
}