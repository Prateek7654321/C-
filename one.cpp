#include <bits/stdc++.h>
using namespace std;
const int m = 1e9 + 7;
int findans(int n)
{
    if (n == 1 || n == 2)
        return 1;
    if (n == 0)
        return 4;
      return ((n*findans(n-1))%m-((n-1)*findans(n-2))%m+((n-2)*3)%m)%m;
}
int main()
{
    int n;
    cin >> n;

    cout << findans(n);
};
