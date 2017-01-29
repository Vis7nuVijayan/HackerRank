/*
 * Dynamic Array
 *
 *		Author : Vishnu Vijayan
 *		  Date : 23-Jan-2017
 *		  Time : 9:34:05 PM
 *
 */

using namespace std;

#include <iostream>
#include <vector>

int main()
{
	int N;
	cin >> N;

	vector<int> seqList[N];

	int Q;
	cin >> Q;

	int lastAns = 0;

	while(Q--)
	{
		int q,x,y;
		cin >> q;

		switch(q)
		{
			case 1 :	cin >> x >> y;
						seqList[(x^lastAns)%N].push_back(y);

						break;

			case 2 :	cin >> x >> y;
						vector<int> seq = seqList[(x^lastAns)%N];
						lastAns = seq[y%seq.size()];
						cout << lastAns << endl;

						break;
		}
	}

	return 0;
}
