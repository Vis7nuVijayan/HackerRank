/*
 * Day 11 : 2D Arrays
 *
 *		Author : Vishnu Vijayan
 *		  Date : 12-Jan-2017
 *		  Time : 1:26:35 PM
 *
 */

using namespace std;

#include <iostream>

int getMaxSum(int a[][6])
{
	int max_sum = INT16_MIN;
	int sum;
	for(int i=1;i<5;++i)
	{
		for(int j=1;j<5;++j)
		{
			sum = a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
			max_sum = max(sum, max_sum);
		}
	}

	return max_sum;
}

void Initialize(int a[][6])
{
	for(int i=0;i<6;++i)
		for(int j=0;j<6;++j)
			cin >> a[i][j];
}

int main()
{
	int array[6][6];
	Initialize(array);

	cout << getMaxSum(array) << endl;

	return 0;
}
