#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int years,
        month = 12,
        total_month = 0;

    double inches,
           total,
           average;
    
    cout << "Enter in number of years: ";
    cin >> years;

    //Input validation
    while (years < 1)
    {
        cout << "Invalid input! Enter in a number greater than 1: ";
        cin >> years;
    }

    //Nested Loop
    for (int year_1 = 1; year_1 <= years; year_1++)                           //Iterate through the years
    {
        total = 0;
        for (int months = 1; months <= month; months++)                       //Iterate through the months
        {
            cout << "\nYear " << years;
            cout << "\nMonth " << months << " inches of rain year "
                 << year_1 << ": ";
            cin >> inches;

            //Input validation
            while (inches < 0)
            {
                cout << "Invalid input! Enter in a number greater than 0: ";
                cin >> inches;
            }

            total += inches;

        }

        total_month += month;               //Calculate the number of months

        average = total / years;            //Calculate the average of inches of rainfall

        cout << "\n# of Months: " << total_month;
        cout << "\nTotal inches of rainfall was " << total;

        cout << fixed << setprecision(2) << showpoint;
        average = total / years;
        cout << "\nAverage inches of rainfall per month for the entire period was "
            << average << endl;
    }
    return 0;
}