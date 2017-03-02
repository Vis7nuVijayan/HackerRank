/*
 * Bon Appetit
 *
 *		Author : Vishnu Vijayan
 *		  Date : 20-Jan-2017
 *		  Time : 7:44:40 PM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	int n;
	cin >> n;

	int k;
	cin >> k;

	int c[n];
	int total = 0;
	for(int i=0;i<n;++i)
	{
		cin >> c[i];
		total += c[i];
	}

	int b_charged;
	cin >> b_charged;

	int b_actual = (total-c[k])/2;

	if(b_charged == b_actual)
		cout << "Bon Appetit";

	else
		cout << b_charged-b_actual;

	return 0;
}
