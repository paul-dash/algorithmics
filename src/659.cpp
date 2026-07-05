#include <iostream>
#include <cmath>
using namespace std;
const int NMAX = 1e2;

int main()
{
    int n, m, i, r, s, a[NMAX + 5][NMAX + 5], j, nrMax;
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
        s = 0;
        nrMax=-1;
        for (j = 1; j <= m; j = j + 1)
        {
            if(a[i][j]>nrMax)
            {
                nrMax=a[i][j];
            }
            s = s + a[i][j];
        }
        s=s-nrMax;
        cout << s << " ";
    }

    return 0;
}
