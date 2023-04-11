/****************************************************
Program Function: Display minutes, hours, and days
based on the conditional statements down below.
****************************************************/
#include <iostream>
#include <iomanip>  //Used for setprecision
using namespace std;

int main()
{ 
	double minutes,     //Hold minutes value
		   hours,       //Hold hours value
		   days,        //Hold days value
		   user_input;  //Hold users value

	const double seconds_1 = 60,     //60 seconds in a minute
		         seconds_2 = 3600,   //3,600 seconds in a hour
		         seconds_3 = 86400;  //86,400 seconds in a day

	//Prompt user to enter in number of seconds
	cout << "Enter in number of seconds: ";
	cin >> user_input;

	cout << setprecision(2);

	//Conditional statements
	if (user_input >= seconds_1 && user_input < seconds_2 && user_input < seconds_3)
	{
		//Convert seconds into minutes
		minutes = user_input / seconds_1;
		cout << minutes << " min";
	}
	else if (user_input >= seconds_2 && user_input < seconds_3)
	{
		//Convert seconds into hours
		hours = user_input / seconds_2;
		cout << hours << " hr";
	}
	else if (user_input >= seconds_3)
	{
		//Convert seconds into days
		days = user_input / seconds_2;
		cout << days << " day";
	}

	return 0;
}
