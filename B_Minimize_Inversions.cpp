#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n+1);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v[i]=x;
        }
        vector<int> v1(n+1);
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v1[i]=x;
            mp[x] = i;
        }
        for (int i = 1; i <= n; i++)
        {
            int pos = mp[i];
            int x = v1[i];
            swap(v[i], v[pos]);
            swap(v1[i], v1[pos]);
            mp[x] = pos;
        }
        for (int i = 1; i <= n; i++)
            cout << v[i] << " ";
        cout << endl;
        for (int i = 1; i <= n; i++)
            cout << v1[i] << " ";
        cout << endl;
    }
}