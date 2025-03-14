#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int a,b;
    cin>>a>>b;
    vector<int>v;
    vector<int>v1;
    for(int i=1;i<INT_MAX;i++)
    {
        v.push_back(a^i);
        v1.push_back(b^i);
    }
    int ans=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v1.size();j++)
        {
            if(v[i]==v[j])
            { int t=0;
                while(i<v.size()&&j<v1.size())
                {
                    if(v[i]==v1[j])
                    {
                        t++;
                        i++;
                        j++;
                    }
                    else
                    break;
                }
            }
            ans=max(ans,t);
        }
    }
    cout<<ans<<endl;
 }
}