#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x%2!=0)
        cout<<"NO"<<endl;
        else
        {
            string ans;
            int t=65;
            for(int i=1;i<=x/2;i++)
            {
              ans+=char(t);
              ans+=char(t);
              t++;
            }
            cout<<"YES"<<endl;
            cout<<ans<<endl;
        }
            
    }
}