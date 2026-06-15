#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int NMAX = 1e2;
int v[NMAX + 5];

int main()
{
    int k, n, i, prev, next, d1, d2, x;

    cin >> k >> n;

    for (i = 1; i <= n; i = i + 1)
    {
        cin >> x;
        prev = x - x % k;
        next = k + prev;
        d1 = abs(x - prev);
        d2 = abs(x - next);

        if (d1 <= d2)
        {
            v[i] = prev;
        }
        else
        {
            v[i] = next;
        }
    }
    for(i=n; i>0; i=i-1)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
