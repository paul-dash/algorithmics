#include <iostream>
#include <cmath>
using namespace std;
const int NMAX = 1e2;

int main()
{
    int n, m, i, r, s, a[NMAX + 5][NMAX + 5], j;
    s = 0;

    cin >> n >> m;

    for (i = 1; i <= n; i = i + 1)
    {
        for (j = 1; j <= m; j = j + 1)
        {
            cin >> a[i][j];
        }
    }

    for (i = 1; i <= n; i = i + 1)
    {
        for (j = 1; j <= m; j = j + 1)
        {
            if (a[i][j] % 2 == 0)
            {
                s = s + a[i][j];
            }
        }
    }

    cout<<s;

    return 0;
}
