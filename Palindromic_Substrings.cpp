#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==1)
        {
            cout<<"BOB"<<endl;
        }
        else
        {
            int chance=0;
            map<int,int>mp;
                for(int i=1;i<s.size();i++)
                {
                    if(s[i]==s[i-1])
                    {
                        mp[i-1]++;
                        chance++;
                    }
                }
                string updated;
                for(int i=0;i<s.size();i++)
                {
                    if(mp[i]==0)
                    {
                      updated+=s[i];
                    }
                }
                
                while(updated.size()>=3)
                {
                    updated.erase(0,1);
                    chance++;
                }
                if(chance%2==0)
                cout<<"BOB"<<endl;
                else
                cout<<"ALICE"<<endl;
            
        }
    }
}