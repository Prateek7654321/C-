#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int op=0;
        string s;
        cin>>s;
        vector<int>v1;
        for(int i=0;i<n;i++)
        {
            if(s[i]==':')
            v1.push_back(i);
        }
        int len=v1.size();
        for(int i=0;i<len-1;i++)
        {
            if(v1[i+1]-v1[i]==1)
            continue;
            else
            { int br=0;
                for(int j=v1[i];j<v1[i+1];j++)
                {
                    if(s[j]=='(')
                    {br++;continue;}
                    
                }
                if(br==0)
                op++;
            }
            
        }
        cout<<op<<endl;
    }
}