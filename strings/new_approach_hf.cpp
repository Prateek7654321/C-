#include<bits/stdc++.h>//here group array index to alphabets and increasing frequency so no use of two loops
using namespace std;
int main()
{
    string s;
    cin>>s;
    int arr[26]={0};
    int b,max=0;
    for(int i=0;i<s.size();i++)
    {
        int n=(int)s[i];
        arr[n-97]++;
        if(max<arr[n-97])
        max=arr[n-97];

    }
   
    for(int j=0;j<26;j++)
    {
        if(max==arr[j])
       {
       int b=j;
       cout<<char(b+97)<<" "<<max<<endl;}
    
    
}}