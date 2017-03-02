/*
 * Repeated String
 *
 *		Author : Vishnu Vijayan
 *		  Date : 11-Feb-2017
 *		  Time : 3:11:03 PM
 *
 */

using namespace std;

#include <iostream>

int getCount(string s)
{
	int count = 0;
	for(char c : s)
		if(c == 'a')
			++count;

	return count;
}

int main()
{
	string s;
	cin >> s;

	int a_count = getCount(s);

	long n;
	cin >> n;

	long count = (1L*n/s.length())*a_count;

	for(int i=0;i<n%s.length();++i)
		if(s[i] == 'a')
			++count;

	cout << count;

	return 0;
}
