/*
 * ACM ICPC Team
 *
 *		Author : Vishnu Vijayan
 *		  Date : 30-Jan-2017
 *		  Time : 3:55:37 PM
 *
 */

using namespace std;

#include <iostream>

void getMaxCount(int* person, int n, int m)
{
	int max_topics = 0;
	int max_count = 0;

	for(int i=0;i<n;++i)
	{
		for(int j=i+1;j<n;++j)
		{
			int topic_count = 0;

			for(int k=0;k<m;++k)
				if(*(person+i*m+k)|*(person+j*m+k))
					++topic_count;

			if(topic_count > max_topics)
			{
				max_topics = topic_count;
				max_count = 1;
			}

			else if(topic_count == max_topics)
				++max_count;
		}
	}

	cout << max_topics << endl;
	cout << max_count << endl;
}

int main()
{
	int N,M;
	cin >> N >> M;

	int person[N][M];

	string temp;
	getline(cin, temp);


	for(int i=0;i<N;++i)
	{
		cin >> temp;
		int j=0;

		for(char c : temp)
			person[i][j++] = c-'0';
	}

	getMaxCount(person[0],N,M);

	return 0;
}
