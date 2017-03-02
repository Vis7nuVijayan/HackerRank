/*
 * Problem 5 : Smallest multiple
 *
 *		Author : Vishnu Vijayan
 *		  Date : 01-Feb-2017
 *		  Time : 6:17:21 PM
 *
 */

using namespace std;

#include <iostream>
#include <cmath>

long getSmallest(int n)
{
	bool prime[n+1];

	fill(prime, prime+n+1, true);

	for(int i=2;i*i<=n;++i)
	{
		if(prime[i])
			for(int j=i*i;j<=n;j+=i)
				prime[j] = false;
	}

	long prod = 1;
	for(int i=2;i<=n;++i)
	{

		int k=1;

		if(prime[i])
		{
			while((int)(pow(i,k))<=n)
				++k;

			prod *= pow(i,--k);
		}
	}

	return prod;
}

int main()
{

	int T;
	cin >> T;

	while(T--)
	{
		int N;
		cin >> N;

		cout << getSmallest(N) << endl;
	}

	return 0;
}
