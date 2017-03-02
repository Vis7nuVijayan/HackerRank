/*
 * Fair Rations
 *
 *		Author : Vishnu Vijayan
 *		  Date : 02-Mar-2017
 *		  Time : 3:01:30 PM
 *
 */

using namespace std;

#include <iostream>

int main()
{
	int N;
	cin >> N;

	int B[N];
	for(int i=0;i<N;++i)
		cin >> B[i];

	int bread_count = 0;

	for(int i=0;i<N-1;++i)
	{
		if(B[i]&1)
		{
			++B[i];
			++B[i+1];
			bread_count += 2;
		}
	}

	if(B[N-1]&1)
		cout << "NO";

	else
		cout << bread_count;

	return 0;
}
