/*
 * Utopian Tree
 *
 *		Author : Vishnu Vijayan
 *		  Date : 20-Jan-2017
 *		  Time : 7:58:47 PM
 *
 */

using namespace std;

#include <iostream>

int getHeight(int n)
{
	int height = 1;

	for(int i=1;i<=n;++i)
	{
		if(i&1)
			height *= 2;

		else
			++height;
	}

	return height;
}

int main()
{
	int testcases;
	cin >> testcases;

	while(testcases--)
	{
		int N;
		cin >> N;

		cout << getHeight(N) << endl;
	}

	return 0;
}
