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
        int arr[n];
        int a=0;
        int b=0;
        int k=0;
        vector<int>v1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
           { a=a+arr[i];}
            else
            b=b+arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=0)
           { k++;
           }
            else
            {continue;

            }
        }
        
        if(a==0)
        {
            cout<<b<<" "<<0<<endl;
        }
        else
        {cout<<-1*a+b<<" "<<k<<endl;
            
        }
        
    }
}
