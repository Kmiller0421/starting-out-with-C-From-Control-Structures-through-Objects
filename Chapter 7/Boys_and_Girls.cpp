#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int mostPopular(string[], string name);                  //Function Prototype

int main()
{
	ifstream boyInputFile("BoyNames.txt");              
	ifstream girlInputFile("GirlNames.txt");

	const int SIZE = 100;                              //Initialize Declarator
	string boys[SIZE] = {};
	string girls[SIZE] = {};
	string girlName, boyName;                           
	int total = 0;

	
	if (boyInputFile.fail())                         //Test BoyNames.txt file
	{
		cout << "File Failure";
	}
	else
	{
		cout << "Boys file opened";
		cout << endl;
	}


	if (girlInputFile.fail())                       //Test GirlNames.txt file
	{
		cout << "File failure";
	}
	else
	{
		cout << "Girls file opened";
		cout << endl;
	}


	cout << "Enter in a boys name: ";                  //Prompt and type in boy name
	getline(cin, boyName);

	cout << "Enter in a girl's name: ";               //Prompt and type in girl name
	getline(cin, girlName);


	while (total < SIZE)                                //Loop to read the name from the files
	{
		getline(boyInputFile, boys[total]);
		getline(girlInputFile, girls[total]);
		total++;
	}


	if (mostPopular(boys, boyName) == 1)
	{
		cout << boyName << " is the"
			 <<" most popular boy name"
			 << endl;
	}
	else
	{
		cout << boyName << " is not the"
			 << " most popular boy name"
			 << endl;
	}


	if (mostPopular(girls, girlName) == 1)
	{
		cout << girlName << " is the"
			 << " most popular girl name"
			 << endl;
	}
	else
	{
		cout << girlName << " is not the"
			 << " most popular girl name"
			 << endl;
	}
	return 0;
}

int mostPopular(string popularNames[], string inputName)               //Function Defintion
{
	int key = 0;
	int i = 0;

	while (i < 100)                                                    //Test if boy or girl name equals popular names
	{
		if (inputName == popularNames[i])
		{
			key = 1;
			break;
		}
		i++;
	}
	return key;
}