/*
 * Day 14 : Scope
 *
 *		Author : Vishnu Vijayan
 *		  Date : 14-Jan-2017
 *		  Time : 12:28:43 PM
 *
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference
{
	private:
		vector<int> elements;

  	public:
		int maximumDifference;

		Difference(vector<int> a)
		{
			this->elements = a;
		}

		void computeDifference()
		{
			sort(elements.begin(),elements.end());
			maximumDifference = abs(elements[elements.size()-1]-elements[0]);
		}

}; // End of Difference class

int main()
{
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++)
    {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}
