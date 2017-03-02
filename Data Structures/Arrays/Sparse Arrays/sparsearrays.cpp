/*
 * Sparse Arrays
 *
 *		Author : Vishnu Vijayan
 *		  Date : 23-Jan-2017
 *		  Time : 10:49:30 PM
 *
 */

using namespace std;

#include <iostream>
#include <vector>

int main()
{
	int N;
	cin >> N;

	vector<string> str;
	string dummy;

	for(int i=0;i<N;++i)
	{
		cin >> dummy;
		str.push_back(dummy);
	}

	int Q;
	cin >> Q;

	while(Q--)
	{
		int count = 0;
		cin >> dummy;

		for(string s : str)
			if(s.compare(dummy) == 0)
				++count;

		cout << count << endl;
	}

	return 0;
}
