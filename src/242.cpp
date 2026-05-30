#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;
const int NMAX = 1e5;
int a[NMAX + 5], b[NMAX + 5];

int main()
{
    ifstream in("interclasm.in");
    ofstream out("interclasm.out");

    int x, n, m, i, j, val;

    in >> x >> n;

    for (i = 1; i <= n; i = i + 1)
    {
        in >> a[i];
    }

    in >> m;

    for (i = 1; i <= m; i = i + 1)
    {
        in >> b[i];
    }

    i = 1;
    j = 1;


    while (i <= n && j <= m)
    {
        if (a[i] == b[j])
        {
            i = i + 1;
            j = j + 1;
            continue;
        }

        if (a[i] < b[j])
        {
            val = a[i];
            i++;
        }
        else
        {
            val = b[j];
            j++;
        }

        if (val % x == 0)
        {
            out << val << " ";
        }
    }
    while (i <= n)
    {
        val = a[i];
        i++;
        if (val % x == 0)
        {
            out << val << " ";
        }
    }

    while (j <= n)
    {
        val = b[j];
        j++;
        if (val % x == 0)
        {
            out << val << " ";
        }
    }

    return 0;
}
