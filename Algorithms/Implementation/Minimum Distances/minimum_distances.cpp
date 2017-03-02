/*
 * Minimum Distances
 *
 *		Author : Vishnu Vijayan
 *		  Date : 31-Jan-2017
 *		  Time : 3:48:45 PM
 *
 */

using namespace std;

#include <iostream>
#include <map>

int getMinD(int n)
{
	int minD = INT32_MAX;
	map<int,int> array;
	int dummy;

	for(int i=0;i<n;++i)
	{
		cin >> dummy;

		if(array.find(dummy) != array.end())
		{
			minD = min(i-array[dummy],minD);
			array[dummy] = i;
		}

		else
			array.insert(make_pair(dummy,i));
	}

	if(minD == INT32_MAX)
		return -1;

	return minD;
}

int main()
{
	int n;
	cin >> n;

	cout << getMinD(n);

	return 0;
}
