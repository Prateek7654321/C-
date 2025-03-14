#include<iostream>
using namespace std;
int binary(int arr[],int num,int key)
{
    int s=0;
    int e=num-1;
    while(s<=e)
    {
        int mid=((s+e)/2);
        if(arr[mid]==key)
        {
          return mid;
        }
        if(arr[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
       
    }
    return -1;

}
int main()
{
    int n;
    cin>>n;
    cout<<"enter sorted array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter element whose last and first occurence index  found"<<endl;
    cin>>key;
    int d=binary(arr,n,key);
    cout<<"element found at"<<d<<endl;
    int a;
    int b;
    int e=d;
    
    while(arr[d]==key)
    {a=d;
    d--;
    }
    cout<<"first occurance is" <<a<<endl;
     while(arr[e]==key)
    { b=e;
    e++;}
    cout<<"last occurance is"<<b<<endl;
    return 0;
}