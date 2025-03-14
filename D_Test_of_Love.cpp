#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,jump,swim;
        cin>>n>>jump>>swim;
        string s;
        cin>>s;
       
        vector<pair<int, int>> v1(n, {-1, -1});
        int croc = -1;
        int log = -1;

        for (int i = s.size() - 1; i >= 0; i--)
        {
            v1[i] = {croc, log};
            if (s[i] == 'C')
            {
                croc = i;
            }
            else if (s[i] == 'L')
            {
                log = i;
            }
        }

        int i=0;
        if(-1+jump>=n)
        {
            i=n;
        }
        else if(s[-1+jump]=='L')
        {
            i=-1+jump;
        }
        if(v1[0].second==-1||v1[0].second>jump)
        {
           i+=jump-1;
        }
        else if(v1[0].second<=jump)
        {
            i+=jump;
        }
    

      while(i<n)
      {
        if(s[i]=='L')
        {
             if (v1[i].second != -1 && v1[i].second - i <= jump)
                {
                    i = v1[i].second;
                    continue;
                }
            if(i+jump>=n)
            {i+=jump;break;}
        }
        else if(s[i]=='W')
        { if(i+jump)
            if(swim<=0)
           {cout<<"NO"<<endl;break;}
          swim--;
        }
        else
        {cout<<"NO"<<endl;break;}
        i++;
      }
      if(i>=n)
      cout<<"YES"<<endl;
        
    }
}