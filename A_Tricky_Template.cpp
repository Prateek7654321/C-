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
        string p;
        string q;
        string r;
        cin>>p>>q>>r;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(r[i]!=p[i]&&r[i]!=q[i])
            {
                flag=true;
                break;
            }
            
        }
        if(flag==true)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}