#include <iostream>
using namespace std;
int binary(int arr[],int num,int a)
{ int s=0;
int e=num-1;
while(s<=e)
{
    int mid=(s+e)/2;
    long long int ans=mid*mid;
    if(ans==a)
    {
        return mid;
    }
    if(ans>a)
    {
        e=mid-1;
    }
    else if(ans<a){
        s=mid+1;}
        else{return ans;}
    }

}

}
int main()
{
   long long int a;
       cout << "enter no whose sq root to be found" << endl;
    cin >> a;
    int arr[a];
   
    for (int i = 0; i < a; i++)
    {
        arr[i]=i;
    }

   
    int d=binary(arr,a,a);
    cout<<"integer square root is"<<d<<endl;
    return 0;
}