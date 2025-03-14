#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> s;
        vector<int> l;
        int n;
        cin >> n;
        while (n--)
        {
            int k;
            cin >> k;
            vector<int> v;
            for (int i = 0; i < k; i++)
            {
                int x;
                cin >> x;
                v.push_back(x);
            }
            sort(v.begin(), v.end());
            s.push_back(v[0]);
            l.push_back(v[1]);
        }

        sort(l.begin(), l.end());
       long long  int out = 0;
        for (int i = 1; i < l.size(); i++)
        {
            out += l[i];
        }
        s.push_back(l[0]);
        sort(s.begin(), s.end());
        cout << out + s[0] << endl;
    }
}