#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    // Complete the code.

    int i;
    long l;
    long long ll;
    char c;
    float f;
    double d;

    scanf("%d %ld %lld %c %f %lf", &i, &l, &ll, &c, &f, &d);

    printf("%d\n%ld\n%lld\n%c\n%.3f\n%.9lf", i, l, ll, c, f, d);
    
    return 0;
}
