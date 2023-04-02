#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile;          //Read file
	ofstream outputFile;         //Write to file

	//Open Files
	inputFile.open("Regular.txt", ios::in);
	outputFile.open("Encrypted.txt", ios::out);

	char line;

	//Get each individual character
	while (inputFile.get(line))
	{
		outputFile.put(line+10);  //Add each character by 10(ASCII)
	}

	//Close Files
	inputFile.close();
	outputFile.close();

	//In file is the word "Sad"

	return 0;
}