#include <iostream>
#include <string>
using namespace std;


//Function Prototype (A Value-Returning Function)
int strLength(const char *);

int main()
{
	const char SIZE = 20;  //Size declarator
	char line[SIZE];      //Character array


	//Prompt user to enter a string less than 19 characters (SIZE - 1)
	cout << "Enter in a string less than " << (SIZE-1) << ": "; 
	cin.getline(line, SIZE);


	//Call Function (Assign Value)
	int Length = strLength(line);


	cout << "There are " << Length << " characters in the string.";


	return 0;
}

//Function Definition 
int strLength(const char * user)
{
	return strlen(user);              //strlen() find the length of the string and return the value
}

