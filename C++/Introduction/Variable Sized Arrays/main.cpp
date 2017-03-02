#include <iostream>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int *a[n];
    int i=0;

    while(i < n)
    {
        int size;
        cin >> size;
        a[i] = new int[size];

        for(int j=0;j<size;++j)
            cin >> a[i][j];

        ++i;
    }

    while(q-- > 0)
    {
        int i, j;
        cin >> i >> j;

        cout << a[i][j] << endl;
    }

    return 0;
}
