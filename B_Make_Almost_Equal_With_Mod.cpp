#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;
        int odd=0;int even=0;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
            x%2==0?even++:odd++;
        }
        if(odd>0&&even>0)
        {cout<<2<<endl;}
        else
        {
            int k=3;
           
            while(true)
            { bool flag=true;
              int a=-1;
            int b=-1;
            for(int i=0;i<v.size();i++)
            {
                if(a==-1)
                {
                    a=v[i]%k;
                }
                else if(b==-1)
                {
                    b=v[i]%k;
                }
                else if(a!=v[i]%k&&b!=v[i]%k)
                { flag=false;
                    break;
                }
                
            }
            if(flag==false)
            k++;
            else if(flag==true)
            {
                if(a!=b)
                {cout<<k<<endl;break;}
                else
                k++;
            }
            }
        }

    }
}