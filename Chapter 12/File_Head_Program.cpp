#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	char line[20];             //Holds the characters from the file
	int num_of_lines = 1;      //Counts how many lines
	string fileName;           //Holds user file name
	fstream inputFile;         //Reads from file


	//Prompt user to type in file name
	cout << "Enter in a file name: " << endl;
	getline(cin, fileName);

	//Open file
	inputFile.open(fileName, ios::in);  //File access flag

	//Condition
	if (!inputFile)
	{
		cout << "File failed!" << endl;
	}
	else
	{
		cout << "File opened!\n";

		cout << endl;

		while (!inputFile.eof() && num_of_lines <= 10)      //File is not end of file(eof) and number of lines are less than or equal to 10
		{
			inputFile.getline(line, 21, '\n');           //Get each character from each line

			cout << line << endl;
			num_of_lines++;                             //Increment number of lines in the text file
		}

		if (num_of_lines < 10)
		{
			cout << "-------------------------------" << endl;
			cout << "Entire file has been displayed" << endl;
		}
	}

	inputFile.close();

	return 0;
}