/*
 * Strange Counter
 *
 *		Author : Vishnu Vijayan
 *		  Date : 30-Jan-2017
 *		  Time : 9:28:32 PM
 *
 */

using namespace std;

#include <iostream>

long getTimer(long t)
{
	long count=3;
	long prev_count = count;

	while(t>1)
	{
		if(t > count)
		{
			t=t-count;
			count=0;
		}

		else if(t < count)
		{
			count = count-t+1;
			break;
		}

		else
		{
			count=1;
			break;
		}

		count = 2*prev_count;
		prev_count = count;
	}

	return count;
}

int main()
{
	long t;
	cin >> t;

	cout << getTimer(t);

	return 0;
}
