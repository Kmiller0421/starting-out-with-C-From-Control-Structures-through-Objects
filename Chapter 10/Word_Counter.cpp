#include <iostream>
using namespace std;

//Funciton Prototype (A Value-Returning Function)
int WordCounter(char*);

int main()
{
	const char SIZE = 101 ;     //Size Declarator
	char input[SIZE];          //Character array / Stores users input

	//Prompt user to enter a string less than 100 (SIZE - 1)
	cout << "Enter in a string less than " << (SIZE - 1) << " words: ";
	cin.getline(input, SIZE);

	//Call Function (Assign Value int num)
	int num = WordCounter(input);

	//Output results
	cout << "The # of words = " << num;

	return 0;
}

//Function Definition (A Value-Returning Function)
int WordCounter(char* user)
{
	int counter = 1;             //Counts the words(spaces) 

	while (*user != '\0')        //User is not equal to null terminator
	{
		if (*user == ' ')        //Increment counter if user equals space
			counter++;
		user++;                  //Increment the next char until it reaches a space
	}

	return counter;
}

