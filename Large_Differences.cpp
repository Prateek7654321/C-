#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        vector<int>diff(n-1,0);
        int sum=0;
        for(int i=1;i<n;i++)
        {
            diff[i-1]=abs(v[i]-v[i-1]);
            sum+=diff[i-1];
        }
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
            if(i==0)
            {
                int a=abs(v[i+1]-1);
                int b=abs(v[i+1]-k);
                   ans = max(ans, sum - diff[i] + a);
                ans = max(ans, sum - diff[i] + b);
            }
            else if(i!=v.size()-1)
            {
                int a=abs(1-v[i-1])+abs(1-v[i+1]);
                int b=abs(k-v[i-1])+abs(k-v[i+1]);
               int option1 = sum - diff[i - 1] - diff[i] + a;
                int option2 = sum - diff[i - 1] - diff[i] + b;
                ans = max(ans, option1);
                ans = max(ans, option2);
            }
            else
            {
                int a=abs(1-v[i-1]);
                int b=abs(k-v[i-1]);
                   ans = max(ans, sum - diff[i - 1] + a);
                ans = max(ans, sum - diff[i - 1] + b);
            }
            
        }
        cout<<ans<<endl;
    }
}