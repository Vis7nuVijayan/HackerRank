/*
 * Sherlock and Squares
 *
 *		Author : Vishnu Vijayan
 *		  Date : 29-Jan-2017
 *		  Time : 4:17:48 PM
 *
 */

using namespace std;

#include <iostream>
#include <cmath>

int getSquareCount(int a, int b)
{
	a = ceil(sqrt(a));
	b = floor(sqrt(b));

	return b-a+1;
}

int main()
{
	int T;
	cin >> T;

	while(T--)
	{
		int A,B;
		cin >> A >> B;

		cout << getSquareCount(A,B) << endl;
	}

	return 0;
}
