#include<bits/stdc++.h>
#include<math.h>
using namespace std;
string s3;

int main()
{
    int n;
    cin>>n;
    while(n--)
    { int a=0;
        int x,y;
        cin>>x>>y;
        string s3;
        for(int i=0;i<x;i++)
        { 
            string s;
            cin>>s;
            if(i==0)
           { s3+=s;}
           if(s3==s)
           a++; 
        }
        cout<<a<<endl;
    }
}