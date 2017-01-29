/*
 * Day 25 : Running Time and Complexity
 *
 *		Author : Vishnu Vijayan
 *		  Date : 27-Jan-2017
 *		  Time : 11:59:38 AM
 *
 */

using namespace std;

#include <iostream>
#include <cmath>

string isPrime(int n)
{
	if (n == 1)
		return "Not prime";

	for(int i=2;i<=sqrt(n);++i)
		if(n%i == 0)
			return "Not prime";

	return "Prime";
}

int main()
{
	int T;
	cin >> T;

	while(T--)
	{
		int N;
		cin >> N;

		cout << isPrime(N) << endl;
	}

	return 0;
}
