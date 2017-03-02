/*
 * Staircase
 *
 *		Author : Vishnu Vijayan
 *		  Date : 16-Jan-2017
 *		  Time : 10:35:40 PM
 *
 */

using namespace std;

#include <iostream>

void printHash(int n)
{
	for(int i=0;i<n;++i)
		cout << "#";
}

void printSpace(int n)
{
	for(int i=0;i<n;++i)
		cout << " ";
}

void printStaircase(int n)
{
	for(int i=1;i<=n;++i)
	{
		printSpace(n-i);
		printHash(i);
		cout << endl;
	}
}

int main()
{
	int N;
	cin >> N;

	printStaircase(N);

	return 0;
}
