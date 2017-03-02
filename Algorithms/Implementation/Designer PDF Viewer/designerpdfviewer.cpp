/*
 * Designer PDF Viewer
 *
 *		Author : Vishnu Vijayan
 *		  Date : 19-Jan-2017
 *		  Time : 12:25:44 PM
 *
 */

using namespace std;

#include <iostream>

int getMaxHeight(string word, int height[])
{
	int max = 0;
	for(char c : word)
		if(height[c-'a'] > max)
			max = height[c-'a'];

	return max;
}

int main()
{
	int height[26];
	for(int i=0;i<26;++i)
		cin >> height[i];

	string word;
	cin >> word;

	cout << getMaxHeight(word,height)*word.length();

	return 0;
}
