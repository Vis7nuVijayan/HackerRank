/*
 * Simple Array Sum
 *
 *		Author : Vishnu Vijayan
 *		  Date : 16-Jan-2017
 *		  Time : 8:41:53 PM
 *
 */

using namespace std;

#include <iostream>

int Sum(int n)
{
	int temp;
	int sum = 0;

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
