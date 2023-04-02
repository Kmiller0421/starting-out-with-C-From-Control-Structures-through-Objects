#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct MovieData
{
	string title;                    //Title of movie
	string director;                 //Director of movie
	string yearReleased;             //Year movie was released
	string runningTime;              //Running time of movie (minutes)
};

//Function Prototype
void DisplayData(MovieData);

int main()
{
	MovieData information;

	//Function Call
	DisplayData(information);

	return 0;
}

//Function Definition
void DisplayData(MovieData I)
{
	cout << "Movie Data";
	cout << "\n---------------------";

	cout << "\nEnter in movie title: ";
	getline(cin, I.title);

	cout << "Enter in directors name: ";
	getline(cin, I.director);

	cout << "Enter in year released: ";
	getline(cin, I.yearReleased);

	cout << "Enter in running time in minutes(0:00): ";
	getline(cin, I.runningTime);

	cout << "\nTitle: " << I.title << endl;
	cout << "\nDirector: " << I.director << endl;
	cout << "\nYear Released: " << I.yearReleased << endl;
	cout << "\nRunning Time: " << I.runningTime << " minutes" << endl;
}