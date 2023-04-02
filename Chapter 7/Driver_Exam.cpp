#include <iostream>	
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
	ifstream inputFile;  //Read from file


	const int SIZE = 20;          //Size of array (20 questions)
	char correctAnswers[SIZE];    //Hold Correct answers 
	char examAnswers[SIZE];       //Hold Drivers answers
	char incorrectlyAnswers[SIZE]; //Hold inco
	int num_correct{}, num_incorrect{};           //Number of answers correct and incorrect


	inputFile.open("CorrectAnswers.txt");  //Open file


	//Test if file opens or not
	if (!inputFile)
	{
		cout << "File failure...";
	}
	else
	{
		cout << "File opened successfully...\n";
	}


	//Read file into correctAnswers Array
	for (int i = 0; i < SIZE; i++)
	{
		inputFile >> correctAnswers[i];
	}


	//Prompt user to enter in exam answers
	cout << "\nDriver Exam\n";
	cout << "-----------------\n";
	cout << "Enter in the drivers answers:\n";
	

	//Grab users answers and store in array
	for (int count = 0; count < SIZE; count++)
	{
		cout << (count + 1) << ". ";
		cin >> examAnswers[count];
		examAnswers[count] = toupper(examAnswers[count]);  //Convert lowercase to uppercase

		//Input Validation (Only accept letters A, B, C, and D)
		while (examAnswers[count] != 'A' && examAnswers[count] != 'B' && examAnswers[count] != 'C' && examAnswers[count] != 'D')
		{
			cout << "Input Invalid!!! Please type A, B, C, or D as answers: ";
			cin >> examAnswers[count];
			examAnswers[count] = toupper(examAnswers[count]);
		}
	}


	//Count the number of questions correct and incorrect
	for (int count = 0; count < SIZE; count++)
	{
		if (examAnswers[count] == correctAnswers[count])
		{
			num_correct++;
		}

		if (examAnswers[count] != correctAnswers[count])
		{
			num_incorrect++;  //Count the incorrect answers
		}
	}

	//Test if driver passed or failed
	if (num_correct > 15)
	{
		cout << "\nPassed Examed";
	}
	else
	{
		cout << "\nFailed Examed";
	}


	cout << endl;
	cout << "Correct #'s: " << num_correct << endl;
	cout << "Incorrect #'s: " << num_incorrect << endl;
	cout << "List of questions answered incorrectly\n";
	cout << "-----------------------------------------\n";


	//List showing the question numbers of the incorrectly answered questions
	for (int count = 0; count < SIZE; count++)
	{
		if (examAnswers[count] != correctAnswers[count])
		{
			incorrectlyAnswers[count] = count;
			cout << "Question #" << (incorrectlyAnswers[count] + 1) << " is " << correctAnswers[incorrectlyAnswers[count]]
				 << ". Your answer was " << examAnswers[incorrectlyAnswers[count]] << endl;
		}
		else
		{
			cout << "Every answer was correct!!!" << endl;
		}
	}

	return 0;
}