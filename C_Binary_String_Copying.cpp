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
        string s;
        cin >> s;
        vector<string> v;
        while (m--)
        {
            int a, b;
            cin >> a >> b;
            if (a == 1)
            {
                string p = s.substr(0, b - a + 1);
            
                sort(p.begin(), p.end());
                string t;
                t = t + p +  s.substr(b, n - b + a - 1);
                v.push_back(t);
            }
            else
            {
                string p = s.substr(a - 1, b - a + 1);
                
                sort(p.begin(), p.end());
                string t;
                t = t + s.substr(0, a - 1) + p + s.substr(b, n - b + a - 1);
                v.push_back(t);
            }
        }

        
        if (v.size() == 1)
        {
            cout << 1 << endl;
        }
        else

        {
            sort(v.begin(), v.end());
            long long int ans = 0;

            for (int i = 1; i < v.size(); i++)
            {
                if (v[i] == v[i - 1])
                {
                    if (i == v.size() - 1)
                        ans++;
                    continue;
                }
                else
                {
                    ans++;
                    if (i == v.size() - 1)
                        ans++;
                }
            }
            cout << ans << endl;
        }
    }
}