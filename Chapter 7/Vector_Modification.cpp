#include <iostream>
#include <vector>

using namespace std;

bool testPIN(const vector<int>, const vector<int>);

int main()
{
    vector<int> pin1{ 2, 4, 1, 8, 7, 9, 0 }; 
    vector<int> pin2{ 2, 4, 6, 8, 7, 9, 0 };
    vector<int> pin3{ 1, 2, 3, 4, 5, 6, 7 };


    if (testPIN(pin1, pin2))
        cout << "Error: pin_1 and pin_2 report to be the same.\n";
    else
        cout << "Success: pin_1 and pin 2 are different.\n";


    if (testPIN(pin1, pin3))
        cout << "ERROR: pin_1 and pin_3 report to be the same.\n";
    else
        cout << "SUCCESS: pin_1 and pin_3 are different.\n";


    if (testPIN(pin1, pin2))
        cout << "SUCCESS: pin_1 and pin_1 report to be the same.\n";
    else
        cout << "ERROR: pin_1 and pin_1 report to be different.\n";


    return 0;
}

bool testPIN(const vector<int> custPIN, const vector<int> databasePIN)
{
    for (int index = 0; index < custPIN.size(); index++)
    {
        if (custPIN[index] != databasePIN[index])
            return false;
    }
    return true;
}