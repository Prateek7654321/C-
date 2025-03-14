#include <iostream>
using namespace std;
int ncr(int num)
{
    int ans = 1;
    for (int i = 1; i <= num; i++)
    {
        ans = ans * i;
       
    }
     
    return ans;
}
int main()
{
    int n, r;
    cin >> n >> r;
    int d = ncr(n);
    int a = ncr(n - r);
    int b = ncr(r);
    cout << (d / (a * b)) << endl;
}