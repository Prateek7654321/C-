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
        vector<int>v;
        vector<int>v1;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            v.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            int y;cin>>y;
            v1.push_back(y);
        }
        int a=0;
        int b=0;
        int both_pos=0;int both_neg=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==1&&v1[i]==1)
            both_pos++;
            if(v[i]==-1&&v1[i]==-1)
            both_neg--;
            if(v[i]==1&&v1[i]==-1||(v[i]==1&&v1[i]==0))
            a++;
            if(v[i]==-1&&v1[i]==1||(v[i]==0&&v1[i]==1))
            b++;
        }
        int diff=abs(a-b);
        if(both_pos>=diff)
        {
            a=max(a,b);
            b=a;
            both_pos-=diff;
            if(both_pos%2==0)
            {a+=both_pos/2;b=a;}
            else
            {
                a+=both_pos/2+1;b+=both_pos/2;
            } 
        }
        else
        {
            int f=min(a,b);
            a=max(a,b);
            b=f+both_pos;
        }
        
        
        if(both_neg>=-1*abs(a-b))
        {
            cout<<min(a,b)<<endl;
        }
        else
        {  int diff=abs(a-b);
            a=min(a,b);
            b=a;
            both_neg+=diff;
            if(both_neg%2==0)
            cout<<a+both_neg/2<<endl;
            else
            cout<<a+both_neg/2-1<<endl;
        }
        

       
    }

}