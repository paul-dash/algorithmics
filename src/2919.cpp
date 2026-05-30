#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int NMAX = 1e5;
int a[NMAX + 5], b[NMAX + 5];

int main()
{
    int n, i, sA = 0, sB = 0, len1 = 0, len2 = 0;

    cin >> n;

    for (i = n; i > 0; i = i - 1)
    {

        if (abs((sA + i) - sB) < abs((sB + i) - sA))
        {
            len1 = len1 + 1;
            a[len1] = i;
            sA = sA + i;
            
        }
        else
        {
            len2 = len2 + 1;
            b[len2] = i;
            sB = sB + i;
            
        }
    }
    for (i = 1; i <= len1; i = i + 1)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    for (i = 1; i <= len2; i = i + 1)
    {
        cout << b[i] << " ";
    }

    return 0;
}
