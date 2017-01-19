#include <iostream>
#include <deque>

using namespace std;

void printKMax(deque<int> &index, int arr[], int n, int k)
{
	for(int i=k;i<n;++i)
	{
		cout << arr[index.front()] << " ";

		while(!index.empty() && index.front() <= i-k)
			index.pop_front();

		while(!index.empty() && arr[i] >= arr[index.back()])
			index.pop_back();

		index.push_back(i);
	}

	cout << arr[index.front()] << endl;
}

void initialFill(deque<int> &index, int arr[], int k)
{
	for(int i=0;i<k;++i)
	{
		while(!index.empty() && arr[i] >= arr[index.back()])
			index.pop_back();

		index.push_back(i);
	}
}

void printKMax(int arr[], int n, int k)
{
	//Write your code here.
	deque<int> index(k);

	initialFill(index, arr, k);

	printKMax(index, arr, n, k);
}

int main()
{
   int t;
   cin >> t;

   while(t--)
   {
      int n,k;
      cin >> n >> k;

      int i;
      int arr[n];

      for(i=0;i<n;i++)
           cin >> arr[i];

      printKMax(arr, n, k);
   }
   return 0;
}
