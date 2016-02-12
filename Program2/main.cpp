/*********************************************

Name:	Scott Peery
Course:	CS201R
Program:	Program 2
Due Date:	Due Sunday night, February 14

Description: This will be a program that takes in data from a file
and returns requested information to an output file. This program will
be used to show data for a classes grades in letter and percentage score
based on the menu option chosen. Options will be grade before final exam,
after final exam, or both.

Inputs:	Read in file with data named "grade1.txt"
		Get user input from menu options.

Outputs: Write data requested from user option to new file
			named "finalgrade.txt"

Algorithm:
1. Read in data from "grade1.txt"
	a. check for data present in file and return error if none found
		i. display warning to user and close program
	b. loop for reading in data to variables:
		i. student id
		ii. assignments
		iii. exam1
		iv. exam2
		v. final exam
	c. close file "grade1.txt"

2. Display menu to user for info selection for output file
	a. Three option choices:
		i. Grades after exam 2
		ii. Grades after final exam
		iii. Both option 1 and 2
	b. error handeling for incorrect option input
	c. loop until correct option chosen

3. Create header called student.h

4. Create implementation file called student.cpp

5. Determine which functions to use based off menu choice

6. Write data to output file "finalgrade.txt"

*********************************************/
#include <iostream> // for input/output info
#include <iomanip> // for formating data output
#include <fstream> // for reading and writing files
#include <sstream> //string stream
#include "TermGrade.h"
using namespace std;

int menuOption();

int main() // begin main program
{
	ifstream fin; // initiate variable input stream
	ofstream fout; // intitiate variable output stream
	
	fin.open("grade1.txt"); // open file
	fout.open("output.txt"); // open|create output.txt file
	
	// if/else statement to check file for data

	 menuOption(); // call function for menu

	// call function to read data to variables

	system("pause");
	fin.close(); // close file "grade1.txt'
	fout.close(); //close output.txt
	return 0;
}

int menuOption()
{
	char choice;
	int midTerm=0, endOfTerm=0, bothTerms=0;

	cout << "Please select from the following options:" << endl;
	cout << "1. Grades after Exam 2 \n" << "2. Grades after Final Exam \n" <<
		"3. Both options 1 and 2 \n";

	cin >> choice; // get input from user 

	switch(choice) // determine what will be done with the choice
	{
	case '1': return midTerm; break; 
	case '2': return endOfTerm; break;
	case '3': return bothTerms;  break;
	}

	if (choice != '1' || '2' || '3') // loop if user gives inproper input
	{
		cout << "You have entered invalid input. Please enter 1, 2, or 3"<< endl;
		choice = menuOption();
	}
}

