/*
 * Problem 1 : Multiples of 3 and 5
 *
 *		Author : Vishnu Vijayan
 *		  Date : 23-Jan-2017
 *		  Time : 12:14:42 PM
 *
 */

using namespace std;

#include <iostream>

long long getAP(int a, long long n)
{
	return (a*n*(n+1))>>1;
}

long long getSum(long long n)
{
	return getAP(3,n/3) + getAP(5,n/5) - getAP(15,n/15);
}

int main()
{
	int T;
	cin >> T;

	while(T--)
	{
		long long N;
		cin >> N;

		cout << getSum(N-1) << endl;
	}

	return 0;
}
