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
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        bool flag=true;
        for(int i=1;i<n;i++)
        {
            if(abs(v[i]-v[i-1])==5)
            {
                continue;
            }
            else if(abs(v[i]-v[i-1])==7)
            continue;
            else
            {
                flag=false;break;
            }
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}