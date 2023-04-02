#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int SIZE = 5;
	string salsa[SIZE] = { "mild", "medium", "sweet", "hot", "zesty" };

	int highest, lowest, highestIndex, lowestIndex{};
	int number_jars[SIZE];
	int total_sales;
	int sum = 0;


	//Prints out a prompt to the user and checks for invalid numbers less than 0
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter number of " << salsa[i] << " salsa jars sold: ";
		cin >> number_jars[i];

		while (number_jars[i] < 0)
		{
			cout << "The number you have entered is invalid. Enter in a positive number:";
			cin >> number_jars[i];
		}

	}

	cout << endl;
	cout << "Sales for each salsa type:" << endl;
	cout << "--------------------------" << endl;

	//Displays sales for each salsa type
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Sales for " << salsa[i] << " = " << number_jars[i] << endl;
	}

	//Total Sales for Salsa Jars
	for (int i = 0; i < SIZE; i++)
	{
		total_sales = sum += number_jars[i];
	}

	//Highest number of jars sold
	highest = number_jars[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (number_jars[i] > highest)
		{
			highest = number_jars[i];
			highestIndex = i;
		}
	}

	//Lowest number of jars sold
	lowest = number_jars[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (number_jars[i] < lowest)
		{
			lowest = number_jars[i];
			lowestIndex = i;
		}
	}

	cout << "\nTotal sales = " << total_sales << endl;
	cout << "\nHighest salsa type: " << salsa[highestIndex];
	cout << "\nLowest salsa type: " << salsa[lowestIndex];

	return 0;
}


