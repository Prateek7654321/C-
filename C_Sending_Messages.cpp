#include<bits/stdc++.h>
using namespace std;
// #define int int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,f,a,b;
        cin>>n>>f>>a>>b;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        bool flag=false;
        int t=0;
        int c=0;
        for(int i=0;i<n;i++)
        {           
            if(i==0)
            {
                f-=min(v[0]*a,b);
                c++;
            }  
            else
            {
                f-=min((v[i]-v[i-1])*a,b);
                c++;
            } 
            if(f<=0) {c--;break;}
        }
        if(c==n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}

