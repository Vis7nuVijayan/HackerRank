/*
 * Bigger is Greater
 *
 *		Author : Vishnu Vijayan
 *		  Date : 12-Feb-2017
 *		  Time : 12:21:08 AM
 *
 */

using namespace std;

#include <iostream>
#include <algorithm>

int main()
{
	int t;
	cin >> t;

	string w;
	getline(cin,w);

	while(t--)
	{
		cin >> w;

		if(next_permutation(w.begin(),w.end()))
			cout << w;

		else
			cout << "no answer";

		cout << endl;
	}

	return 0;
}
