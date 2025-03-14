#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        int ans=0;
        for(int i=l;i<=r;i++)
        {
            if(i%2==0)
            continue;
            else
            {
                if(i+2<=r)
                {ans++;i+=3;}
                else
                break;
            }
        }
        cout<<ans<<endl;
    }
}