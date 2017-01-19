/*
 * Day 3 : Intro to Conditional Statements
 *
 *		Author : Vishnu Vijayan
 *		  Date : 09-Jan-2017
 *		  Time : 10:32:48 PM
 *
 */

using namespace std;

#include<iostream>


string isWeird(int n)
{
	if(n&1 || n>=6 && n<=20)
		return "Weird";

	return "Not Weird";
}

int main()
{
	int n;
	cin >> n;

	cout << isWeird(n) << endl;

	return 0;
}
