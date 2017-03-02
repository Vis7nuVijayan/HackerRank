/*
 * Manasa and Stones
 *
 *		Author : Vishnu Vijayan
 *		  Date : 30-Jan-2017
 *		  Time : 11:04:50 PM
 *
 */

using namespace std;

#include <iostream>
#include <cmath>

int main()
{
	int T;
	cin >> T;

	while(T--)
	{
		int n;
		cin >> n;

		int temp1,temp2;
		cin >> temp1 >> temp2;

		int a = min(temp1,temp2);
		int b = max(temp1,temp2);

		if(a == b)
			cout << a*(n-1);

		else
		{
			for(int i=0;i<n;++i)
				cout << (n-i-1)*a+i*b << " ";
		}

		cout << endl;
	}

	return 0;
}
