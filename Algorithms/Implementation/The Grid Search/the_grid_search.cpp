/*
 * The Grid Search
 *
 *		Author : Vishnu Vijayan
 *		  Date : 13-Feb-2017
 *		  Time : 3:48:28 PM
 *
 */

using namespace std;

#include <iostream>

bool isPresent(int* G, int R, int C, int* P, int r, int c)
{
	for(int outer_i=0;outer_i<R;++outer_i)
	{
		for(int outer_j=0;outer_j<C;++outer_j)
		{
			if(*(G+outer_i*C+outer_j) == *P)
			{
				bool error = false;

				for(int inner_i=0;inner_i<r;++inner_i)
				{
					for(int inner_j=0;inner_j<c;++inner_j)
					{
						if(inner_i+outer_i > R-1 || inner_j+outer_j > C-1 || *(G+((outer_i+inner_i)*C)+outer_j+inner_j) != *(P+inner_i*c+inner_j))
						{
							error = true;
							break;
						}
					}

					if(error)
						break;
				}

				if(!error)
					return true;
			}
		}
	}

	return false;
}

void Populate(int* G, int r, int c)
{
	string input;
	getline(cin,input);

	for(int i=0;i<r;++i)
	{
		cin >> input;
		for(int j=0;j<c;++j)
			*(G+i*c+j) = input[j]-'0';
	}
}

int main()
{
	int T;
	cin >> T;

	while(T--)
	{
		int R,C;
		cin >> R >> C;

		int G[R][C];
		Populate(G[0], R, C);

		int r,c;
		cin >> r >> c;

		int P[r][c];
		Populate(P[0], r, c);

		if(isPresent(G[0],R,C,P[0],r,c))
			cout << "YES";

		else
			cout << "NO";

		cout << endl;
	}

	return 0;
}
