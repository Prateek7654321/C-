#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int d=0;
        if(n%2==0)
         b=n/2;
        else
        b=(n/2)+1;
        for(int i=0;i<b;i++)
        {
            d=d+abs(arr[i]-arr[n-i-1]);
        }
        cout<<d<<endl;
    }
}
