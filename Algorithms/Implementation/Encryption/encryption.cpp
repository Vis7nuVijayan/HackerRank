/*
 * Encryption
 *
 *		Author : Vishnu Vijayan
 *		  Date : 12-Feb-2017
 *		  Time : 11:05:51 PM
 *
 */

using namespace std;

#include <iostream>
#include <cmath>

void printCipherText(string s, int row, int column)
{
	for(int c=0;c<column;++c)
	{
		for(int r=0;r<row;++r)
		{
			if(r*column+c < s.length())
				cout << s[r*column+c];

			else
				break;
		}

		cout << " ";
	}
}

int main()
{
	string s;
	cin >> s;

	int L = s.length();

	double sq = sqrt(L);

	int row = INT32_MAX;
	int column = 1;

	for(int r=floor(sq);r<=ceil(sq);++r)
	{
		for(int c=r;c<=ceil(sq);++c)
		{
			if((r*c >= L) && (r*c < row*column))
			{
				row = r;
				column = c;
			}
		}
	}

	printCipherText(s,row,column);

	return 0;
}
