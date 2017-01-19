/*
 * Day 7 : Arrays
 *
 *		Author : Vishnu Vijayan
 *		  Date : 11-Jan-2017
 *		  Time : 11:47:26 PM
 *
 */

using namespace std;

#include<iostream>


void getArray(int a[], int n)
{
	for(int i=0;i<n;++i)
		cin >> a[i];
}

void printReverse(int a[], int n)
{
	for(int i=n-1;i>=0;--i)
		cout << a[i] << " ";
}

int main()
{
	int n;
	cin >> n;

	int a[n];
	getArray(a,n);

	printReverse(a,n);

	return 0;
}
