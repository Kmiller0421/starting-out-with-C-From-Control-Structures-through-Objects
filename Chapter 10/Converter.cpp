#include <iostream>
#include <string>
using namespace std;

//Function Prototype (character pointer)
void MorseCode(char*);

int main()
{
	//Store the users sentence
	char input[101];

	//Prompt user to enter in sentence
	cout << "Enter in a sentence: ";
	cin.getline(input, 101);

	//Iterate through the string turning lowercase letters into uppercase
	for (int i = 0; i <= strlen(input); i++)
	{
		input[i] = toupper(input[i]);
	}

	cout << endl;

	cout << "Morse Code: ";
	MorseCode(input);                       //Call Function

	return 0;
}

//Function Definition
void MorseCode(char* string)
{
	//Iterate through the string seeing if any of the letters equal whats in the sentence
	for (int i = 0; i <= strlen(string); i++)
	{
		if (string[i] == 'A')
			cout << "._ ";
		else if (string[i] == 'B')
			cout << "-... ";
		else if (string[i] == 'C')
			cout << "-.-. ";
		else if (string[i] == 'D')
			cout << "-.. ";
		else if (string[i] == 'E')
			cout << ". ";
		else if (string[i] == 'F')
			cout << "..-. ";
		else if (string[i] == 'G')
			cout << "--. ";
		else if (string[i] == 'H')
			cout << ".... ";
		else if (string[i] == 'I')
			cout << ".. ";
		else if (string[i] == 'J')
			cout << ".--- ";
		else if (string[i] == 'K')
			cout << "-.- ";
		else if (string[i] == 'L')
			cout << ".-.. ";
		else if (string[i] == 'M')
			cout << "-- ";
		else if (string[i] == 'N')
			cout << "-. ";
		else if (string[i] == 'O')
			cout << "--- ";
		else if (string[i] == 'P')
			cout << ".--. ";
		else if (string[i] == 'Q')
			cout << "--.- ";
		else if (string[i] == 'R')
			cout << ".-.";
		else if (string[i] == 'S')
			cout << "... ";
		else if (string[i] == 'T')
			cout << "- ";
		else if (string[i] == 'U')
			cout << "..- ";
		else if (string[i] == 'V')
			cout << "...- ";
		else if (string[i] == 'W')
			cout << ".-- ";
		else if (string[i] == 'X')
			cout << "-..- ";
		else if (string[i] == 'Y')
			cout << "-.-- ";
		else if (string[i] == 'Z')
			cout << "--.. ";
		else if (string[i] == '0')
			cout << "----- ";
		else if (string[i] == '1')
			cout << ".---- ";
		else if (string[i] == '2')
			cout << "..--- ";
		else if (string[i] == '3')
			cout << "...-- ";
		else if (string[i] == '4')
			cout << "....- ";
		else if (string[i] == '5')
			cout << "..... ";
		else if (string[i] == '6')
			cout << "-.... ";
		else if (string[i] == '7')
			cout << "--... ";
		else if (string[i] == '8')
			cout << "---.. ";
		else if (string[i] == '9')
			cout << "----. ";
		else if (string[i] == ',')
			cout << "--..-- ";
		else if (string[i] == '.')
			cout << ".-.-.- ";
		else if (string[i] == '?')
			cout << "..--.. ";
	}
}