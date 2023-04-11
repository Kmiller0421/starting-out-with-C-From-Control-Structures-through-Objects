/**********************************************************************************************************************************************
Program Name: Areas of Rectangles
Programmer: Kaleb Miller
Program Function: Prints out the area of both rectangles
Inputs: len_1, wid_1, len_2, wid_2
Outputs: result_1, result_2
Calculations used: (len_1 * wid_1),(len_2 * wid_2)
************************************************************************************************************************************************/
#include <iostream>
using namespace std;

int main()
{
	//Hold user inputs
	int len_1,
		wid_1,
		len_2,
		wid_2;

	//Hold calculations
	int result_1,
		result_2;

	//Prompt user to enter in length and width for both rectangles
	cout << "Enter in the length for rectangle one: ";
	cin >> len_1;
	cout << "Enter in width for rectangle one: ";
	cin >> wid_1;
	cout << "Enter in length for rectangle two: ";
	cin >> len_2;
	cout << "Enter in width for rectangle two: ";
	cin >> wid_2;

	cout << endl;

	//Calculate the are of both rectangles
	result_1 = len_1 *= wid_1;
	result_2 = len_2 *= wid_2;

	//Test condition
	if (result_1 > result_2)
	{
		cout << "Rectangle one has a greater area: " << result_1;
	}
	else if (result_1 < result_2)
	{
		cout << "Rectangle two has a greater area: " << result_2;
	}
	else if (result_1 == result_2)
	{
		cout << "Both rectangles areas are the same: " << result_1;
	}
	
	return 0;
}
