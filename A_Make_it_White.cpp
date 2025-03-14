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
        string s;
        cin>>s;
        int a=0;
        int b=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='B')
            {
               a=i;break; 
            }
        }
        for(int j=s.size()-1;j>=0;j--)
        {
            if(s[j]=='B')
            {
                b=j;break;
            }
        }
        cout<<b-a+1<<endl;
    }
}