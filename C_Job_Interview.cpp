#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(n + m + 1);
        vector<int> v1(n + m + 1);

        for (int i = 0; i < n + m + 1; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n + m + 1; i++)
        {
            cin >> v1[i];
        }

        vector<char> mp(n + m + 1);
        vector<pair<int, int>> v2(n + m + 1);
        for (int i = 0; i < n + m + 1; i++)
        {
            v2[i] = make_pair(v[i], v1[i]);
        }

        int tester = 0;
        int programmer = 0;
        int initial_n = n;
        int initial_m = m;

        for (int i = 0; i < n + m ; i++)
        {
            if ((initial_n > 0 && (initial_m == 0 ))|| (initial_n>0&&v2[i].first > v2[i].second))
            {
                programmer += v2[i].first;
                initial_n--;
                mp[i] = 'p';
            }
            else 
            {
                tester += v2[i].second;
                initial_m--;
                mp[i] = 't';
            }
        }


       

        vector<int> ans;
        ans.push_back(programmer + tester);

        int f=programmer+tester;
        int j = n + m;
        int a = n + m;
        cout<<f<<" ";

        while (j > 0)
        {
            j--;
            if (mp[j] == 't')
            {
                f -= v1[j];
                f += v1[a];
                
                ans.push_back(f);
            }
            else if (mp[j] == 'p')
            {
                f -= v[j];
                f += v[a];
                ans.push_back(f);
            }
            f=programmer+tester;
        }

        reverse(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
