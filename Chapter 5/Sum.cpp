/*************************************************************************************
* Program Function: To get the sum of all the integers from 1 up to the number entered
* Input: Users number
* Output: Print 1 up to the number entered (Example: 1-10)
**************************************************************************************/


#include <iostream>    //Header file
using namespace std;

int main()      //Function
{
	int sum;      //Declared variables
	int count;

	cout << "Enter a positvie number in: ";
	cin >> sum;                                      //Input from user

	if (sum < 0)                                    //Test condition
	{
		cout << "Invalid number";
	}
	else
	{
		for (count = 1; count <= sum; count++)    //Intialize, test, update
		{
			cout << count << endl;               //Print 1 up to the number entered
		}
	}

	return 0;   //End main function
}