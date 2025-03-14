#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        unordered_map<int, int> mp;
        unordered_map<int, int> mps;
       
        for (int i = 0; i < n; i++)
            mp[v[i]]++;
        for (int i = 0; i <= n + 1; i++)
        {
            if (mp.find(i) != mp.end())
            {
                mps[i % k] += mp[i] - 1;
            }
            else
            {
                if (mps[i%k]>0&&mps.find(i % k) != mps.end())
                { 
                    if (mps[i % k] > 1)
                        mps[i % k]--;
                    else
                        mps.erase(i % k);
                }
                else
                {
                    cout << i << endl;
                    break;
                }
            }
        }
    }
}