/*
 * The Hurdle Race
 *
 *		Author : Vishnu Vijayan
 *		  Date : 02-Mar-2017
 *		  Time : 4:11:45 PM
 *
 */

using namespace std;

#include <iostream>
#include <algorithm>

int main()
{
	int n,k;
	cin >> n >> k;

	int height[n];
	for(int i=0;i<n;++i)
		cin >> height[i];

	sort(height,height+n);

	if(height[n-1]-k < 0)
		cout << 0;

	else
		cout << height[n-1]-k;

	return 0;
}
