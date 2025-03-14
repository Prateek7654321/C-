#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {int x,y;
    cin>>x>>y;
    int arr[x];
    int a=0;
    int b=0;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
        a=a+arr[i];
    }
    int brr[y];
    for(int i=0;i<y;i++)
    {
        cin>>brr[i];
        b=b+brr[i];
    }
    cout<<a;
    cout<<b;
    for(int i=0;i<x-1;i++)
    {
        int min=i;
        for(int j=i+1;j<x;j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }
        swap(arr[i],arr[min]);
        
    }
  
      for(int i=0;i<y-1;i++)
    {
        int min=i;
        for(int j=i+1;j<y;j++)
        {
            if(brr[j]<brr[min])
            min=j;
        }
        swap(brr[i],brr[min]);
    }
    int h=0;
    if(y=x)
    cout<<b<<endl;
    if(x>y)
    {
        for(int i=0;i<y;i++)
        { 
            h=h+arr[i];
          
        }
         cout<<(a-h)<<endl; 
    }
    if(x<y) 
    {
        for(int i=y-1;i>=x-1;i++)
        {
            h=h+brr[i];
       
            
        }
        cout<<h<<endl;
    }}
}

    
        
    
