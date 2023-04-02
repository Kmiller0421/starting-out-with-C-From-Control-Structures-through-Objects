#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream inputFile;
	string filename;

	
	const int SIZE = 20;              //Size declarator (Number of #'s)
	int numArray[SIZE] = {};          
	double total = 0,
		   lowest,
		   highest,
		   average;

	cout << "Enter in filename: ";
	cin >> filename;                  //User types  in file name or location
	cout << endl;

	
	inputFile.open(filename);         //Open file


	if (inputFile.fail())             //Check if file opens or not
	{
		cout << "File Failure! Please try again: ";
		cin >> filename;
		cout << endl;
	}
	else
	{
		for (int i = 0; i < SIZE; i++)    //Input file data into array
			inputFile >> numArray[i];
    }

	
	highest = numArray[0];               //Find the highest number in the file
	for (int i = 1; i < SIZE; i++)
	{
		if (numArray[i] > highest)
			highest = numArray[i];
	}

	 
	lowest = numArray[0];                 //Find the lowest number in the file
	for (int i = 1; i < SIZE; i++)
	{
		if (numArray[i] < lowest)
			lowest = numArray[i];
	}

	
	for (int i = 0; i < SIZE; i++)         //Get the total of numbers in the file
	{
		total += numArray[i];
	}
	
	average = total / SIZE;                //Find the average of the file
	
	cout << "Highest number in the file: " << highest << endl;
	cout << "Lowest number in the file: " << lowest << endl;
	cout << "Total numbers in the file: " << total << endl;
	cout << "Average: " << average << endl;

	

	return 0;
}