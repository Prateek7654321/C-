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
            int x;
            cin>>x;
            v.push_back(x);
        }
        int a=0;
        for(int i=0;i<n;i++)
        {a=a^v[i];}
        for(int i=0;i<n;i++)
        v[i]=a;
        int x=0;
        for(int i=0;i<n;i++)
        {
        x=x^v[i];
        }
        

        if(a==0)
        {
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
        }
        if(a!=0)
        {   if(n%2==0){
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;}
            else
            {
               cout<<4<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<n-1<<" "<<n<<endl;
            cout<<n-2<<" "<<n-1<<endl;
            cout<<1<<" "<<n<<endl; 
            }
        }
    }
}