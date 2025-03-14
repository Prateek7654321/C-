#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s;
        int t=97;
        for(int i=1;i<=m;i++)
        {
            s+=char(t++);
        }
        for(int i=0;i<n-1;i++)
        {if(s.size()<n)
        s+=s;
        else
        break;}
        cout<<s<<endl;
    }
}