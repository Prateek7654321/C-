#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int max=0;
    for(int i=0;i<n;i++)
    { string h;
    h=h+s[i];
        if(max<stoll(h))
       max=stoi(h);}
       cout<<max<<endl;
}