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
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        map<int, pair<int, int>> mp;
        for (int i = 0; i < n; i++)
        {
            int total = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (v[i] > v[j])
                    total++;
                else if (v[i] < v[j])
                    total--;
                if (mp.find(total) == mp.end())
                {
                    mp[total] = {i + 1, j + 1};
                }
            }
        }
        if (mp.size() != 0 && prev(mp.end())->first > 0)
        {
            cout << prev(mp.end())->second.first << " " << prev(mp.end())->second.second << endl;
        }
        else
        {
            cout << 1 << " " << 1 << endl;
        }
    }
}