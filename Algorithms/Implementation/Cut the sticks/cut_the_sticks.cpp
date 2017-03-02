/*
 * Cut the sticks
 *
 *		Author : Vishnu Vijayan
 *		  Date : 30-Jan-2017
 *		  Time : 3:26:09 PM
 *
 */

using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

void printCut(vector<int> a)
{
	while(!a.empty())
	{
		cout << a.size() << endl;

		sort(a.begin(), a.end());

		int min = a[0];

		for(int i=0;i<a.size();++i)
			a[i] = a[i]-min;

		while(a.front() == 0)
			a.erase(a.begin());
	}
}

int main()
{

	int N;
	cin >> N;

	vector<int> a;
	int dummy;

	for(int i=0;i<N;++i)
	{
		cin >> dummy;
		a.push_back(dummy);
	}

	printCut(a);

	return 0;
}
