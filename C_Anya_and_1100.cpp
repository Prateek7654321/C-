#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int q;cin>>q;
        map<int, string> mp;
        map<string, int> mps;
        for (int i = 0; i < s.size(); i++)
        {
            if (i + 3 < s.size())
            {
                string p = s.substr(i, 4);
                mps[p]++;
                mp[i] = p;
            }
            else
                break;
        }
        for (int i = 0; i < q; i++)
        {
            int a, b;
            cin >> a >> b;
            if (s.size() < 4)
            {
                cout << "NO" << endl;
            }
            else
            {
                int present = a - 1;
                int bf = a - 2;
                int bff = a - 3;
                int bfff = a - 4;
                if (present >= 0 && present + 3 < s.size())
                {
                    string p = s.substr(present, 4);
                    mps[p]--;
                }
                if (bf >= 0 && bf + 3 < s.size())
                {
                    string p = s.substr(bf, 4);
                    mps[p]--;
                }
                if (bff >= 0 && bff + 3 < s.size())
                {
                    string p = s.substr(bff, 4);
                    mps[p]--;
                }
                if (bfff >= 0 && bfff + 3 < s.size())
                {
                    string p = s.substr(bfff, 4);
                    mps[p]--;
                }
               
                    s[present] = '0' + b;
                if (present >= 0 && present + 3 < s.size())
                {
                    string p = s.substr(present, 4);
                    mps[p]++;
                }
                if (bf >= 0 && bf + 3 < s.size())
                {
                    string p = s.substr(bf, 4);
                    mps[p]++;
                }
                if (bff >= 0 && bff + 3 < s.size())
                {
                    string p = s.substr(bff, 4);
                    mps[p]++;
                }
                if (bfff >= 0 && bfff + 3 < s.size())
                {
                    string p = s.substr(bfff, 4);
                    mps[p]++;
                }
                if (mps["1100"] >= 1)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
}