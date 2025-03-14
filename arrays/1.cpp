
#include<iostream>
using namespace std;
int main()
{int a;
cin>>a;
while(a--)
   { int n;
    cin>>n;
    int arr[100];
   
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
    for(int j=0;j<n;j++)
    {  int t=1;
        for(int k=1;k<=arr[j];k++)
        {
            t=t*k;
        }
        arr[j]=t;
        cout<<arr[j]<<" ";
    }
    cout<<endl;
   
   }
    return 0;
}

