#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class TermGrade
{
public:
	TermGrade();
	bool ReadData(istream & in);
	ifstream fin;
	double MidsemesterScore() const;
	double FinalScore() const;
	char LetterGrade() const;

private:

	int ID;
	int Exam1;
	int Exam2;
	int Final;
	char FinalGradeLetter;
	double MidPercent;
	double FinalPercent;
	int Assignment;
	


};
