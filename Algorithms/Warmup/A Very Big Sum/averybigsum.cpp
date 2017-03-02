/*
 * A Very Big Sum
 *
 *		Author : Vishnu Vijayan
 *		  Date : 16-Jan-2017
 *		  Time : 8:56:55 PM
 *
 */

using namespace std;

#include <iostream>

long long Sum(int n)
{
	long temp;
	long long sum = 0;

	for(int i=0;i<n;++i)
	{
		cin >> temp;
		sum += temp;
	}

	return sum;
}

int main()
{
	int N;
	cin >> N;

	cout << Sum(N);

	return 0;
}
