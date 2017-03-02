/*
 * Library Fine
 *
 *		Author : Vishnu Vijayan
 *		  Date : 30-Jan-2017
 *		  Time : 3:22:38 PM
 *
 */

using namespace std;

#include <iostream>

struct Date
{
	int D;
	int M;
	int Y;
};

void getValue(struct Date* date)
{
	cin >> date->D >> date->M >> date->Y;
}

int getFine(struct Date actual, struct Date expected)
{
	if(actual.Y > expected.Y)
		return 10000;

	else if(actual.Y == expected.Y && actual.M > expected.M)
		return 500*(actual.M - expected.M);

	else if(actual.Y == expected.Y && actual.M == expected.M && actual.D > expected.D)
		return 15*(actual.D - expected.D);

	else
		return 0;
}

int main()
{
	struct Date actual;
	struct Date expected;

	getValue(&actual);
	getValue(&expected);

	cout << getFine(actual, expected);

	return 0;
}
