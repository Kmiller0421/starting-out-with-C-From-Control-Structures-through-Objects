#include <iostream>
using namespace std;

//Function prototype
int *arrayAllocator(int);

int main()
{
	int* num = nullptr;  //Address is set to 0

	num = arrayAllocator(1);  //Send in integer into function

	//Display the pointer in array
	for (int i = 0; i < 5; i++)
	{
		cout << num[i] << endl;
	}

	//Free the memory
	delete[] num;
	num = nullptr;

	return 0;
}

//Function definition
int* arrayAllocator(int num)
{
	int* arr = nullptr;  //Array to hold numbers
	arr = new int[num];  //Dynamically allocate the array

	return arr;   //Return a pointer to the array
}