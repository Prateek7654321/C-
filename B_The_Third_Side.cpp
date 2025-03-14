#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        multiset<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        while (s.size() > 1)
        {
            int value = *s.begin();
            s.erase(s.begin());
            int value2 = *s.begin();
            s.erase(s.begin());
            s.insert(value + value2 - 1);
        }
        cout << *s.begin() << endl;
    }
}