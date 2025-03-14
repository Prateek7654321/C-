#include <bits/stdc++.h>
using namespace std;
int main()
{
    string arr[5] = {"123", "012", "1245", "2290", "12"};
    int max = 0;
    int b = 0;
    for (int i = 0; i < 5; i++)
    {
        if (max < stoi(arr[i]))
        {
            max = stoi(arr[i]);
            b = i;
        }
      
    }
      cout << max << " "
             << "is at index" << b << endl;
}