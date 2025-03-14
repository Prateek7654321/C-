#include <iostream>
using namespace std;
int b;
void binary(int arr[], int num,int key)
{ 
    int s = 0;
    int e = num - 1;
    while (s < e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] > arr[0])
        {
            s = mid+1;
        
        }
        else
        {
            e = mid;
        }
        
    }
     b=s;
     cout<<b<<endl;
    
}
int main()
{
    int n;
    cin >> n;
    cout << "enter rotated array for pivot element" << endl;
    int arr[n];
    int key;
    cin>>key;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
     binary(arr, n,key);
    
    return 0;
}