#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Prateek";
    int i=0;
    int a=0;
    while(s[i]!='\0')
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            a++;
        i++;
    }
    cout<<a;
}