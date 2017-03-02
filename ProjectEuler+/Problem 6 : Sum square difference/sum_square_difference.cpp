/*
 * Problem 6 : Sum square difference
 *
 *		Author : Vishnu Vijayan
 *		  Date : 02-Feb-2017
 *		  Time : 12:17:04 PM
 *
 */

using namespace std;

#include <iostream>
#include <cmath>

long sumOfSeries(int n)
{
	return (1L*n*(n+1))/2;
}

long sumSquareDifference(int n)
{
	long sum = sumOfSeries(n);
	long square_sum = pow(sum,2);

	long sum_square = (sumOfSeries(n)*(2*n+1))/3;

	return square_sum-sum_square;
}

int main()
{
	int T;
	cin >> T;

	while(T--)
	{
		int N;
		cin >> N;

		cout << sumSquareDifference(N) << endl;
	}

	return 0;
}
