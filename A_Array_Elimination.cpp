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
        vector<int> v;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if (x != 0)
                flag = true;
        }
        sort(v.begin(), v.end());
        cout << 1 <<" ";
        if (!flag)
        {
            for (int i = 2; i <= n; i++)
                cout << i << " ";
            cout << endl;
        }
        else
        {
            map<int, int> mp;
            for (int i = 1; i < n; i++)
            {
                mp[v[i] - v[i - 1]]++;
            }
            if (mp.size() == 1)
            {
                auto it = mp.begin();
                if (it->first == 0)
                {
                    cout << 2 << " " << v.size() << endl;
                }
                else
                {
                    cout << 2 << endl;
                }
            }
        }
    }
}