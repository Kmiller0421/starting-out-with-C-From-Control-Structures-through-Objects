#include <iostream>
using namespace std;

//Function Prototype
void Larger(int[], int, int);

int main()
{
	const int SIZE = 5;  //Array Size
	int numbers[SIZE] = { 5, 10, 2, 3, 8 };  //Array of numbers
	int n = 6;

	//Call Function
	Larger(numbers, SIZE, n);

	return 0;
}

//Function Definition
void Larger(int numbers[], int SIZE, int n)
{
	cout << "Larger than n:\n";

	//Iterate through numbers array
	for (int count = 0; count < SIZE; count++)
	{
		if (numbers[count] > n)
		{
			cout << numbers[count] << endl;  //Displays all the numbers in the array that are greater than n
		}
	}
}