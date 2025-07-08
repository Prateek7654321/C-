#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string p, q;
    cin >> p >> q;
    
    int i = 1;
    vector<pair<char, int>> v;
    char last = p[0];
    int count = 1;
    while (i < p.size())
    {
        if (p[i] == p[i - 1])
            count++;
        else
        {
            v.push_back({last, count});
            last = p[i];
            count = 1;
        }
        i++;
    }
    v.push_back({last, count});
    last = q[0];
    count = 1;

    vector<pair<char, int>> v1;

    i = 1;
    while (i < q.size())
    {
        if (q[i] == q[i - 1])
            count++;
        else
        {
            v1.push_back({last, count});
            last = q[i];
            count = 1;
        }
        i++;
    }
    v1.push_back({last, count});
    bool flag = true;
    if (v.size() == v1.size())
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].first == v1[i].first && v1[i].second >= v[i].second && v1[i].second <= 2 * v[i].second)
                continue;
            else
            {
                flag = false;
                break;
            }
        }
    }
    else
    {
        flag = false;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}