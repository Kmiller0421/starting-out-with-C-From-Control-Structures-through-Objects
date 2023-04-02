#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
	ifstream inputFile;         //input file
	ofstream outputFile;        //output file
	
	//Hold users file name
	string fileName_1,         
		   fileName_2;

	char line;

	//Prompt user to enter in two files
	cout << "Enter in the first file name: ";
	cin >> fileName_1;
	cout << "Enter in the second file name: ";
	cin >> fileName_2;

	inputFile.open(fileName_1, ios::in);               //Read File
	outputFile.open(fileName_2, ios::out);             //Ouput file

	//Until end of file is read
	while (!inputFile.eof())
	{
		inputFile.get(line);
		outputFile.put(toupper(line));
		inputFile.get(line);

		//Check if the character is '.'
		while (line != '.')
		{
			outputFile.put(tolower(line));
			inputFile.get(line);
		}
		inputFile.get(line);
		
		outputFile << endl;
	}

	//Close files
	inputFile.close();
	outputFile.close();

	return 0;
}