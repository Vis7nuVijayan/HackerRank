/*
 * Day 28 : Regex, Patterns, and Intro to Databases
 *
 *		Author : Vishnu Vijayan
 *		  Date : 28-Jan-2017
 *		  Time : 10:15:06 PM
 *
 */

using namespace std;

#include <iostream>
#include <regex>
#include <set>
#include <algorithm>

int main()
{
	int N;
	cin >> N;

	regex e(".+@gmail\\.com$");

	multiset<string> db;

	string first_name, email_ID;
	for(int i=0;i<N;++i)
	{
		cin >> first_name >> email_ID;

		if(regex_match(email_ID,e))
			db.insert(first_name);
	}

	for(string name : db)
		cout << name << endl;

	return 0;
}
