/*
 * Service Lane
 *
 *		Author : Vishnu Vijayan
 *		  Date : 02-Feb-2017
 *		  Time : 4:59:22 PM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	int N,T;
	cin >> N >> T;

	int lane_width[N];
	for(int i=0;i<N;++i)
		cin >> lane_width[i];

	while(T--)
	{
		int i,j;
		cin >> i >> j;

		int width = INT32_MAX;

		for(int w=i;w<=j;++w)
			width = min(lane_width[w],width);

		cout << width << endl;
	}

	return 0;
}
