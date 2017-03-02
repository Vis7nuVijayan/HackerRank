/*
 * Problem 3 : Largest Prime Factor
 *
 *		Author : Vishnu Vijayan
 *		  Date : 29-Jan-2017
 *		  Time : 3:42:00 PM
 *
 */

using namespace std;

#include <iostream>
#include <cmath>

long getLargestPrimeFactor(long n)
{
	long root = sqrt(n);

	long factor = 0;

	for(long i=2;i<=root;++i)
	{
		while(n%i == 0)
		{
			factor = i;
			n /= i;
		}
	}

	if(n == 1)
		return factor;

	return n;
}

int main()
{
	int T;
	cin >> T;

	while(T--)
	{
		long N;
		cin >> N;

		cout << getLargestPrimeFactor(N) << endl;
	}

	return 0;
}
