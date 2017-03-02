/*
 * Problem 4 : Largest palindrome product
 *
 *		Author : Vishnu Vijayan
 *		  Date : 31-Jan-2017
 *		  Time : 1:14:17 PM
 *
 */

using namespace std;

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <set>

bool isPalindrome(string s)
{
	string rev_s = s;

	reverse(rev_s.begin(), rev_s.end());

	if(s.compare(rev_s) == 0)
		return true;

	return false;
}

set<int> populateSet()
{
	set<int> palin;

	for(int i=100;i<=999;++i)
		for(int j=100;j<=999;++j)
			if(isPalindrome(to_string(i*j)))
				palin.insert(i*j);

	return palin;
}

int getPalindrome(int n, set<int> numbers)
{
	int prev = 0;

	for(int i : numbers)
	{
		if(i < n)
			prev = i;
		else
			return prev;
	}

	return prev;
}

int main()
{
	int T;
	cin >> T;

	set<int> palindrome_numbers = populateSet();

	while(T--)
	{
		int N;
		cin >> N;

		cout << getPalindrome(N, palindrome_numbers) << endl;
	}

	return 0;
}
