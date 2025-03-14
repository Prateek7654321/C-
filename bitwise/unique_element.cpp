// find unique element in array in which each elements repeat twice except one
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res=0;
    for(int i=0;i<n;i++)
    {
        res=res^arr[i];
    }
    cout<<"the unique element is"<<res<<endl;
}