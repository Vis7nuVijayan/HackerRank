/*
 * Jumping on the Clouds
 *
 *		Author : Vishnu Vijayan
 *		  Date : 30-Jan-2017
 *		  Time : 3:38:56 PM
 *
 */

using namespace std;

#include <iostream>
#include <cmath>

int getMinJumps(int c[], int n)
{
	int dp[n];

	dp[0] = 0;

	if(c[1])
		dp[1] = 100;

	else
		dp[1] = 1;

	for(int i=2;i<n;++i)
	{
		if(c[i])
			dp[i] = 100;

		else
			dp[i] = 1 + min(dp[i-1],dp[i-2]);
	}

	return dp[n-1];
}

int main()
{
	int n;
	cin >> n;

	int c[n];
	for(int i=0;i<n;++i)
		cin >> c[i];

	cout << getMinJumps(c,n);

	return 0;
}
