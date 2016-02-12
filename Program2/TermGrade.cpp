#include "TermGrade.h"



bool TermGrade::ReadData(istream& in)
{
	fin >> ID >> Assignment >> Exam1 >> Exam2 >> Final >> endl;
	return true;
}
double TermGrade::MidsemesterScore() const
{
	return MidPercent;
}
double TermGrade::FinalScore() const
{
	return FinalPercent;
}
char TermGrade::LetterGrade() const
{
	return FinalGradeLetter;
}