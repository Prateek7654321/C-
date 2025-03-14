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
        for(int i=0;i<n-2;i++)
        {
            int x;
            cin>>x;v.push_back(x);
        }
        if(v.size()<=2)
        cout<<"YES"<<endl;
        else 
        {
            int l=0;
            int r=0;
            bool flag=true;
            while(r<v.size())
            {
                if(r-l+1==3)
                {
                    if(v[l]==1&&v[l+1]==0&&v[l+2]==1)
                    {
                        flag=false;break;
                    }
                    l++;
                }
                r++;
            }
            if(flag)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
}