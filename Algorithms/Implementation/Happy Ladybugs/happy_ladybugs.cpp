/*
 * Happy Ladybugs
 *
 *		Author : Vishnu Vijayan
 *		  Date : 02-Mar-2017
 *		  Time : 5:34:27 PM
 *
 */

using namespace std;

#include <iostream>
#include <algorithm>

string isHappy(string,int);

int main()
{
	int g;
	cin >> g;

	while(g--)
	{
		int n;
		cin >> n;
		cin.ignore();

		string b;
		getline(cin,b);

		if(b.find('_') != b.npos)
			sort(b.begin(),b.end());

		cout << isHappy(b,n) << endl;
	}

	return 0;
}

string isHappy(string b, int n)
{
	if(n == 1)
	{
		if(b[0]=='_')
			return "YES";

		return "NO";
	}

	if(b[0] != b[1])
		return "NO";

	for(int i=1;i<n-1;++i)
		if(b[i-1]!= b[i] && b[i] != b[i+1])
			return "NO";

	if(b[n-1] != '_' && b[n-1] != b[n-2])
		return "NO";

	return "YES";
}
