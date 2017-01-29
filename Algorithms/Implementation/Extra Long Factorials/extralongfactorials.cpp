/*
 * Extra Long Factorials
 *
 *		Author : Vishnu Vijayan
 *		  Date : 24-Jan-2017
 *		  Time : 10:06:43 PM
 *
 */

using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

void Factorial(int n)
{
	int val = 2;
	vector<int> fact;
	int carry = 0;

	fact.push_back(1);

	while(val <= n)
	{
		for(int i=0;i<fact.size();++i)
		{
			fact[i] = fact[i]*val + carry;
			carry = fact[i]/10;
			fact[i] %= 10;
		}

		while(carry)
		{
			fact.push_back(carry%10);
			carry /= 10;
		}

		++val;
	}

	reverse(fact.begin(), fact.end());

	for(int i : fact)
		cout << i;
}

int main()
{
	int N;
	cin >> N;

	Factorial(N);

	return 0;
}
