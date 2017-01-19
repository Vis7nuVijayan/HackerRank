/*
 * Day 6 : Let's Review
 *
 *		Author : Vishnu Vijayan
 *		  Date : 11-Jan-2017
 *		  Time : 11:41:13 PM
 *
 */

using namespace std;

#include<iostream>


void printEvenOdd(string s)
{
	string ss[2];

	for(int i=0;i<s.length();++i)
		ss[i%2] += s[i];

	cout << ss[0] << " " << ss[1];

}

int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		string s;
		cin >> s;

		printEvenOdd(s);

		cout << endl;
	}

	return 0;
}
