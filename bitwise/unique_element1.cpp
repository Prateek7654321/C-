// find two unique elements in array in which two element appears exactly once instead of two like other elements 
#include<bits/stdc++.h>
using namespace std;
void findunique(int* arr,int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    res=res^arr[i];
    int temp=res;
    // now finding  any set bit position from lsb side
    int k=0;
    while(true)
    {
        if(res&1==1)
        break;
        else{
            k++;
            res>>1;
        }
    }
    int val1=0;
    for(int i=0;i<n;i++)
    {
        if((arr[i]>>k)&1==1)
        val1^=arr[i];
    }
    cout<<"the first value is"<<val1<<endl;
    cout<<"the second value is"<<(val1^temp)<<endl;

}
int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    findunique(arr,n);

}