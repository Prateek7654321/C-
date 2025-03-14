#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int n,m;
        cin>>n>>m;
        vector<int>v;
        vector<int>v1;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(int j=0;j<m;j++)
        {
           long long  int y;
            cin>>y;
            v1.push_back(y);
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
       long long int ans=0;
        long long int sum=INT_MIN;
        int i=0;
        int j=m-1;
        int x;
        while(i<n)
        {
            x=abs(v[i]-v1[j]);
            
            if(x==0&&j-0>n-i-1)
            {
                j--;
                continue;
            }
           else if(sum<=x&&j-0>=n-i-1)
           { sum=x;j--;continue;}
            else 
            {
                ans+=sum;
                sum=INT_MIN;
                i++;
                continue;
            }
        }
    
       
        cout<<ans<<endl;
    }
}