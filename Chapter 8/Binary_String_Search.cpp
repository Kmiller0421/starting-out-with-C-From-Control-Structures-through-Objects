#include <iostream> 
#include <string> 
using namespace std;

//Function Prototypes
void selectionSort(string[], int);
void swap(string&, string&);
void displayArray(string[], int, string);
int BinarySearch(string[], int, string);

int main() {
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim",
                               "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                               "Taylor, Terri", "Johnson, Jill",
                               "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                               "James, Jean", "Weaver, Jim", "Pore, Bob",
                               "Rutherford, Greg", "Javens, Renee",
                               "Harrison, Rose", "Setzer, Cathy",
                               "Pike, Gordon", "Holland, Beth" };
    
    //Call Functions
    displayArray(names, NUM_NAMES, "UNSORTED: \n--------------------");
    selectionSort(names, NUM_NAMES);
    displayArray(names, NUM_NAMES, "SORTED: \n-------------------- ");

    string user_input;
    
    cout << "Enter in a name: ";
    getline(cin, user_input);

    //Let variable position = BinarySearch Function (-1)
    int position = BinarySearch(names, NUM_NAMES, user_input);

    if (position != -1)
        cout << names[position] << " was found." << endl;
    else
        cout << user_input << " was NOT found." << endl;


    return 0;
}

//Function Definition
void selectionSort(string array[], int ARRAY_SIZE)
{
    int min_index;
    string min_value;

    for (int start_index = 0; start_index < (ARRAY_SIZE - 1); start_index++)      //Array (size - 1) = 19
    {
        min_index = start_index;
        min_value = array[start_index];

        for (int index = start_index + 1; index < ARRAY_SIZE; index++)
        {
            if (array[index] < min_value)
            {
                min_value = array[index];
                min_index = index;
            }
        }
        swap(array[min_index], array[start_index]);
    }
}

//Function Definition
void swap(string& a, string& b)
{
    string temp = a;
    a = b;
    b = temp;
}

//Function Definition
void displayArray(string array[], int ARRAY_SIZE, string prompt)
{
    cout << prompt << endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << array[i] << endl;
    cout << endl;
}

//Function Definition
int BinarySearch(string array[], int array_size, string user_input)
{
    int first = 0,
        last = array_size - 1,   //Array (size - 1) = 19
        middle,
        position = -1;
    bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last) / 2; 

        if (array[middle] == user_input)     
        {
            position = middle;
            found = true;
        }
        else if (array[middle] > user_input)   
            last = middle - 1; 
        else                                 
            first = middle + 1; 

    }
    return position;
}