/*
 * Apple and Orange
 *
 *		Author : Vishnu Vijayan
 *		  Date : 19-Jan-2017
 *		  Time : 12:54:20 PM
 *
 */

using namespace std;

#include <iostream>

int getCount(int no_of_Items, int tree_position, int s, int t)
{
	int d, count=0;

	for(int i=0;i<no_of_Items;++i)
	{
		cin >> d;
		if(tree_position+d>=s && tree_position+d<=t)
			++count;
	}

	return count;
}

int main()
{
	int s,t;
	cin >> s >> t;

	int a,b;
	cin >> a >> b;

	int m,n;
	cin >> m >> n;

	int apples=getCount(m,a,s,t);
	int oranges = getCount(n,b,s,t);

	cout << apples << endl << oranges;


	return 0;
}
