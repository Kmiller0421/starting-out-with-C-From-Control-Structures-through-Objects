#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
using namespace std;

int WordCounter(char*, int);

int main()
{
	int wordCount = 0, 
		lineCount = 0;

	fstream inputFile;

	inputFile.open("text.txt", ios::in);

	if (inputFile)
	{
		cout << "I am about to calculate the average amount of words-per-sentence in 'text.txt.'" << endl;

		while (!inputFile.eof())
		{
			const int SIZE = 101;
			char string[SIZE];

			inputFile.getline(string, 100);
	
			wordCount += WordCounter(string, SIZE);
			
			lineCount++;
		}

		cout << "This file has " << (float)wordCount / lineCount << " words/sentence." << endl;
	}

	return 0;
}

int WordCounter(char* string, int SIZE)
{
	int lineWordCount = 1;

	bool foundSpace = false; 

	if (isalnum(string[0]))
		lineWordCount++;

	while (*string)
	{
		if (*string == '/0')
			break;

		if (isspace(*string) && !foundSpace)
		{
			foundSpace = true;
			continue;
		}

		else if (isalnum(*string) && foundSpace)
		{
			foundSpace = false;
			lineWordCount++;
		}

		string++;
	}

	return lineWordCount;
}