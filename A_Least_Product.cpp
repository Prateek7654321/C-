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
        int pos=0;
        int neg=0;
        int zero=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            if(x>0)
            pos++;
            else if(x==0)
            zero++;
            else
            neg++;

        }
        if(zero>0)
        {
            cout<<0<<endl;
        }
        else
        {
            if(neg>0)
            {
                if(neg%2!=0)
                cout<<0<<endl;
                else
                {
                    cout<<1<<endl;
                    for(int i=0;i<n;i++)
                    if(v[i]<0)
                    {
                        cout<<i+1<<" "<<0<<endl;
                        break;
                    }
                }
            }
            else
            {
                cout<<1<<endl;
                cout<<1<<" "<<0<<endl;
            }

        }
    }
}