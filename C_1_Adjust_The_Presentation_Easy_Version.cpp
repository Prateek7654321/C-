#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v;
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            int y;
            cin >> y;
            v1.push_back(y);
        }
        map<int, int> mp;
        int first_occur = 1;
        for (int i = 0; i < v1.size(); i++)
        {
            if (mp.find(v1[i]) == mp.end())
            {
                mp[v1[i]] = first_occur;
                first_occur++;
            }
        }
        bool flag = true;
        map<int,int>mps;
        first_occur=1;
           for (int i = 0; i < v.size(); i++)
        {
            if (mps.find(v[i]) == mps.end())
            {
                mps[v[i]] = first_occur;
                first_occur++;
            }
        }
        
        for (int i = 0; i < v1.size(); i++)
        {
            if (mp[v1[i]] != mps[v1[i]])
            {
                flag = false;
                break;
            }
        }
        
        if (flag)
            cout << "YA" << endl;
        else
            cout << "TIDAK" << endl;
    }
}