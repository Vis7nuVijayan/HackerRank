/*
 * Beautiful Triplets
 *
 *		Author : Vishnu Vijayan
 *		  Date : 30-Jan-2017
 *		  Time : 10:11:39 PM
 *
 */

using namespace std;

#include <iostream>
#include <set>

int getCount(set<int> array, int a[],int n, int d)
{
	int count = 0;

	for(int i=0;i<n;++i)
		if(array.find(a[i]+d) !=  array.end() && array.find(a[i]+d+d) != array.end())
			++count;

	return count;
}

int main()
{
	int n,d;
	cin >> n >> d;

	int a[n];
	set<int> array;

	for(int i=0;i<n;++i)
	{
		cin >> a[i];
		array.insert(a[i]);
	}

	cout << getCount(array,a,n,d);

	return 0;
}
