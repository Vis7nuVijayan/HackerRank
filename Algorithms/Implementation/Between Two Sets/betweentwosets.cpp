/*
 * Between Two Sets
 *
 *		Author : Vishnu Vijayan
 *		  Date : 19-Jan-2017
 *		  Time : 8:26:40 PM
 *
 */

using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

vector<int> Initialize(int n)
{
	vector<int> S;
	int temp;

	for(int i=0;i<n;++i)
	{
		cin >> temp;
		S.push_back(temp);
	}

	sort(S.begin(), S.end());

	return S;
}

bool AisFactorOf(int x, vector<int> A)
{
	for(int i : A)
		if(x%i)
			return false;

	return true;
}

bool XisFactorOf(int x, vector<int> B)
{
	for(int i : B)
		if(i%x)
			return false;

	return true;
}

int getXCount(vector<int> A, vector<int> B)
{
	int beg = A[A.size()-1];
	int end = B[0];
	int count = 0;

	for(int i=beg;i<=end;++i)
	{
		if(AisFactorOf(i,A) && XisFactorOf(i,B))
			++count;
	}

	return count;
}

int main()
{
	int m,n;
	cin >> m >> n;

	vector<int> A = Initialize(m);
	vector<int> B = Initialize(n);

	cout << getXCount(A,B);

	return 0;
}
