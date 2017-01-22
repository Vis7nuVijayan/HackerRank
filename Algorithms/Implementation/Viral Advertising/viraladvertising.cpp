/*
 * Viral Advertising
 *
 *		Author : Vishnu Vijayan
 *		  Date : 20-Jan-2017
 *		  Time : 8:58:32 PM
 *
 */

using namespace std;

#include <iostream>

int getLikesCount(int n)
{
	int total_likes=0;
	int sent=5;

	for(int i=0;i<n;++i)
	{
		sent = sent/2;
		total_likes += sent;
		sent *= 3;
	}

	return total_likes;
}

int main()
{
	int n;
	cin >> n;

	cout << getLikesCount(n);

	return 0;
}
