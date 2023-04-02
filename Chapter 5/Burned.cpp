#include <iostream>
using namespace std;

int main()
{
	//iterate through 5, 10, 15, 20, 25, 30
	for (int min = 5; min <= 30; (min += 5))
	{
		int total;  //Hold value for total calories burned for each min

		total = min * 3.6; //Times each min by 3.6

		cout << min << "min" << " to burn " << total << " calories" << endl;
	}

	return 0;
}