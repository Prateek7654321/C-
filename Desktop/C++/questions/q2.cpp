#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    { int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
    {cin>>arr[i];
    }
    vector<int>v;
    int b=0;
    for(int i=0;i<x;i++)
    {
        if(arr[i]==0)
        {b++;}
        else
        {   cout<<b<<endl;
            v.push_back(b);
            b=0;
        }
    }
    int max=0;
    for(int i:v)
    {
        if(max<i)
        max=i;
    }
    cout<<max<<endl;
    }
       
    return 0;
} 