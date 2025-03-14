#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>ans;
        if(n%2==0)
        {
            int i=1;
            int j=n;
            while(i<j)
            {
                ans.push_back(i);
                ans.push_back(j);
                i++;j--;
            }
        }
        else
        {
            ans.push_back(n);
            n-=1;
            int i=1;
            int j=n;
             while(i<j)
            {
                ans.push_back(i);
                ans.push_back(j);
                i++;j--;
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
}