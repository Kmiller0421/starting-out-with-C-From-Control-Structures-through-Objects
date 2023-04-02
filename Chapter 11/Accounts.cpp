#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct CustomerAccounts
{
	string name,
		   address,
		   city,
		   state,
		   dateLastPayment;

	int zip{};
	long long telephoneNUM{};
	double accountBalance{};

};

int main()

{

	int user_choice,             //Users decision
		index = 0;               //Loop variable
	
	int customerNumber = 0;                                  //Loop variable
	
	struct CustomerAccounts accountInfo[20];                 //Account Information Array

	while (1)
	{
		cout << endl << endl;
		cout << "Customer Account Portal\n";
		cout << "-----------------------------------------------\n";
		cout << "Please choose one of the following choices:\n";

		cout << endl;

		cout << "1) Enter in new information\n";
		cout << "2) Change information\n";
		cout << "3) Display information\n";
		cout << "4) Exit Program\n";
		cout << "Enter choice: ";
		cin >> user_choice;

		cout << endl << endl;

		//Input Validation for user choice
		while (user_choice > 4)
		{
			cout << "Input Invalid! Please enter 1, 2, 3 or 4: ";
			cin >> user_choice;
		}

		//Menu-Driven Interface
		switch (user_choice)
		{
			
		//Enter in new customer information
		case 1:
		{
			cout << "\nEnter in name: ";
			cin >> accountInfo[index].name;
			cin.ignore();

			cout << "Enter in address: ";
			getline(cin, accountInfo[index].address);

			cout << "Enter in city: ";
			cin >> accountInfo[index].city;
			cin.ignore();

			cout << "Enter in state: ";
			cin >> accountInfo[index].state;
			cin.ignore();

			cout << "Enter in zip code: ";
			cin >> accountInfo[index].zip;

			cout << "Enter in telephone #: ";
			cin >> accountInfo[index].telephoneNUM;

			cout << "Enter in account balance: $";
			cin >> accountInfo[index].accountBalance;

			cout << "Enter in date of last payment(00/00/00): ";
			cin >> accountInfo[index].dateLastPayment;
			
			while (accountInfo[index].accountBalance < 0)
			{
				cout << "Input Invalid! Enter in a postive account balance: $";
				cin >> accountInfo[index].accountBalance;
			}

			index++;

			continue;
		}

		//Change customer information
		case 2:
		{
			cout << endl << endl;

			cout << "Customer name: " << accountInfo[customerNumber].name << endl;
			cout << "Customer address: " << accountInfo[customerNumber].address << endl;
			cout << "City: " << accountInfo[customerNumber].city << endl;
			cout << "State: " << accountInfo[customerNumber].state << endl;
			cout << "Zip code: " << accountInfo[customerNumber].zip << endl;
			cout << "Telephone: " << accountInfo[customerNumber].telephoneNUM << endl;
			cout << "Account Balance: " << accountInfo[customerNumber].accountBalance << endl;
			cout << "Date of last payment: " << accountInfo[customerNumber].dateLastPayment << endl;

			cout << endl << endl;

			//Prompting the user to modify the exisiting details 

			cout << "Enter in name: ";
			cin >> accountInfo[customerNumber].name;
			cin.ignore();

			cout << "Enter in address: ";
			getline(cin, accountInfo[customerNumber].address);

			cout << "Enter in city: ";
			cin >> accountInfo[customerNumber].city;

			cout << "Enter state: ";
			cin >> accountInfo[customerNumber].state;

			cout << "Enter zip code: ";
			cin >> accountInfo[customerNumber].zip;

			cout << "Enter telephone #: ";
			cin >> accountInfo[customerNumber].telephoneNUM;

			cout << "Enter in account balance: $";
			cin >> accountInfo[customerNumber].accountBalance;

			cout << "Enter in date of last payment(00/00/00): ";
			cin >> accountInfo[customerNumber].dateLastPayment;

			continue;
		}

		//Display information to customer
		case 3:
		{
			cout << fixed << setprecision(2) << showpoint;

			for (int i = 0; i < index; i++)
			{
				cout << "Customer name: " << accountInfo[i].name << endl;
				cout << "Customer address: " << accountInfo[i].address << endl;
				cout << "City: " << accountInfo[i].city << endl;
				cout << "State: " << accountInfo[i].state << endl;
				cout << "Zip code: " << accountInfo[i].zip << endl;
				cout << "Telephone #: " << accountInfo[i].telephoneNUM << endl;
				cout << "Account Balance: $" << accountInfo[i].accountBalance << endl;
				cout << "Date of last payment: " << accountInfo[i].dateLastPayment << endl;

				system("PAUSE");
			}
			continue;
		}

		//Exit program
		case 4:
		{
			cout << "Progrm Terminated" << endl;
			break;
		}


		}
	}

	return 0;
}