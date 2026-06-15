#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <fstream>
using namespace std;
int main()
{
    ifstream in("elempp.in");
    ofstream out("elempp.out");

    int n, c, j, root, c2, x, i;

    in>>n;

    for(i=1; i<=n; i=i+1)
    {
        in>>x;
        c=x;
        while(c>99)
        {
            c=c/10;
        }
        root=sqrt(c);
        if(c==root*root)
        {
            out<<x<<" ";
        }
    }


    return 0;
}