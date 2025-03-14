#include <iostream>
using namespace std;
int binary(int arr[], int num)
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
    return s;
}
int main()
{
    int n;
    cin >> n;
    cout << "enter rotated array for pivot element" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    int p = binary(arr, n);
    cout << "the pivotal element is " << p << endl;
    return 0;
}