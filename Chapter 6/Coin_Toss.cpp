#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Function Prototype
void coinToss();

int main()
{
	//Call Function
	coinToss();
	return 0;
}

void coinToss()
{
	const int min_value = 1;  //Minimum value
	const int max_value = 2;  //Maximum value

	int flipped, user;       //Hold value's

	unsigned seed = time(0);  //Get the system time
	srand(seed);              //Seed the random number generator

	cout << "Coint Toss Simulator\n";
	cout << "--------------------------\n";

	cout << "How many times should the coin get flipped: ";
	cin >> user;

	//Simulate how many times the coin has been tossed
	for (int count = 0; count < user; count++)
	{
		cout << "Coin Flip # " << (count + 1) << endl;
	}

	//Calculate and ouput a random number from 1 to 2;
	flipped = (rand() % (max_value - min_value + 1)) + min_value;

	//Conditional Statement
	if (flipped == 1)
	{
		cout << "Heads";
	}
	else if (flipped == 2)
	{
		cout << "Tails";
	}
}