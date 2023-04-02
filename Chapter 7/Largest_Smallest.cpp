#include <iostream>
using namespace std;

int main()
{
	
	int num = 10;           //Loop through 10
	int values[10];         //Number of elements
	int largest, smallest;

	//Iterates the prompt
	for (int i = 0; i < num; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> values[i];
	}

	largest = smallest = values[0];

	//Largest number
	for (int i = 1; i < num; i++)
	{
		if (values[i] > largest)
			largest = values[i];
	}

	//Smallest number
	for (int i = 1; i < num; i++)
	{
		if (values[i] < smallest)
			smallest = values[i];

	}

	cout << "The largest number is " << largest << endl;
	cout << "The smallest number is " << smallest << endl;
	return 0;
}