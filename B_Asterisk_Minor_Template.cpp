#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        int a = s.size();
        int b = t.size();
        vector<string> v;
        vector<string> v1;
        if (s[0] == t[0])
            cout << "yes" << endl
                 << s[0] << '*' << endl;
        else if (s[a - 1] == t[b - 1])
            cout << "yes" << endl
                 << '*' << t[b - 1] << endl;
        else
        {
            for (int i = 0; i < a - 1; i++)
                v.push_back(s.substr(i, 2));

            for (int i = 0; i < b-1; i++)
                v1.push_back(t.substr(i,2));
            int n = v.size();
            int m = v1.size();
            int mn = min(n, m);
            int count = 0;
            int a;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (v[i] == v1[j])
                    {
                        count++;
                        a = i;
                        break;
                    }
                }
            }
            if (count == 0)
                cout << "no" << endl;
            else
            {
                cout << "yes" << endl
                     << '*' << v[a] << '*' << endl;
            }
        }
    }
}