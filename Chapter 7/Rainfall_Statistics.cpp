#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int months = 12;
	double rainfall_total[months];
	string month_12[months] = { "January", "Feburary", "March", "April", "May", "June", "July", "August",
							   "September", "October", "November", "December" };
	double total = 0;
	double average;
	int highest, lowest, highestIndex{}, lowestIndex{};

	//Iterate user numbers into array
	for (int i = 0; i < months; i++)
	{
		cout << "What is the total rainfall for " << month_12[i]
			 << ": ";
		cin >> rainfall_total[i];

		//Input validation
		while (rainfall_total[i] < 0)
		{
			cout << "Invalid Input!!! Enter in a postive number: ";
			cin >> rainfall_total[i];
		}
	}

	//Calculate total rainfall for the year
	for (int i = 0; i < months; i++)
	{
		total += rainfall_total[i];
	}

	//Calculate the average monthly rainfall
	average = total / 12;

	//Highest number of rain
	highest = rainfall_total[0];
	for (int i = 0; i < months; i++)
	{
		if (rainfall_total[i] > highest)
		{
			highest = rainfall_total[i];
			highestIndex = i;
		}
	}

	//Lowest number of rain
	lowest = rainfall_total[0];
	for (int i = 0; i < months; i++)
	{
		if (rainfall_total[i] < lowest)
		{
			lowest = rainfall_total[i];
			lowestIndex = i;
		}
	}
	
	cout << fixed << setprecision(2);
	cout << "\nTotal Rainfall = " << total;
	cout << "\nAverage monthly rainfall = " << average;
	cout << "\nHighest month: " << month_12[highestIndex];
	cout << "\nLowest month: " << month_12[lowestIndex];
	
	return 0;
}