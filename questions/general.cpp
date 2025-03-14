#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    vector<int>v1;
    vector<int>v3;
    vector<int>v4;
    
    for(int i=0;i<x;i++)
    {  int u;
    cin>>u;
        v1.push_back(u);
    }
    vector<int>last(v1);
    sort(v1.begin(),v1.end());
    
    int a=v1[0];
    int b=v1[x-1];
    for(int i=0;i<x;i++)
    {
       if(a==last[i])
       {
         v3.push_back(i) ;
       }
       if(b==last[i])
       {
           v4.push_back(i);
       }
    }
    int h=*max_element(v3.begin(), v3.end());
    int k=*min_element(v4.begin(), v4.end());
    if(h>k)
    cout<<x-1-h+k<<endl;
    else 
    cout<<x-1-h+k-1<<endl;

    
    
    
    
}