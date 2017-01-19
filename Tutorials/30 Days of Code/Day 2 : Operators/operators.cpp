/*
 * Day 2 : Operators
 *
 *		Author : Vishnu Vijayan
 *		  Date : 09-Jan-2017
 *		  Time : 10:05:14 PM
 *
 */

using namespace std;

#include<iostream>
#include<cmath>

double getTip(double mc)
{
	int tipPercent;
	cin >> tipPercent;

	return mc*tipPercent/100;
}

double getTax(double mc)
{
	int taxPercent;
	cin >> taxPercent;

	return mc*taxPercent/100;
}

int main()
{
	double mealCost;
	cin >> mealCost;

	double tip = getTip(mealCost);
	double tax = getTax(mealCost);

	cout <<"The total meal cost is "<< round(mealCost+tip+tax) << " dollars.\n";

	return 0;
}
