#include<iostream>
using namespace std;
int search(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
         if(key>arr[mid])
        {
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        
        
    }

return -1; 

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
    int key;
    cout<<"element index to be searched\n";
    cin>>key;
    int e=search(arr,n,key);
    if(e<0)cout<<"not found";
    else cout<<"index is"<<e<<endl;
}