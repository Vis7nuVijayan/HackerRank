/*
 * Day 29 : Bitwise AND
 *
 *		Author : Vishnu Vijayan
 *		  Date : 28-Jan-2017
 *		  Time : 10:28:03 PM
 *
 */

using namespace std;

#include <iostream>
#include <cmath>

int getMax(int n, int k)
{
	int max_value = 0;

	for(int A=1;A<=n;++A)
	{
		for(int B=A+1;B<=n;++B)
		{
			if((A&B) < k)
				max_value = max(max_value, A&B);
		}
	}

	return max_value;
}

int main()
{
	int T;
	cin >> T;

	while(T--)
	{
		int N,K;
		cin >> N >> K;

		cout << getMax(N,K) << endl;
	}

	return 0;
}
