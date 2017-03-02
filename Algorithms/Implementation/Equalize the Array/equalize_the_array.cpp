/*
 * Equalize the Array
 *
 *		Author : Vishnu Vijayan
 *		  Date : 11-Feb-2017
 *		  Time : 3:19:40 PM
 *
 */

using namespace std;

#include <iostream>
#include <map>

int main()
{
	int n;
	cin >> n;

	map<int,int> array;

	int dummy;
	for(int i=0;i<n;++i)
	{
		cin >> dummy;
		array[dummy]++;
	}

	int max_value=0;

	for(auto item : array)
		max_value = max(max_value,item.second);

	cout << n-max_value;

	return 0;
}
