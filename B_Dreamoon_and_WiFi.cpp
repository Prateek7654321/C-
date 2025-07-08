#include <bits/stdc++.h>
using namespace std;
long double calculatefact(int no)
{
    double result = 1;
    for (int i = 1; i <= no; i++)
        result *= i;
    return result;
}
long double binpow(double base, int exp)
{
    double result = 1;
    while (exp != 0)
    {
        if (exp % 2 == 1)
            result = result * base;
        base = base * base;
        exp = exp >> 1;
    }
    return result;
}
void solve()
{
    string s;
    cin >> s;
    string s1;
    cin >> s1;
    int origp = 0;
    int orign = 0;
    int fakep = 0;
    int faken = 0;
    int q = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
            origp++;
        else
            orign++;
        if (s1[i] == '+')
            fakep++;
        else if (s1[i] == '-')
            faken++;
        else
            q++;
    }
    long double ans=0;
    if (fakep > origp || faken > orign)
        cout << fixed << setprecision(12) << ans << endl;
    else
    {
        long double a = calculatefact(q);
        long double b = calculatefact(origp - fakep);
        long double c = calculatefact(orign - faken);
        long double d = binpow(2, q);
        cout << fixed << setprecision(12) << (a / (b * c * d)) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    for (int i = 0; i < t; i++)
        solve();
}