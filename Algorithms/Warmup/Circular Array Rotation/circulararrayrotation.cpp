/*
 * Circular Array Rotation
 *
 *		Author : Vishnu Vijayan
 *		  Date : 16-Jan-2017
 *		  Time : 11:59:07 PM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	int n,k,q;
	cin >> n >> k >> q;

	int array[n];

	for(int i=0;i<n;++i)
		cin >> array[(i+k)%n];

	while (q--)
	{
		int query;
		cin >> query;

		cout << array[query] << endl;
	}

	return 0;
}
