#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int NMAX = 1e2;
int x[NMAX + 5];

int main()
{
    int n, i, y, st = 1, dr, poz = -1, mij;

    cin >> y >> n;

    for (i = 1; i <= n; i = i + 1)
    {
        cin >> x[i];
    }

    dr = n;
    while (st <= dr)
    {
        mij = (st + dr) / 2;
        if (x[mij] == y)
        {
            poz = mij;
            break;
        }
        if (y > x[mij])
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
        cout << "Nu exista";
    }
    else
    {
        cout << "Da" << " " << poz - 1;
    }

    return 0;
}
