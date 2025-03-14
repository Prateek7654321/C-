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
        for(int i=0;i<n-1;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        vector<int>ans;
        ans.push_back(v[0]+1);
        int j=0;
        for(int j=0;j<v.size();j++)
        {
            if(j==v.size()-1)
            { 
                ans.push_back(ans[ans.size()-1]+v[j]);
            }
            else
            {
                int x=ans[ans.size()-1];
                int a=2;
                while(x<v[j+1])
                {
                    x*=a;
                    a++;
                }
                ans.push_back(x+v[j]);
              
            }
        }
        for(int k=0;k<ans.size();k++)
        cout<<ans[k]<<" ";
        cout<<endl;
    }
}