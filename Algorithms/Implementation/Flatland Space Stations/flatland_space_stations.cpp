/*
 * Flatland Space Stations
 *
 *		Author : Vishnu Vijayan
 *		  Date : 26-Feb-2017
 *		  Time : 7:15:08 PM
 *
 */

using namespace std;

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	int n,m;
	cin >> n >> m;

	vector<int> space_station;
	int dummy;

	while(m--)
	{
		cin >> dummy;
		space_station.push_back(dummy);
	}

	sort(space_station.begin(),space_station.end());

	int prev_station = space_station[0];
	int max_minDistance = 0;
	for(int i=1;i<space_station.size();++i)
	{
		max_minDistance = max(max_minDistance,(space_station[i]-prev_station)/2);
		prev_station = space_station[i];
	}

	max_minDistance = max(max_minDistance,space_station[0]-0);
	max_minDistance = max(max_minDistance,(n-1-space_station[space_station.size()-1]));

	cout << max_minDistance;

	return 0;
}
