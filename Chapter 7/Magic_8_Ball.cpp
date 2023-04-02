#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream inputFile("8ball.txt");
	string responseArray[100];
	string question;

	const int SIZE = 12;

	bool temp = true;
	int i = 0;

	while (i < SIZE)
	{
		getline(inputFile, responseArray[i]);
		i++;
	}

	inputFile.close();

	while (temp)
	{
		cout << "Please ask me a question?"
			<< "(Enter 'QUIT' to exit program)" << endl;
		getline(cin, question);

			if (question.compare("QUIT") == 0)
			{
				temp = false;
			}
			else
			{
				int index = rand() % SIZE;
				cout << responseArray[index] << endl;
			}
	}

	return 0;
}