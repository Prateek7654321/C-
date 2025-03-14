#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<int>dp(s.length(),-1);
        int answer=1;
        char last=s[0];
        bool flag=false;
        for(int j=1;j<s.length();j++)
        {  
          if(s[j]==s[j-1])
          continue;
          if(s[j]>s[j-1]&&flag==false)
          {
            flag=true;
            continue;
          }
          if(s[j]<s[j-1])
          answer++;
          if(s[j]>s[j-1]&&flag==true)
          {
            answer++;
          }
        }
        cout<<answer<<endl;
    }
}