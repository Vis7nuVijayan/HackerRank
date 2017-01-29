/*
 * Find Digit
 *
 *		Author : Vishnu Vijayan
 *		  Date : 24-Jan-2017
 *		  Time : 5:57:57 PM
 *
 */

using namespace std;

#include <iostream>

int getDigitCount(int n)
{
	int m=n, count=0;
	int digit;

	while(m)
	{
		digit = m%10;

		if(digit != 0 && n%digit == 0)
			++count;

		m /= 10;
	}

	return count;
}

int main()
{
	int T;
	cin >> T;

	while(T--)
	{
		int N;
		cin >> N;

		cout << getDigitCount(N) << endl;
	}

	return 0;
}
