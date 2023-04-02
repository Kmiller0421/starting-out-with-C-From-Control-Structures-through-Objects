#include <iostream>
using namespace std;

int main()
{
	//Declaration Variables
	int speed, time, distance;

	//Prompt user to enter in speed and time
	cout << "What is the speed of the vehicle in mph? ";
	cin >> speed;
	cout << "How many hours has it traveled? ";
	cin >> time;

	//Loop variable
	int count = 1;

	cout << "Hour Distance Traveled\n";
	cout << "---------------------------------\n";

	/*Initialize for loop / Increment count until less than or equal to time*/
	for (count; count <= time; count++)                  
	{
		distance = speed * count;                //Calculate distance       

		cout << count << "\t\t" << distance << endl;
	}

	return 0;
}


/***********************************
* Example: Speed = 40, Time = 3
* distance = 40 * 1
* distance = 40 * 2
* distance = 40 * 3 
* 
* Result:
* 1    40
* 2    80
* 3    120
* **********************************/
