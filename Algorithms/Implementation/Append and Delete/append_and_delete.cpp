/*
 * Append and Delete
 *
 *		Author : Vishnu Vijayan
 *		  Date : 08-Feb-2017
 *		  Time : 6:31:00 PM
 *
 */

using namespace std;

#include <iostream>

string isPossible(int k, string s, string t, int common_length)
{
	int s_length = s.length();
	int t_length = t.length();

	int to_delete = s_length-common_length;
	int to_append = t_length-common_length;

	if(to_delete+to_append > k)
		return "No";

	else if(((to_delete+to_append)&1) == (k&1))
		return "Yes";

	else if(s_length+t_length < k)
		return "Yes";

	return "No";
}

int getCommon(string s, string t)
{
	int count = 0;

	for(int i=0;i<min(s.length(),t.length());++i)
	{
		if(s[i] != t[i])
			return count;

		++count;
	}

	return count;
}

int main()
{
	string s;
	cin >> s;

	string t;
	cin >> t;

	int common_length = getCommon(s,t);

	int k;
	cin >> k;

	cout << isPossible(k,s,t,common_length);

	return 0;
}
