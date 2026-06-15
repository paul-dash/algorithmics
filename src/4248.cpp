#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;
const int NMAX = 2e5;
int x[NMAX + 5], y[NMAX + 5], z[NMAX + 5];
int main()
{
    int n, r, i, len, j;

    cin >> n;

    for (i = 1; i <= n; i = i + 1)
    {
        cin >> x[i];
    }

    len = 0;
    for (i = 1; i <= n; i = i + 1)
    {
        if (x[i] != z[len])
        {
            len = len + 1;
            z[len] = x[i];
        }
    }

    int st = 1, dr = len, mij, poz;

    while(st<dr)
    {
        swap(z[st], z[dr]);
        st++;
        dr--;
    }

    cin >> r;

    for (i = 1; i <= r; i = i + 1)
    {
        cin >> y[i];
    }

    for(j = 1; j <= r; j = j + 1)
    {
        st = 1;
        dr = len;
        poz = 0;
        while (st <= dr)
        {
            mij = (st + dr) / 2;

            if (y[j] >= z[mij])
            {
                st = mij + 1;
                poz = mij;
            }
            else
            {
                dr = mij - 1;
            }
        }
        cout<<len - poz + 1<<endl;
    }

    return 0;
}