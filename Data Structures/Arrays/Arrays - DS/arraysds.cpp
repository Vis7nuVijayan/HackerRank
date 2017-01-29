/*
 * Arrays - DS
 *
 *		Author : Vishnu Vijayan
 *		  Date : 23-Jan-2017
 *		  Time : 9:23:01 PM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	int N;
	cin >> N;

	int A[N];

	for(int i=0;i<N;++i)
		cin >> A[i];

	for(int i=N-1;i>=0;--i)
		cout << A[i] << " ";

	cout << endl;

	return 0;
}
