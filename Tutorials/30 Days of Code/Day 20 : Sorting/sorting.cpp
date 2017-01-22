/*
 * Day 20 : Sorting
 *
 *		Author : Vishnu Vijayan
 *		  Date : 20-Jan-2017
 *		  Time : 12:31:07 PM
 *
 */

using namespace std;

#include <iostream>

void swap(int* a, int* b)
{
	*a=*a^*b;
	*b=*a^*b;
	*a=*a^*b;
}

int BubbleSort(int a[], int n)
{
	int count = 0;

	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n-i-1;++j)
			if(a[j] > a[j+1])
			{
				swap(&a[j],&a[j+1]);
				++count;
			}
	}

	return count;
}

int main()
{
	int n;
	cin >> n;

	int a[n];
	for(int i=0;i<n;++i)
		cin >> a[i];

	int swaps = BubbleSort(a,n);

	cout << "Array is sorted in " << swaps << " swaps." << endl;
	cout << "First Element: " << a[0] << endl;
	cout << "Last Element: " << a[n-1] << endl;

	return 0;
}
