#include <bits/stdc++.h>
using namespace std;
#define int long long
int findreduced(string s)
{ int a=0;
    while(s.size()>1)
    {
        for(int i=0;i<s.size();i++)
        {
           a+=s[i]-'0'; 
        }
        
        s=to_string(a);
        a=0;
    }
    return s[0]-'0';
}

signed main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            string s=to_string(i);
            if(s.size()>1)
            {
                int a=findreduced(s);
                
                ans+=a;
            }
            else
            {
                ans+=i;
            }
        }
        cout<<ans<<endl;
    }

}
