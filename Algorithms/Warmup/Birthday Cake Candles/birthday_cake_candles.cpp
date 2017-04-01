/*
 * Birthday Cake Candles
 *
 *		Author : Vishnu Vijayan
 *		  Date : 01-Apr-2017
 *		  Time : 3:49:14 PM
 *
 */

using namespace std;

#include <iostream>
#include <map>
#include <set>

int main()
{
	int n;
	cin >> n;

	map<int,int> height_count;
	set<int> height;
	int dummy;

	while(n--)
	{
		cin >> dummy;

		if(height_count.find(dummy) != height_count.end())
			height_count[dummy]++;

		else
		{
			height_count[dummy]=1;
			height.insert(dummy);
		}
	}

	cout << height_count[*height.rbegin()];

	return 0;
}
