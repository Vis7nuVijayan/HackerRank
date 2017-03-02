/*
 * Divisible Sum Pairs
 *
 *		Author : Vishnu Vijayan
 *		  Date : 20-Jan-2017
 *		  Time : 7:27:05 PM
 *
 */

using namespace std;

#include <iostream>

int getCount(int a[], int n, int k)
{
	int count = 0;

	for(int i=0;i<n;++i)
		for(int j=i+1;j<n;++j)
			if((a[i]+a[j])%k == 0)
				++count;

	return count;
}

int main()
{
	int n;
	cin >> n;

	int k;
	cin >> k;

	int a[n];
	for(int i=0;i<n;++i)
		cin >> a[i];

	cout << getCount(a,n,k);

	return 0;
}
