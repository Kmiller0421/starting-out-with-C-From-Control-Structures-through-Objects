#include <iostream>
#include <cctype>
using namespace std;

//Void Function Prototype (Character pointers)
void UpperCase(char*);
void LowerCase(char*);
void Reverse(char*);

int main()
{
	//Stores users input into both arrays
	char ch_1[51];  

	//Prompt User to type in two sentences less than 50
	cout << "Enter in a sentence less than 50: ";
	cin.getline(ch_1, 51);                                                 //Type in "Hello my name is Kaleb Miller"
	
    cout << endl;

	//Call Functions
	Reverse(ch_1);

	cout << endl;

	UpperCase(ch_1);
	LowerCase(ch_1);


	return 0;
}

//Function Definition
void Reverse(char* reverse)
{
	cout << "Reverse: ";

	for (int i = 0; i <= strlen(reverse); i++)
	{
		if (isupper(reverse[i]))
		{
			reverse[i] = tolower(reverse[i]);
		}
		else if (islower(reverse[i]))
		{
			reverse[i] = toupper(reverse[i]);
		}
		cout << reverse[i];
	}

}

//Function Definition
void LowerCase(char* upper)
{
	for (int i = 0; i <= 50; i++)
	{
		upper[i] = tolower(upper[i]);
	}

	cout << "Lower: " << upper << endl;
}

//Function Definition
void UpperCase(char* lower)
{
	for (int i = 0; i <= 50; i++)
	{
		lower[i] = toupper(lower[i]);
	}

	cout << "Upper: " << lower << endl;
}

