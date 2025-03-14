#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string p;
    cin>>p;
    sort(s.begin(),s.end());
     sort(p.begin(),p.end());
     if(s==p)
     cout<<"they are anagram means are zumble of each other";
     else
     cout<<"no";
}