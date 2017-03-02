/*
 * Kangaroo
 *
 *		Author : Vishnu Vijayan
 *		  Date : 19-Jan-2017
 *		  Time : 1:38:20 PM
 *
 */

using namespace std;

#include <iostream>
#include <cmath>

string jumpLocation(int x1,int v1,int x2,int v2,int prev_diff)
{
	if(x1 == x2)
		return "YES";

	int diff = abs((x1+v1)-(x2+v2));

	if(diff < prev_diff)
		return jumpLocation(x1+v1,v1,x2+v2,v2,diff);

	return "NO";
}

int main()
{
	int x1,v1;
	cin >> x1 >> v1;

	int x2,v2;
	cin >> x2 >> v2;

	cout << jumpLocation(x1,v1,x2,v2,INT16_MAX);

	return 0;
}
