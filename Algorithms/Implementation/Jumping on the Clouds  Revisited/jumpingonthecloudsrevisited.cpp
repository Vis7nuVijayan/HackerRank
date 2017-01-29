/*
 * Jumping on the Clouds : Revisited
 *
 *		Author : Vishnu Vijayan
 *		  Date : 24-Jan-2017
 *		  Time : 5:22:59 PM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	int n,k;
	cin >> n >> k;

	int c[n];
	for(int i=0;i<n;++i)
		cin >> c[i];

	int jump = 0;
	int E = 100;

	do
	{
		jump = (jump+k)%n;
		--E;
		E -= 2*c[jump];
	}while(jump%n);

	cout << E;

	return 0;
}
