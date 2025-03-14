#include <bits/stdc++.h>
#define int long long
using namespace std;
void precompute(int n, multiset<int> st, unordered_map<int, int> &mp)
{
    for (int i = 2; i <= n; i++)
    {
        bool flag = false;
        int j = 1;
        while ((long long)(j * i) <= n)
        {
            if (st.find(j * i) != st.end())
            {
                flag = true;
                break;
            }
            else if(st.find(j*i)==st.end()&&j*i==*st.end())
            {
                flag=true;break;
            }
            j++;
        }
        if (flag)
        {
            mp[i] = 1;
        }
    }
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char x;
        cin >> x;
        string s;
        cin >> s;
        multiset<int> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != x)
            {
                st.insert(i + 1);
            }
        }
        if (st.size() == 0)
        {
            cout << 0 << endl;
        }
        else if (s[n-1]==x)
        {
            cout << 1 << endl;
            cout << s.size() << endl;
        }
        else
        {
            unordered_map<int, int> mp;
            precompute(n, st, mp);
            bool flags = false;
            for (int j = n; j >= 2; j--)
            {
                if (mp[j] == 0)
                {
                    cout << 1 << endl;
                    cout << j << endl;
                    flags = true;
                    break;
                }
            }
            if (!flags)
            {
                cout << 2 << endl;
                cout << n << " " << n - 1 << endl;
            }
        }
    }
}