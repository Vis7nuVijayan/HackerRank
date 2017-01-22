/*
 * Beautiful Days at the Movies
 *
 *		Author : Vishnu Vijayan
 *		  Date : 20-Jan-2017
 *		  Time : 8:15:36 PM
 *
 */

using namespace std;

#include <iostream>
#include <string>
#include <algorithm>

int getCount(long i, long j, long k)
{
	int count=0;

	for(long day=i;day<=j;++day)
	{
		string num = to_string(day);

		string rev_num = num;
		reverse(rev_num.begin(), rev_num.end());

		long rev_day = stol(rev_num);

		if(abs(day-rev_day)%k == 0)
			++count;
	}

	return count;
}

int main()
{
	long i,j;
	cin >> i >> j;

	long k;
	cin >> k;

	cout << getCount(i,j,k);

	return 0;
}
