#include<bits/stdc++.h>
using namespace std;
#define int long long

void applyops(multiset<int>&s,int no,auto it)
{
    s.erase(it);
    auto its=s.lower_bound((long long)(2*no));
    if(*its==2*no)
    {   
        applyops(s,(long long)2*no,its);
    }
    else
    {
        s.insert((long long)2*no); 
        return ;
    }
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {int x;cin>>x;v.push_back(x);}
        multiset<int>s;
        for(int i=0;i<n;i++)
        {
            if(s.size()==0)
            {
                s.insert(v[i]);
                cout<<s.size()<<" ";
            }
            else
            { 
                auto it=s.lower_bound(v[i]);
                if(*it==v[i])
                {   
                    applyops(s,v[i],it);
                }
                else
                s.insert(v[i]);
                cout<<s.size()<<" ";
            }
        }
        cout<<endl;
    }
}