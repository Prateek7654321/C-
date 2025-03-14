#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        int arr[x];
        int brr[x-1];
        for(int i=0;i<x;i++)
        {
            cin>>arr[i];
        }
        for(int j=0;j<x-1;j++)
        {
            brr[j]=arr[j]+arr[j+1];
           
        }
           for(int j=0;j<x-1;j++)
        {
            cout<<brr[j];
           
        }
        
        
    }
}