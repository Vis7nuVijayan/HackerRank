/*
 * Angry Professor
 *
 *		Author : Vishnu Vijayan
 *		  Date : 20-Jan-2017
 *		  Time : 8:05:52 PM
 *
 */

using namespace std;

#include <iostream>

string isCancelled(int n, int k)
{
	int count=0, temp;

	for(int i=0;i<n;++i)
	{
		cin >> temp;
		if(temp <= 0)
			++count;
	}

	if(count >= k)
		return "NO";

	return "YES";
}

int main()
{
	int T;
	cin >> T;

	while(T--)
	{
		int N,K;
		cin >> N >> K;

		cout << isCancelled(N,K) << endl;
	}

	return 0;
}
