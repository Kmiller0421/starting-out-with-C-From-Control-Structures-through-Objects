#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct SpeakersBureau
{
	string name,
		   speakingTopic;

	long long telephoneNUM{};
	double fee{};
};

int main()
{
	struct SpeakersBureau info[20];

	int user_choice,                          //Hold user choice
		index = 0;                            //Loop variable

	int speaker = 0;                          //Loop variable

	while (1)
	{
		cout << endl << endl;
		
		cout << "Speaker's Bureau Portal\n";
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

		switch (user_choice)
		{

		//Enter in new information
		case 1:
		{
			cout << "\nEnter in name: ";
			cin >> info[index].name;
			cin.ignore();

			cout << "Enter in telephone #: ";
			cin >> info[index].telephoneNUM;
			cin.ignore();

			cout << "Enter in speaking topic: ";
			getline(cin, info[index].speakingTopic);

			cout << "Enter in fee required: $";
			cin >> info[index].fee;
			cin.ignore();

			while (info[index].fee < 0)
			{
				cout << "Input Invalid! Enter in a postive fee: $";
				cin >> info[index].fee;
			}

			index++;

			continue;
		}

		//Change customer information
		case 2:
		{
			cout << endl << endl;

			cout << "Speaker's name: " << info[speaker].name << endl;
			cout << "Telephone #: " << info[speaker].telephoneNUM << endl;
			cout << "Speaking topic: " << info[speaker].speakingTopic << endl;
			cout << "Fee: $" << info[speaker].fee << endl;

			cout << endl << endl;

			cout << "Enter in name: ";
			cin >> info[speaker].name;

			cout << "Enter in telephone #: ";
			cin >> info[speaker].telephoneNUM;

			cout << "Enter in speaking topic: ";
			getline(cin, info[speaker].speakingTopic);
			cin.ignore();

			cout << "Enter in fee required: ";
			cin >> info[speaker].fee;

			continue;
		}

		//Display information
		case 3:
		{
			cout << fixed << setprecision(2) << showpoint;

			for (int i = 0; i < index; i++)
			{
				cout << "Speaker's name: " << info[i].name << endl;
				cout << "Telephone #: " << info[i].telephoneNUM << endl;
				cout << "Speaking topic: " << info[i].speakingTopic << endl;
				cout << "Fee: $" << info[i].fee << endl;

				system("PAUSE");
			}

			continue;
		}

		//Exit Program
		case 4:
		{
			cout << "Program terminated";
			break;
		}

		
		}
	}

	return 0;
}