****************************************************/
Program Function: Determines which number is the smaller
and which is the larger.
****************************************************/
#include <iostream>
using namespace std;

int main()
{
	int num_1;
	int num_2;

	cout << "Enter in a number: ";
	cin >> num_1;
	cout << "Enter in another number: ";
	cin >> num_2;

	cout << endl;

	if (num_1 < num_2)
	{
		cout << num_1 << " is smaller" << endl;
		cout << num_2 << " is greater";
	}
	else
	{
		cout << num_1 << " is greater" << endl;
		cout << num_2 << " is smaller";
	}

	return 0;
}
