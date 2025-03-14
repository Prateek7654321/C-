#include <bits/stdc++.h>
using namespace std;
#define int long long 
int findans(vector<int>&orig,vector<int>&comp)
{
    int i=orig.size()-1;
    int j=0;
    int ans=0;
    while(i>=0)
    {
        if(j<comp.size())
        {
            if(comp[j]<orig[i])
            {
                ans+=comp[j];
                j++;i--;
            }
            else
            {
                ans+=orig[i];
                i--;
            }
        }
        else
        {
            ans+=orig[i];
            i--;
        }
    }
    return ans;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> v;
        vector<int> v1;
        vector<int> v2;
        vector<int>v3;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if (i + 1 < l)
                v1.push_back(x);
            else if (i + 1 >= l && i + 1 <= r)
            {
                v2.push_back(x);
            }
            else
                v3.push_back(x);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        sort(v3.begin(),v3.end());
        int i=v2.size()-1;
        int j=0;
        int ans=LLONG_MAX;
        int a=findans(v2,v1);
        int b=findans(v2,v3);
        ans=min(ans,min(a,b));
        cout<<ans<<endl;

       
    }
}