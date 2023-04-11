/**********************************************************************************************************************************************
Program Name: Color Mixer
Programmer: Kaleb Miller
Program Function: To display the name of the secondary color that results by mixing two primary colors.
Inputs: color_1, color_2
Outputs: Secondary color
Calculations used: None
************************************************************************************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    string color_1, color_2;

    string red = "red";
    string blue = "blue";
    string yellow = "yellow";

    cout << "Enter in one primary color(red, blue, or yellow): ";
    cin >> color_1;

    //Input validation
    while (color_1 != red && color_1 != blue && color_1 != yellow)
    {
        cout << "Input Invalid!!! Enter in (red, blue, or yellow): ";
        cin >> color_1;
    }

    cout << "Enter in another primary color(red, blue, or yellow: ";
    cin >> color_2;

    //Input validation
    while (color_2 != red && color_2 != blue && color_2 != yellow)
    {
        cout << "Input Invalid!!! Enter in (red, blue, or yellow): ";
        cin >> color_2;
    }

    //Conditional Statements
    if (color_1 == red && color_2 == blue)
    {
        cout << "When you mix red and blue, you get purple.";
    }
    else if (color_1 == red && color_2 == yellow)
    {
        cout << "When you mix red and yellow, you get orange.";
    }
    else if (color_1 == blue && color_2 == yellow)
    {
        cout << "When you mix blue and yellow, you get green.";
    }

    return 0;
}
