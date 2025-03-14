#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        double a1=sqrt(b*b+x*x);
        double b1=sqrt(b*b+y*y);
        double c1=sqrt(a*a+y*y);
        double d1=sqrt(x*x+a*a);
        if (a + b == x + y&&(a1==b1&&b1==c1&&c1==d1))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}