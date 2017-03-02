/*
 * Lisa's Workbook
 *
 *		Author : Vishnu Vijayan
 *		  Date : 02-Feb-2017
 *		  Time : 5:58:09 PM
 *
 */

using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

int getSpecialCount(int t[], int n, int k)
{
	vector<vector<int>> pages;

	for(int i=0;i<n;++i)
	{
		vector<int> problems;
		for(int p=0;p<t[i];++p)
		{
			problems.push_back(p);

			if(p%k == k-1)
			{
				pages.push_back(problems);
				problems.clear();
			}
		}

		if(!problems.empty())
			pages.push_back(problems);
	}

	int count = 0;

	for(int i=0;i<pages.size();++i)
		if(find(pages[i].begin(),pages[i].end(),i) != pages[i].end())
			++count;

	return count;
}

int main()
{
	int n,k;
	cin >> n >> k;

	int t[n];
	for(int i=0;i<n;++i)
		cin >> t[i];

	cout << getSpecialCount(t,n,k);

	return 0;
}
