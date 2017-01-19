/*
 * Day 5 : Loops
 *
 *		Author : Vishnu Vijayan
 *		  Date : 09-Jan-2017
 *		  Time : 10:40:37 PM
 *
 */

using namespace std;

#include<iostream>


void printTable(int n)
{
	for(int i=1;i<=10;++i)
		cout << n << " x " << i << " = " << n*i << endl;
}

int main()
{
	int n;
	cin >> n;

	printTable(n);

	return 0;
}
