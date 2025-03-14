#include <bits/stdc++.h>
using namespace std;

int calculate(int index, vector<int> &dp, vector<int> &v, vector<int> &v1, map<int, int> mp)
{
    if (index < 0)
        return 0;

    if (dp[index] != -1)
        return dp[index];

    int a = INT_MAX, b = INT_MAX;

    if (mp[v[index]] >= 0)  // Ensures it’s always valid
    {
        
        mp[v1[index]]++;
        a = v1[index] + calculate(index - 1, dp, v, v1, mp);
        mp[v1[index]]--;
    }

    if (mp[v1[index]] >= 0)  // Ensures it’s always valid
    {
      
        mp[v[index]]++;
        b = v[index] + calculate(index - 1, dp, v, v1, mp);
        mp[v[index]]--;
    }

    return dp[index] = min(a, b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), v1(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];
        
        for (int i = 0; i < n; i++)
            cin >> v1[i];

        map<int, int> mp;
        vector<int> dp(n, -1);

        cout << calculate(n - 1, dp, v, v1, mp) << endl;
    }
}
