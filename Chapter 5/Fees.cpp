#include <iostream>
using namespace std;

int main()
{
	double membership = 2500; //Membership fee

	for (int i = 1; i <= 6; i++)
	{
		cout << "Year " << i << " = " << membership << endl;

		membership += (membership * 0.4);  //Increase the membershiip fee by 4%
	}

	return 0;

}