#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;cin>>s;
        int ans=0;
        bool flag=false;
        int len=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='.')
            len++;
            else
            {
                if(len<=2)
                ans+=len;
                if(len>=3)
                flag=true;
                len=0;
            }
        }
        if(len<=2)
        ans+=len;
        if(len>=3)
        flag=true;
        if(flag)
        cout<<2<<endl;
        else
        {
            cout<<ans<<endl;
        }
        
    }
}