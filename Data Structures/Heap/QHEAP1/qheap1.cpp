/*
 * QHEAP1
 *
 *		Author : Vishnu Vijayan
 *		  Date : 06-Mar-2017
 *		  Time : 4:21:47 PM
 *
 */

using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int Q;
	cin >> Q;

	vector<int> heap;
	make_heap(heap.begin(),heap.end(), greater<int>());

	bool visited_case_2 = false;

	while(Q--)
	{
		int type;
		cin >> type;

		switch(type)
		{
			case 1:
			{
				int v;
				cin >> v;

				if(visited_case_2)
					make_heap(heap.begin(),heap.end(),greater<int>());

				heap.push_back(v);
				push_heap(heap.begin(),heap.end(),greater<int>());

				visited_case_2 = false;

				break;
			}

			case 2:
			{
				int v;
				cin >> v;

				heap.erase(find(heap.begin(),heap.end(),v));

				visited_case_2 = true;

				break;
			}

			case 3:
			{
				if(visited_case_2)
					make_heap(heap.begin(),heap.end(),greater<int>());

				cout << heap.front() << endl;

				visited_case_2 = false;
			}
		}
	}

	return 0;
}
