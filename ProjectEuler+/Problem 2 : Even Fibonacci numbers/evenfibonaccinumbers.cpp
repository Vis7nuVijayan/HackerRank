/*
 * Problem 2 : Even Fibonacci numbers
 *
 *		Author : Vishnu Vijayan
 *		  Date : 24-Jan-2017
 *		  Time : 2:53:59 PM
 *
 */

using namespace std;

#include <iostream>
#include <vector>

long getFibSum(long n)
{
	vector<long> fib;

	if(n == 1)
		return 0;

	fib.push_back(1);
	fib.push_back(2);

	long sum = 0;

	do
	{
		long size = fib.size();

		if(!(fib[size-1]&1))
			sum += fib[size-1];

		fib.push_back(fib[size-1]+fib[size-2]);

	}while(fib[fib.size()-1] < n);

	return sum;
}

int main()
{
	int T;
	cin >> T;

	while(T--)
	{
		long N;
		cin >> N;

		cout << getFibSum(N) << endl;
	}

	return 0;
}
