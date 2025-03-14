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
        vector<pair<int, int>> v;
        vector<int>v1;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
            if (x == y)
                {mp[x]++;v1.push_back(x);}
        }
        string s = "";
       set<int>st(v1.begin(),v1.end());
       v1.clear();
       for(auto it=st.begin();it!=st.end();it++)
       {
        v1.push_back(*it);
       }
        int n1=v1.size();
        for (int i = 0; i < v.size(); i++)
        {
            int x = v[i].first;
            int y = v[i].second;
            if (x == y)
            {
                if (mp[x] > 1)
                    s += '0';
                else
                    s += '1';
            }
            else
            {
               int leftIndex=lower_bound(v1.begin(),v1.end(),x)-v1.begin();
               int rightIndex=lower_bound(v1.begin(),v1.end(),y)-v1.begin();
               if(leftIndex==n1||rightIndex==n1)
               {
                s+='1';
               }
               else if(v1[leftIndex]!=x||v1[rightIndex]!=y)
               {
                s+='1';
               }
               else if(rightIndex-leftIndex!=y-x)
               {
                s+='1';
               }
               else
               {
                s+='0';
               }

            }
        }
        cout << s << endl;
    }
}