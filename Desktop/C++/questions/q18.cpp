#include<bits/stdc++.h>
using namespace std;
//#define int long long


 int n,q,l,r,f,k,c,c1;
  
int main()
{
    
     cin>>n>>q;
     c1=0;
     vector<int>v;
     for(int i=0;i<n;i++)
     {
        cin>>k;
        if(k==1)
        c1++;
        
     }
     c=n-c1;
     c=min(c,c1)*2;


    
     for(int i=0;i<q;i++){
        cin>>l>>r;
        if(r-l+1<=c)
        v.push_back(r-l+1);
        else v.push_back(0);
       
     }
     
     for(int i=0;i<v.size();i++){
        if(v[i]&1 || v[i]==0)cout<<"0\n";
        else cout<<"1\n";
     }

}