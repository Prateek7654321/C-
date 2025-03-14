#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        multiset<int>st;int ans=0;
      
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '1') {
                st.insert(i + 1);
            } else {
                ans += i + 1; 
                if (!st.empty()) {
                    st.erase(--st.end());
                }
            }
        }
        vector<int>one(st.begin(),st.end());
        int i=0;
        int j=one.size()-1;
        while(i<=j&&one.size()!=0)
        {
           ans+=one[i];
            i++;
            j--;
        }
        cout<<ans<<endl;

    }
}