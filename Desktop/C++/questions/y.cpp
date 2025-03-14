#include<iostream>
using namespace std;
int main()
{ int n;
cin>>n;
while(n--)
    {int x;
    cin>>x;
    long long int arr[x];
    for(int i=0;i<x;i++)
    cin>>arr[i];
 for (int i = 0; i < x-1; i++)
    {
        int min = i;
        for (int j = i + 1; j < x; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[min],arr[i]);
    }
   if((arr[0]*arr[1])>(arr[x-1]*arr[x-2]))
    cout<<arr[0]*arr[1]<<endl;
   else if((arr[0]*arr[1])==(arr[x-1]*arr[x-2]))
   cout<<arr[0]*arr[1]<<endl;
    else
    cout<<arr[x-1]*arr[x-2]<<endl;
    }  
    return 0; 
}