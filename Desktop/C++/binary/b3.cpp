#include<iostream>
using namespace std;
int binary(int arr[],int num)
{
    int s=0;
    int e=num-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {return mid;}
        else if(arr[mid]>arr[mid-1])
        {
            s=mid+1;
        }
        else if(arr[mid]>arr[mid+1])
        {
            e=mid-1;
        }
    }

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   int d= binary(arr,n);
   cout<<d<<endl;
   return 0;
}