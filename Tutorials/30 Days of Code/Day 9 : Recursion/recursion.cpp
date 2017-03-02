/*
 * Day 9 : Recursion
 *
 *		Author : Vishnu Vijayan
 *		  Date : 12-Jan-2017
 *		  Time : 12:21:20 AM
 *
 */

using namespace std;

#include <iostream>


int factorial(int n)
{
	if(n <= 1)
		return 1;

	return n*factorial(n-1);
}

int main()
{
	int n;
	cin >> n;

	cout << factorial(n) << endl;

	return 0;
}
