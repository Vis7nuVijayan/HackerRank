/*
 * Grading Students
 *
 *		Author : Vishnu Vijayan
 *		  Date : 02-Mar-2017
 *		  Time : 3:09:19 PM
 *
 */

using namespace std;

#include <iostream>

int RoundGrade(int);

int main()
{
	int n;
	cin >> n;

	int grade[n];
	for(int i=0;i<n;++i)
		cin >> grade[i];

	for(int g : grade)
		cout << RoundGrade(g) << endl;

	return 0;
}

int RoundGrade(int grade)
{
	int quotient = grade/5;

	if((quotient+1)*5-grade < 3 && grade > 37)
		return (quotient+1)*5;

	return grade;
}
