/*
 * Cavity Map
 *
 *		Author : Vishnu Vijayan
 *		  Date : 31-Jan-2017
 *		  Time : 4:49:36 PM
 *
 */

using namespace std;

#include <iostream>

void Print(char* a, int n)
{
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
			cout <<*(a+i*n+j);

		cout << endl;
	}
}

bool isCavity(char* a, int n, int i, int j)
{
	int current = *(a+i*n+j)-'0';
	int top = *(a+(i-1)*n+j)-'0';
	int bottom = *(a+(i+1)*n+j)-'0';
	int left = *(a+i*n+j-1)-'0';
	int right = *(a+i*n+j+1)-'0';

	if(current <= top || current <= bottom || current <= left || current <= right)
		return false;

	return true;
}

void findCavity(char* a, int n)
{
	for(int i=1;i<n-1;++i)
		for(int j=1;j<n-1;++j)
			if(isCavity(a,n,i,j))
				*(a+i*n+j) = 'X';

	Print(a,n);
}

int main()
{
	int n;
	cin >> n;

	char a[n][n];

	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
			cin >> a[i][j];

	findCavity(a[0],n);

	return 0;
}
