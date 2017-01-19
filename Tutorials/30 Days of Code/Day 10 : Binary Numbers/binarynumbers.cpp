/*
 * Day 10 : Binary Numbers
 *
 *		Author : Vishnu Vijayan
 *		  Date : 12-Jan-2017
 *		  Time : 1:14:00 PM
 *
 */

using namespace std;

#include <iostream>
#include <algorithm>

string getBinary(int n)
{
	string s;
	while(n)
	{
		s += (n%2+'0');
		n = n >> 1;
	}

	reverse(s.begin(), s.end());

	return s;
}

int getCount(string binary)
{
	int count = 0;
	int max_count = 0;

	for(char c : binary)
	{
		if(c == '1')
			++count;

		else
			count = 0;

		max_count = max(count, max_count);
	}

	return max(count, max_count);
}

int main()
{
	int n;
	cin >> n;

	string binary = getBinary(n);

	cout << getCount(binary) << endl;

	return 0;
}
