/*
 * Save the Prisoner!
 *
 *		Author : Vishnu Vijayan
 *		  Date : 24-Jan-2017
 *		  Time : 5:16:11 PM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	int T;
	cin >> T;

	while(T--)
	{
		int N,M;
		cin >> N >> M;

		int S;
		cin >> S;

		if((S+M-1)%N)
			cout << (S+M-1)%N;

		else
			cout << N;

		cout << endl;
	}

	return 0;
}
