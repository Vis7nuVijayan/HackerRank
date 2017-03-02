/*
 * Mini-Max Sum
 *
 *		Author : Vishnu Vijayan
 *		  Date : 19-Jan-2017
 *		  Time : 12:19:25 PM
 *
 */

using namespace std;

#include <iostream>
#include <algorithm>

int main()
{
	long array[5];

	for(int i=0;i<5;++i)
		cin >> array[i];

	sort(array, array+5);

	long sum=0;
	for(int i=1;i<=3;++i)
		sum += array[i];

	cout << sum+array[0] << " " << sum+array[4];

	return 0;
}
