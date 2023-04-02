#include <iostream>
using namespace std;

//Function Prototype
int LinearSearch(const int[], int, int);


int main()
{
	//Declare variables
	const int SIZE = 18;
	int charge_account_numbers[SIZE] = { 5658845,  4520125,  7895122, 8777541,  8451277,  1302850,
										 8080152,  4562555,  5552012, 5050552,  7825877,  1250255,
										 1005231,  6545231,  3852085,  7576651,  7881200,  4581002 };
	int account_number;
	int results;


	//Prompt user to enter charge account number
	cout << "Enter in charge account number: ";
	cin >> account_number;


	//Call Function
	results = LinearSearch(charge_account_numbers, SIZE, account_number);                    


	if (results == -1)
		cout << "Account number invaild" << endl;
	else
		cout << "Account number valid" << endl;

	return 0;
}


//Function Definition
int LinearSearch(const int accounts[], int size, int value)                         //const int accounts[]         int size          int value
{                                                                                   //charge_account_numbers        SIZE           account_number
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < size && !found)
	{
		if (accounts[index] == value)                                               //Iterates through the charge_account_numbers array
		{
			found = true;
			position = index;
		}

		index++;                                                                    //Increments index until value is found
	}
	return position;                                                                //Return position to results in main function
}

