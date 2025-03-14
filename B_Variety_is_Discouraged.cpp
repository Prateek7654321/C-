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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }
        int l = -1;
        int r = -1;
        int ans = INT_MIN;
        int finali = -1;
        int finalj = -1;
        for (int i = 0; i < v.size(); i++)
        {
            if (mp[v[i]] == 1)
            {
                if (l == -1)
                    l = i;
                r = i;
                if (r - l + 1 > ans)
                {
                    ans = r - l + 1;
                    finali = l + 1;
                    finalj = r + 1;
                }
            }
            else
            {
                l = -1;
                r = -1;
            }
        }

        if (finali == -1 || finalj == -1)
            cout << 0 << endl;
        else
            cout << finali << " " << finalj << endl;
    }
}