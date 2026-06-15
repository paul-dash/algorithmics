#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <fstream>
using namespace std;
const int NMAX = 1e5;
int a[NMAX + 5], b[NMAX + 5], c[NMAX + 5];

int main()
{

    int n, i, j, nrMin = 1e9, cnt = 0, st, dr, poz, mij, poz2;

    cin >> n;

    for (i = 1; i <= n; i = i + 1)
    {
        cin >> a[i];
    }

    for (i = 1; i <= n; i = i + 1)
    {
        cin >> b[i];
    }

    for (i = 1; i <= n; i = i + 1)
    {
        cin >> c[i];
    }

    for (i = 1; i <= n; i = i + 1)
    {
        st = 1;
        dr = n;
        poz = -1;
        while (st <= dr)
        {
            mij = (st + dr) / 2;
            if (b[mij] == a[i])
            {
                poz = mij;
                nrMin = a[i];
                break;
            }
            if (a[i] > b[mij])
            {
                st = mij + 1;
            }
            else
            {
                dr = mij - 1;
            }
        }

        st = 1;
        dr = n;
        poz2 = -1;

        while (st <= dr)
        {
            mij = (st + dr) / 2;
            if (c[mij] == a[i])
            {
                poz2 = mij;
                nrMin = a[i];
                break;
                
            }
            if (a[i] > c[mij])
            {
                st = mij + 1;
            }
            else
            {
                dr = mij - 1;
            }
        }
        if(poz!=-1 && poz2!=-1)
        {
            cout<<a[i];
            return 0;
        }
    }
    
    cout<<-1;

    return 0;
}
