#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	fstream inputFile;               //Reads from file  
	string fileName;                 //Holds user file name
	char line[30];                   //Hold characters from the file
	int count = 1;                   //Count how many lines there are


	//Prompt user to enter in file name
	cout << "Enter in the files name: " << endl;
	getline(cin, fileName);

	//Open file
	inputFile.open(fileName, ios::in);  //File access flag

	//Condition
	if (!inputFile)
	{
		cout << "File failed!";
	}
	else
	{
		cout << "File opened!\n";

		cout << endl;

		while (!inputFile.eof())                              //End of file(eof)/Read past the end of a file
		{
			inputFile.getline(line, 31, '\n');                //Get each character from each line

			cout << count << ":" << line << endl << endl;    //Display to user (1: George Rolland)

			count++;         //Increment count
		}
	}

	//Close file
	inputFile.close();

	return 0;
}