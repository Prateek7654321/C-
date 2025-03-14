#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    string s;
    cin >> s;
    int q;
    cin >> q;
    vector<vector<int>> v;
    vector<int> temp(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        temp[s[i] - 'a']++;
        v.push_back(temp);
    }
    map<int, char> mp;
    set<int> st;
    for (int i = 0; i < q; i++)
    {  
        int x;
        cin >> x;
        if (x == 2)
        {
            int a, b;
            cin >> a >> b;
            a--;
            b--;
            int unique = 0;
            for (int k = 0; k < 26; k++)
            {
                if (a != 0)
                    temp[k] = v[b][k] - v[a - 1][k];
                else
                    temp[k] = v[b][k];
                if (temp[k] > 0)
                    unique++;
            }
       
            auto it = st.lower_bound(a);
         
            for (auto its = it; its != st.end(); its++)
            {
                if (*its >= a && *its <= b)
                {
                    char pr = mp[*its];
                    if (temp[s[*its]-'a'] > 1)
                    {temp[s[*its]-'a']--;
                        if (temp[pr - 'a'] == 0)
                            unique++;
                            temp[pr - 'a']++;

                    }
                    else
                    {temp[s[*its]-'a']--;
                        unique--;
                        if (temp[pr - 'a'] == 0)
                            unique++;
                        temp[pr - 'a']++;

                    }
                }
                else
                {
                    break;
                }
            }
            cout<<unique<<endl;
        }
        else
        {
            int pos;
            cin >> pos;
            char change;
            cin >> change;
            pos--;
            st.insert(pos);
            mp[pos] = change;
        }
    }
}