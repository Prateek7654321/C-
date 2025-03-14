#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {int x;cin>>x;v.push_back(x);}
        vector<int>answers(n,0);
        answers[n-1]=v[n-1];
        for(int j=n-2;j>=0;j--)
        {
          if(v[j]<=v[j+1])
          {answers[j]=answers[j+1]+1;}
          else
          {
            if(v[j]>answers[j+1])
            answers[j]=v[j];
            else
            answers[j]=answers[j+1]+1;
          }
        }
        cout<<answers[0]<<endl;
    }
}