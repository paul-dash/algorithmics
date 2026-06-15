#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;
const int NMAX = 1e6;
int a[NMAX + 5], b[NMAX + 5], c[2 * NMAX + 5], d[NMAX + 5];
int main()
{

    int n, i, j, val, len = 0, m, cnt = 0;

    cin >> n;

    for (i = 1; i <= n; i = i + 1)
    {
        cin >> a[i];
    }

    cin >> m;

    for (j = 1; j <= m; j = j + 1)
    {
        cin >> b[j];
    }

    i = 1;
    j = 1;

    while (i <= n && j <= m)
    {
        if (a[i] <= b[j])
        {
            if (a[i] == b[j] && a[i] != d[cnt])
            {
                cnt = cnt + 1;
                d[cnt] = a[i];
            }
            val = a[i];
            i = i + 1;
        }
        else
        {
            val = b[j];
            j = j + 1;
        }

        if (val != c[len])
        {
            len++;
            c[len] = val;
        }
    }

    while (i <= n)
    {
        val = a[i];
        i = i + 1;
        if (val != c[len])
        {
            len++;
            c[len] = val;
        }
    }

    while (j <= m)
    {
        val = b[j];
        j = j + 1;
        if (val != c[len])
        {
            len++;
            c[len] = val;
        }
    }

    for (i = 1; i <= len; i = i + 1)
    {
        cout << c[i] << " ";
    }

    cout << endl;

    for (i = 1; i <= cnt; i = i + 1)
    {
        cout << d[i] << " ";
    }

    return 0;
}