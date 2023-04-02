#include <iostream>
#include <cctype>
using namespace std;

//Void Function Prototype
void Capitalize(char*);

int main()
{
	char input[100];

	cout << "Enter in a sentence: ";
	cin.getline(input, 100);

	//Call Function
	Capitalize(input);

	return 0;
}

//Function Defintion
void Capitalize(char* user)
{
	if (user[0] != ' ')
	{
		user[0] = toupper(user[0]);
	}

	for(int index = 0; index <= 100; index++)
	{
		if (user[index] == '.')
		{
			user[index + 2] = toupper(user[index + 2]);   //Goes over two spaces landing on the first letter of each sentence
		}
	}

	cout << "Capitalized Sentence: " << user;
}