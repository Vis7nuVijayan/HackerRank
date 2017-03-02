/*
 * Day 16 : Exceptions - String to Integer
 *
 *		Author : Vishnu Vijayan
 *		  Date : 16-Jan-2017
 *		  Time : 9:59:18 AM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	try
	{
		string s;
		cin >> s;

		cout << stoi(s);
	}

	catch(invalid_argument& ia)
	{
		cout << "Bad String";
	}

	return 0;
}
