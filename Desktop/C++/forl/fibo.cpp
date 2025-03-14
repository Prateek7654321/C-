#include<iostream
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int arr[10];
    arr[0]=x;
    arr[1]=y;
    arr[2]=x+y;
    for(int i=3;i<6;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(int j=0;j<6;j++)
    {
        cout<<arr[j];
    }
    return 0;
}

