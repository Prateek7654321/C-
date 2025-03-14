#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count =0;
    int a=s.size();
    for(int i=0;i<a;i++)
    {
        if(i==0)
        {
            if(s[i]!=s[i+1])
            count++;
        }
        else if(i==a-1)
        {
            if(s[i]!=s[i-1])
            count++;
        }
        else{
            if(s[i]!=s[i+1]&&s[i]!=s[i-1])
            count++;
        }
    }
    cout<<count;
}