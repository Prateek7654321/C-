#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int n;
    cin >> n;
    vector<int> v;
    map<int, int> mp;
    if (n == 1)
    {
        cout << 1 << endl;
        cout << 1 << endl;
    }
    else
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            mp[x]++;
            sum += x;
        }
        vector<int> ans;
        for (int j = v.size() - 1; j >= 0; j--)
        {
            if (mp[v[j]] == 1)
                mp.erase(v[j]);
            else
                mp[v[j]]--;
            if ((sum - v[j]) % 2 == 0)
            {
                bool flag = false;
                int x = (sum - v[j]) / 2;

                if (mp.find(x) != mp.end())
                {

                                     ans.push_back(j + 1);
                }
            }
            mp[v[j]]++;
        }
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}