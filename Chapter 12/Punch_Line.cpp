#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void displayJoke(fstream&);
void displayPunchline(fstream&);

int main()
{
	fstream joke("joke.dat", ios::in);
	if (!joke)
	{
		cout << "Error opening file \"joke.dat\".\n";
		return 0;
	}
	fstream punchline("punchline.dat", ios::in);
	if (!punchline)
	{
		cout << "Error opening file \"punchline\".\n";
		return 0;
	}

	displayJoke(joke);
	displayPunchline(punchline);
	return 0;
}

void displayJoke(fstream& joke)
{
	string buffer;
	while (getline(joke, buffer))
	{
		cout << buffer << endl;
	}
}

void displayPunchline(fstream& punchline)
{
	string buffer;
	punchline.seekg(-36L, ios::end);
	getline(punchline, buffer);
	cout << buffer << endl;
}