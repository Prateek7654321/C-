#include <bits/stdc++.h>
using namespace std;
#define int long long
int findans(int no, int k)
{
    if (k == 0)
        return 1;
    if (k & 1)
    {
        return (long long)no * findans(no, (k - 1) / 2) * findans(no, (k - 1) / 2);
    }
    else
        return (long long)findans(no, k / 2) * findans(no, k / 2);
}
bool possible(int i, int no)
{
    if (1 + i + (long long)(i * i) > no)
        return false;
    if (1 + i + (long long)(i * i) == no)
        return true;
    int k = 3;
    while (true)
    {
        int x = findans(i, k);
        int f = (x - 1) / (i - 1);
        if (f == no)
            return true;
        if (f > no)
            return false;
        k++;
    }
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool flag = false;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (possible(i, n))
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}