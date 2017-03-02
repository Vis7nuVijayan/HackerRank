/*
 * Sock Merchant
 *
 *		Author : Vishnu Vijayan
 *		  Date : 20-Jan-2017
 *		  Time : 7:51:16 PM
 *
 */

using namespace std;

#include <iostream>
#include <set>

int getMatchingPairs(int n)
{
	set<int> socks;
	int temp, count=0;

	for(int i=0;i<n;++i)
	{
		cin >> temp;

		if(socks.find(temp) != socks.end())
		{
			++count;
			socks.erase(temp);
		}

		else
			socks.insert(temp);
	}

	return count;
}

int main()
{
	int n;
	cin >> n;

	cout << getMatchingPairs(n);

	return 0;
}
