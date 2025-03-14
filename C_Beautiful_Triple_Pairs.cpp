#include<bits/stdc++.h>
using namespace std; 
void findanswers(vector<int>v,int &ans)
{
    int last=v[0]/10;
    int a=1;
    for(int i=1;i<v.size();i++)
    {
     if(v[i]/10==last)
     {
a++;
     }
     else
     {
        if(a==1)
        {
            ans+=0;
            a=1;
        }
        else
        {
          ans+=a*(a-1)/2;
          a=1;
        }
        last=v[i]/10;
     }
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        set<int>s;
        set<int>s1;
        set<int>s2;
      int i=0;
      int j=2;
      while(j<n)
      { if(v[i]==v[i+1]&&v[i+1]==v[i+2])
      {
        s.insert(v[i]*100+v[i+1]*10+v[i+2]);
        s1.insert(v[i]*100+v[i+1]*10+v[i+2]);
        s2.insert(v[i]*100+v[i+1]*10+v[i+2]);
      }
      else{
        int a=v[i]*100+v[i+1]*10+v[i+2];
        int b=v[i]*100+v[i+2]*10+v[i+1];
        int c=v[i+1]*100+v[i+2]*10+v[i];
        s.insert(a);
        s1.insert(b);
        s2.insert(c);
      }
      i++;j++;
      }
      vector<int>an(s.begin(),s.end());
      
      vector<int>a1(s1.begin(),s1.end());
   
      vector<int>a2(s2.begin(),s2.end());
      int ans=0;
      
      findanswers(an,ans);
      findanswers(a1,ans);
      findanswers(a2,ans);
      cout<<ans<<endl;
      
    }
}