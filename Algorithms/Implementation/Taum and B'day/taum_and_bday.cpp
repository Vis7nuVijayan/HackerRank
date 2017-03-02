/*
 * Taum and B'day
 *
 *		Author : Vishnu Vijayan
 *		  Date : 30-Jan-2017
 *		  Time : 9:06:20 PM
 *
 */

using namespace std;

#include <iostream>

long getMinAmount(long firstCount, long secondCount, long firstCost, long secondCost, long convertCost)
{
	long cost = firstCost * firstCount;

	if(firstCost+convertCost < secondCost)
		cost += (firstCost+convertCost)*secondCount;

	else
		cost += secondCost*secondCount;

	return cost;
}

int main()
{
	int T;
	cin >> T;

	while(T--)
	{
		long B,W;
		cin >> B >> W;

		long X,Y,Z;
		cin >> X >> Y >> Z;

		if(X < Y)
			cout << getMinAmount(B,W,X,Y,Z);

		else
			cout << getMinAmount(W,B,Y,X,Z);

		cout << endl;
	}

	return 0;
}
