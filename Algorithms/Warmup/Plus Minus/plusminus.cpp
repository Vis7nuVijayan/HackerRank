/*
 * Plus Minus
 *
 *		Author : Vishnu Vijayan
 *		  Date : 16-Jan-2017
 *		  Time : 10:26:17 PM
 *
 */

using namespace std;

#include <iostream>
#include <iomanip>

void Initialize(int array[], int n)
{
	int temp;
	for(int i=0;i<n;++i)
	{
		cin >> temp;
		if(temp < 0)
			array[0]++;

		else if(temp > 0)
			array[2]++;

		else
			array[1]++;
	}
}

void getFractions(int array[], int n)
{
	cout << setprecision(6) << (double)array[2]/n << endl;
	cout << setprecision(6) << (double)array[0]/n << endl;
	cout << setprecision(6) << (double)array[1]/n << endl;
}

int main()
{
	int N;
	cin >> N;

	int array[3];
	fill(array, array+3, 0);

	Initialize(array,N);

	getFractions(array,N);

	return 0;
}
