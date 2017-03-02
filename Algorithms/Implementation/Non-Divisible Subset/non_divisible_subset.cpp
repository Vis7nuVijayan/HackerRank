/*
 * Non-Divisible Subset
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Feb-2017
 *		  Time : 11:19:29 PM
 *
 */

using namespace std;

#include <iostream>
#include <algorithm>

int main()
{
	int n,k;
	cin >> n >> k;

	int a[k];
	fill(a,a+k,0);

	int dummy;
	for(int i=0;i<n;++i)
	{
		cin >> dummy;
		a[dummy%k]++;
	}

	int count = min(a[0],1);
	for(int i=1;i<=k/2;++i)
	{
		if(i != k-i)
		count += max(a[i],a[k-i]);
	}

	if(!(k&1))
		count += min(a[k/2],1);

	cout << count;

	return 0;
}
