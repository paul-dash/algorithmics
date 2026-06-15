#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int NMAX = 2e5;
int x[NMAX + 5], y[NMAX + 5];

int main()
{
    int n, i, st, dr, poz = -1, mij, m, j;

    cin >> n;

    for (i = 1; i <= n; i = i + 1)
    {
        cin >> x[i];
    }

    cin >> m;

    for (j = 1; j <= m; j = j + 1)
    {
        cin >> y[j];
    }

    dr = m;
    for (j = 1; j <= m; j = j + 1)
    {
        st = 1;
        dr= n;
        poz = -1;
        while (st <= dr)
        {
            mij = (st + dr) / 2;

            if (x[mij] == y[j])
            {
                poz = mij;
                break;
            }
            if (y[j] > x[mij])
            {
                st = mij + 1;
            }
            else
            {
                dr = mij - 1;
            }
        }
        if (poz == -1)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << "1" << " ";
        }
    }

    return 0;
}
