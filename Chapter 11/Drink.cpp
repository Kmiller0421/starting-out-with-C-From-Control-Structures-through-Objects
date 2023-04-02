#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cstring>
using namespace std;

// Constants for arrays
const int NAME_SIZE = 12;
const int NUM_DRINKS = 5;

// Declaration of the Drink structure
struct Drink
{
    char name[NAME_SIZE]; // Drink name
    double price;         // Price of the drink
    int num;              // Number of cans in the machine
};

// Function prototypes
int getuser_choice(Drink[]);
void transaction(Drink[], int, double&);

int main()
{
    // Menu user_choice
    int user_choice;

    // Drink machine earnings
    double earnings = 0;

    // Array of drinks in the machine
    Drink machine[NUM_DRINKS] = {
                        {"Cola     ", 0.75, 20},
                        {"Root Beer", .75, 20},
                        {"Lemon-Lime", .75, 20},
                        {"Grape Soda", .80, 20},
                        {"Cream Soda", .80, 20} };

    cout << fixed << showpoint << setprecision(2);

    // Display the menu and process the user's choice.
    user_choice = getuser_choice(machine);
    while (user_choice != 5)
    {
        transaction(machine, user_choice, earnings);

        user_choice = getuser_choice(machine);
    }

    cout << "Total earnings: $" << earnings << endl;
    return 0;
}

int getuser_choice(Drink m[])
{
    
    int user_choice;

    cout << endl;

    cout << "Drink Machine";
    cout << "\n------------------------------";

    cout << "\nPlease choose one of the following drinks: " << endl;

    cout << "\nDrink Names             Cost        # of Drinks" << endl;


    for (int x = 0; x < NUM_DRINKS; x++)
    {
        cout << (x + 1) << ") " << m[x].name << "\t\t";
        cout << m[x].price << "\t\t" << m[x].num << endl;
    }

    cout << (NUM_DRINKS + 1)
        << ") Quit Drink Machine\n\n";

    cout << "Choose one (1, 2, 3, 4, or 5): "; cin >> user_choice;

    // Input validation
    while (user_choice < 1 || user_choice > 6)
    {
        cout << "Bad user_choice. Choose one: "; cin >> user_choice;
    }

    return user_choice - 1;
}

void transaction(Drink m[], int user_choice, double& earnings)
{
    double money;

    if (m[user_choice].num == 0)
    {
        cout << "Sorry, that selection is sold out.\n";
        return;
    }

    cout << "Enter an amount of money: $"; cin >> money;

    //Input Validation
    while (money < m[user_choice].price || money > 1.0)
    {
        cout << "Enter at least " << m[user_choice].price;
        cout << " and not more than 1 dollar.: $"; cin >> money;
    }

    // Process the selection and give back any
    // change that is due.
    if (money >= m[user_choice].price)
    {
        cout << "\nChange calculated: "
            << (money - m[user_choice].price)
            << endl;                                               
        cout << "Your change: $" << (money - m[user_choice].price) << "\n\n";

        // Update our earnings.
        earnings += m[user_choice].price;

        // Decrease the number of cans of the selected
        // drink currently in the machine.
        m[user_choice].num--;
    }
}