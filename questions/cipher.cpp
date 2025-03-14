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
        string s2;
        int b=0;
        for(int i=b+1;i<n;i++)
        {
            if(s[i]==s[b])
            {
                s2=s2+s[b];
                b=b+i+2;
                
                
            }
        }
        cout<<s2<<endl;
    }
}