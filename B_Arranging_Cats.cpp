#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {  int x;
    cin>>x;
        string s;
        string t;
        cin>>s;
        cin>>t;
        int a=0;
        int b=0;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]=='0')&&(t[i]=='1'))
            a++;
            else if((s[i]=='1')&&(t[i]=='0'))
            b++;
            else
            continue;

        }
       
        cout<<min(a,b)+max(a,b)-min(a,b)<<endl;
    }
}