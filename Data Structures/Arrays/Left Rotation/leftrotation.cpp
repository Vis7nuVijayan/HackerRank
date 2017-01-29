/*
 * Left Rotation
 *
 *		Author : Vishnu Vijayan
 *		  Date : 23-Jan-2017
 *		  Time : 10:43:25 PM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	int n,d;
	cin >> n >> d;

	int array[n];

	for(int i=0;i<n;++i)
		cin >> array[(n+i-d)%n];

	for(int i : array)
		cout << i << " ";

	return 0;
}
