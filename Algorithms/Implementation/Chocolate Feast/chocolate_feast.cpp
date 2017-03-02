/*
 * Chocolate Feast
 *
 *		Author : Vishnu Vijayan
 *		  Date : 02-Feb-2017
 *		  Time : 4:42:37 PM
 *
 */

using namespace std;

#include <iostream>

int chocolateCount(int n, int c, int m)
{
	int count_chocolates = n/c;
	int wrappers = n/c;

	while(wrappers/m > 0)
	{
		int free_chocolates = wrappers/m;
		wrappers = wrappers%m + free_chocolates;
		count_chocolates += free_chocolates;
	}

	return count_chocolates;
}

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n,c,m;
		cin >> n >> c >> m;

		cout << chocolateCount(n,c,m) << endl;
	}

	return 0;
}
