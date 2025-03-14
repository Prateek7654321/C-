#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a=0;
        int b=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='9')
            a++;
            if(s[i]>=5)
            b++;
        }
        if(b==0)
        cout<<s<<endl;
        else
        {
            
        }
    }
}