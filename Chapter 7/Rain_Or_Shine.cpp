#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputfile;

	const int MONTHS = 3,  //Row (3 Months / June, July, August)
		      DAYS = 30;   //Col (30 Days in each month)

	char weather[MONTHS][DAYS];  //Store rainy(R), cloudy(C), and sunny(S) values
	const char monthNames[MONTHS] = { "J", "J", "A" };

	int count1 = 0, count2 = 0, count3 = 0; //Hold how many many rainy, cloudy, and sunny days in 3-Months

	inputfile.open("RainOrShine.txt");  //Open file

	//Input Validation(Test if file opened or not)
	if (!inputfile.is_open())
	{
		cout << "File could not open!!!";
	}
	else
	{
		cout << "File was opened succesfully!!!\n";
	}

	//Read file into char array
	for (int row = 0; row < MONTHS; row++)
	{
		for (int col = 0; col < DAYS; col++)
		{
			inputfile >> weather[row][col];
		}
	}

	//Count how many days were rainy, cloudy, and sunny during the 3-Months
	for (int row = 0; row < MONTHS; row++)
	{
		for (int col = 0; col < DAYS; col++)
		{
			if (weather[row][col] == 'R')
			{
				count1++;
			}

			if (weather[row][col] == 'C')
			{
				count2++;
			}

			if (weather[row][col] == 'S')
			{
				count3++;
			}

		}
	}

	for (int row = 0; row < MONTHS; row++)
	{
		for (int col = 0; col < DAYS; col++)
		{
			if (weather[row][col] == monthNames[col])
			{
				count1++;
			}

		}
	}

	cout << "\nTotal 3-Months:\n";
	cout << "Rainy days: " << count1 << endl;
	cout << "Cloudy days: " << count2 << endl;
	cout << "Sunny days: " << count3 << endl;

	return 0;
}