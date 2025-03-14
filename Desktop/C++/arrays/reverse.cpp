#include<iostream>
using namespace std;
void search (int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<=end)
   {swap(arr[start],arr[end]);
    start++;
    end--;}


}
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    search(arr,5);
       for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}