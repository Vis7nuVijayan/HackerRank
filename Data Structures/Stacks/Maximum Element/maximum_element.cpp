/*
 * Maximum Element
 *
 *		Author : Vishnu Vijayan
 *		  Date : 04-Mar-2017
 *		  Time : 4:23:30 PM
 *
 */

using namespace std;

#include <iostream>
#include <stack>

int main()
{
	int N;
	cin >> N;

	stack<int> maximum_stack;

	while(N--)
	{
		int type;
		cin >> type;

		switch(type)
		{
			case 1:
			{
				int x;
				cin >> x;

				if(maximum_stack.empty())
					maximum_stack.push(x);

				else
					maximum_stack.push(max(x,maximum_stack.top()));

				break;
			}

			case 2:
				maximum_stack.pop();

				break;

			case 3:
				cout << maximum_stack.top() << endl;
		}
	}

	return 0;
}
