#include <iostream>
using namespace std;

int main()
{
	int years = 1;              //Year variable
	double total = 0,           //Accumulator
		   mm_perYear = 1.5;    //1.5 millimeters per year
	 
	//Loop through the years
	while (years <= 25)
	{
		total += mm_perYear; //Accumulate the total of rain per year(mm)

		cout << "Year " << years << " " << total << "mm" << endl;
		years++; //Increment years until equal to 25
	}

	return 0;
}