#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int SIZE = 7;                                              //Size declarator (Number of employees)
	int empId[] = { 5658845, 4520125,  7895122,  8777541,            //Initialized array (Employees ID)
						8451277,  1302850,  7580489 };
	int inputNegative = 0;
	double hours[SIZE] = {};                                         //Hold each employees hours worked            
	double payRate[SIZE] = {};                                       //Hold each employees pay rate
	double wages[SIZE] = {};                                         //Hold each employees wages 
	double inputValidation = 15.00;

	for (int i = 0; i < SIZE; i++)                                   //Ask user for hours worked and pay rate
	{
		cout << "Employee ID: #" << empId[i] << endl;
		cout << "Enter in number of hours worked: ";
		cin >> hours[i];
		cout << "Enter in pay rate: ";
		cin >> payRate[i];
		cout << endl;

		while (hours[i] < inputNegative)                                                 //Check if hours is less than 0 
		{                                                                                //Loops through hours[i] array
			cout << "Input Invalid. Enter in a number greater than 0: ";
			cin >> hours[i];
			cout << endl;
		}

		while (payRate[i] < inputValidation)                                             //Check if pay rate is less than 15.00 
		{                                                                                //Loops through payRate[i] array
			cout << "Input Invalid. Enter in a number greater than 15.00: ";
			cin >> payRate[i];
			cout << endl;
		}

	}

	for (int i = 0; i < SIZE; i++)                                    //i iterates through SIZE = 7 and multiplies hours and pay rates.
	{                                                                //wages[i] now has each employees wages
		wages[i] = hours[i] *= payRate[i];                          
	}

	cout << "Employee ID and Wages" << endl;
	cout << "----------------------------------" << endl;

	for (int i = 0; i < SIZE; i++)                                        //Output each Employee ID and Wages
	{
		cout << fixed << showpoint << setprecision(2);
		cout << "Wages for #" << empId[i] << " = $" << wages[i] << endl;
	}


	return 0;
}