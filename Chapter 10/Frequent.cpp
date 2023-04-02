#include <iostream>
using namespace std;

//Function Prototype (Character pointer, integer)
void FrequentCharacter(char*, int);

int main()
{
	const int SIZE = 61;  //Size Declarator (Length of characters)
	char input[SIZE];     //Character array (Stores users input)

	//Prompt user to enter in a sentence less than 60
	cout << "Enter in a sentence less than " << (SIZE - 1) << ": ";
	cin.getline(input, SIZE);

	//Call Function
	FrequentCharacter(input, SIZE);

	return 0;
}

//Function Definition
void FrequentCharacter(char* characters, int size)                    //(characters = input) and (size = SIZE)
{
	char ch{};
	int i = 0;            //Loop variable
	int max_1 = 0;
	int max_2 = 0;
	int j;
	int counter;

	//Iterate through characters
	while (characters[i] != '\0')               
	{
		i++;
	}
		
	const char* begin;
	const char* end = characters + i;

	for (begin = characters; begin != end; begin++)
	{
		j = 0;
		counter = 0;

		while (characters[j])
		{
			if (*begin == characters[j])
				counter++;
			j++;
		}

		if (counter > max_1)
		{
			max_1 = counter;
			ch = *begin;
			max_2 = 0;
		}
		else if (counter == max_1 && ch != *begin)
			max_2++;
	}

	//Return # of how many characters appear in the sentence
	cout << "max_1 character " << ch << " appears " << max_1 << " times." << endl;
}