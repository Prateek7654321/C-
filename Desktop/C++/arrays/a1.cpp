#include <iostream>
using namespace std;
void getmax(int arr[], int size)
{
    int max = arr[0];
    int min=arr[0];
    for (int j = 0; j < size; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
        if(arr[j]<min)
        {
            min=arr[j];
        }
    }
    cout << max << endl;
    cout << min << endl;

}
int main()
{
    int arr[100];
    int size;
    cout<<"enter the no of elements to be placed\n";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    getmax(arr, size);
}