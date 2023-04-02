#include <iostream>
using namespace std;

const int ROWS = 3,
COLS = 5;

double getTotal(const double[][COLS]);                                                   //Function prototypes
double getAverage(const double[][COLS]);
double getRowTotal(const double[][COLS], const int);
double getColumnTotal(const double[][COLS], const int);
double getHighestInRow(const double[][COLS], const int);
double getLowestInRow(const double[][COLS], const int);
void displayData(const double[][COLS], const int, const int);

int main()
{
    double test_data[ROWS][COLS] = {5, 10, 15, 20, 25};
                                      

    int row = 1,
        column = 4;

    displayData(test_data, row, column);                                             //Calls the function (displayData)

    return 0;
}

void displayData(const double test_data[][COLS], const int row, const int column)                                     //Output the results to the user
{
    cout << "Results" << endl;;
    cout << "------------------------------" << endl;
    cout << "Total = " << getTotal(test_data) << endl;
    cout << "Average = " << getAverage(test_data) << endl;
    cout << "Row number " << row << " total = " << getRowTotal(test_data, row) << endl;
    cout << "Column number " << column << " total = " << getColumnTotal(test_data, column) << endl;
    cout << "Highest in Row number " << row << " = " << getHighestInRow(test_data, row) << endl;
    cout << "Lowest in Row number " << row << " = " << getLowestInRow(test_data, row) << endl;

}

double getTotal(const double array[][COLS])
{
    double total = 0;
    for (int row = 0; row < ROWS; row++)
    {
        for (int column = 0; column < COLS; column++)
            total += array[row][column];

    }

    return total;
}

double getAverage(const double array[][COLS])                                        //Finds out the average
{
    double total_array_elements = 0,
           sum = 0;

    for (int row = 0; row < ROWS; row++)
    {
        for (int column = 0; column < COLS; column++)
        {
            total_array_elements++;
            sum += array[row][column];
        }

    }
    return sum / total_array_elements;
}

double getRowTotal(const double array[][COLS], const int ROW)                          //Finds out row total
{
    double row_total = 0;
    for (int column = 0; column < COLS; column++)
        row_total += array[(ROW - 1)][column];

    return row_total;
}

double getColumnTotal(const double array[][COLS], const int COLUMN)                   //Finds out column total
{
    double column_total = 0;
    for (int row = 0; row < ROWS; row++)
        column_total += array[row][(COLUMN - 1)];

    return column_total;
}

double getHighestInRow(const double array[][COLS], const int ROW)                     //Finds out the highest number in the row
{
    
    double highest = array[(ROW - 1)][0];

    for (int column = 1; column < COLS; column++)
    {
        if (array[(ROW - 1)][column] >= highest)
            highest = array[(ROW - 1)][column];

    }

    return highest;
}

double getLowestInRow(const double array[][COLS], const int ROW)                     //Finds out the lowest number in the row
{
    double lowest = array[(ROW - 1)][0];
    for (int column = 1; column < COLS; column++)
    {
        if (array[(ROW - 1)][column] <= lowest)
            lowest = array[(ROW - 1)][column];
    }
    return lowest;
}