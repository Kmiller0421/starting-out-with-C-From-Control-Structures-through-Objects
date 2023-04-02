#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double floors,  //Hold floors values
		   rooms,   //Hold rooms values
		   rooms_occupied; //Hold rooms occupied values

	double total_rooms,  //Hold total rooms value
		   sum_1 = 0,    //Add all total rooms together in for loop
		   total_rooms_occupied, //Hold total rooms occupied value
		   sum_2 = 0,    //Add all total rooms occupied together in for loop
		   total_rooms_unoccupied,   //Hold total rooms unoccupied value
		   percentage_rooms_occupied;   //Hold percentage of rooms occupied

	//Prompt user to enter number of floors in hotel
	cout << "How many floors does the hotel have: ";
	cin >> floors;

	cout << endl;

	//Input validation for number of floors
	while (floors < 1)
	{
		cout << "Input Invalid!!!\n";
		cout << "How many floors does the hotel have: ";
		cin >> floors;
	}

	//Iterate through each floor of the hotel
	for (int count = 0; count < floors; count++)
	{
		cout << "Floor " << (count + 1) << endl;
		cout << "How many rooms on floor " << (count + 1) << ": ";
		cin >> rooms;
		cout << "How many rooms occupied on floor " << (count + 1) << ": ";
		cin >> rooms_occupied;

		//Input validation for number of rooms
		while (rooms < 10)
		{
			cout << "\nInput Validation!!!\n";
			cout << "How many rooms on floor " << (count + 1) << ": ";
			cin >> rooms;
			cout << "How many rooms occupied on floor " << (count + 1) << ": ";
			cin >> rooms_occupied;
		}

		//Calculate how many rooms the hotel has
		total_rooms = sum_1 += rooms;

		//Calculate how many rooms are occupied
		total_rooms_occupied = sum_2 += rooms_occupied;

		//Calculate how many rooms are unoccupied
		total_rooms_unoccupied = total_rooms - total_rooms_occupied;

		//Calculate the percentage of rooms that are occupied
		percentage_rooms_occupied = total_rooms_occupied / total_rooms;

		cout << endl;
	}

	//Output results
	cout << setprecision(2);
	cout << "Total hotel rooms: " << total_rooms << endl;
	cout << "Total hotel rooms occupied: " << total_rooms_occupied << endl;
	cout << "Total hotel rooms unoccupied: " << total_rooms_unoccupied << endl;
	cout << "Percentage of rooms occupied: " << percentage_rooms_occupied << endl;

	return 0;
}