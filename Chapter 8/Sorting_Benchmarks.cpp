#include <iostream>
using namespace std;

//Function Prototypes
int BubbleSort(int[], int);
int SelectionSort(int[], int);
void DisplayArray(int[], int);

int main()
{
	const int SIZE = 20;                                            //# of #'s in the Array
	int num_array1[SIZE] = { 58, 66, 45, 70, 30,                    //Bubble Sort Array
							 59, 26, 16, 40, 83,
							 76, 32, 61, 99, 38,
							 88, 61, 76, 74, 12 };

	int num_array2[SIZE] = { 58, 66, 45, 70, 30,                     //Selection Sort Array
							 59, 26, 16, 40, 83,
							 76, 32, 61, 99, 38,
							 88, 61, 76, 74, 12 };

	int exchange_bubble,
		exchange_sort;

	DisplayArray(num_array1, SIZE);                                   //Call Function

	//Assign variable to function result
	exchange_bubble = BubbleSort(num_array1, SIZE);                 
	exchange_sort = SelectionSort(num_array2, SIZE);

	cout << "\nThe number of exchanges in bubble sort: " << exchange_bubble << endl;
	cout << "The number of exchanges in selection sort: " << exchange_sort << endl;
	
	return 0;
}

//Bubble Sort Function Definition
int BubbleSort(int array1[], int size)
{
	int exchange = 0;
	bool swap;
	int temp;

	do
	{
		swap = false;

		for (int i = 0; i < (size - 1); i++)           //(size - 1) = 19
		{
			if (array1[i] > array1[i + 1])
			{
				temp = array1[i];
				array1[i] = array1[i + 1];
				array1[i + 1] = temp;

				swap = true;
				exchange++;
			}
		}
	} while (swap);

	return exchange;
}

//Selection Sort Function Definition
int SelectionSort(int array2[], int size)
{
	int exchange = 0;
	int smallest_integer;
	int smallest_index;

	for (int i = 0; i < (size - 1); i++)             //(size - 1) = 19
	{
		if (array2[i] > array2[i + 1])
		{
			smallest_integer = array2[i];
			smallest_index = i;

			exchange++;

			array2[smallest_index] = array2[i];
			array2[i] = smallest_integer;
		}
	}

	return exchange;

}

//Display numbers from array Function Definition
void DisplayArray(int integers[], int x)
{
	for (int i = 0; i < 20; i++)
		cout << integers[i] << " ";
	cout << endl;
}

