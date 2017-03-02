/*
 * Modified Kaprekar Numbers
 *
 *		Author : Vishnu Vijayan
 *		  Date : 11-Feb-2017
 *		  Time : 3:30:17 PM
 *
 */

using namespace std;

#include <iostream>
#include <set>
#include <string>

bool isKaprekar(int n)
{
	int d = to_string(n).length();

	string square = to_string(1L*n*n);

	int l=0,r=0;

	for(int i=0;i<square.length()/2;++i)
		l = l*10+(square[i]-'0');

	for(int i=square.length()/2;i<square.length();++i)
		r = r*10+(square[i]-'0');

	return n==(l+r);
}

void printKaprekarNumbers(int p, int q)
{
	set<int> kaprekar;

	for(int i=p;i<=q;++i)
		if(isKaprekar(i))
			kaprekar.insert(i);

	if(kaprekar.empty())
		cout << "INVALID RANGE";

	else
		for(int i : kaprekar)
			cout << i << " ";
}

int main()
{
	int p,q;
	cin >> p >> q;

	printKaprekarNumbers(p,q);

	return 0;
}
