#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str)
{
   // Complete this function
	stringstream ss(str);

	vector<int> v;
	int i;
	char c;

	while(ss >> i)
	{
		v.push_back(i);
		ss >> c;
	}

	return v;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);

    for(int i = 0; i < integers.size(); i++)
        cout << integers[i] << "\n";

    return 0;
}
