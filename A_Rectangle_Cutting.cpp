#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        bool flag = true;
        if (m % 2 != 0 && n % 2 != 0)
            cout << "NO" << endl;
            else
            {
        if (m % 2 == 0)
        {
            int a = m / 2;
            int b = 2 * n;
            if (max(a, b) == max(m, n) && min(a, b) == min(m, n))
            {

                flag = false;
            }
            else
                flag=true;
        }
        if(m%2!=0)
        flag=false;
     
       if(n%2==0)
        {
            int p = n / 2;
            int q = 2 * m;
            if (max(p, q) == max(m, n) && min(p, q) == min(m, n)&&flag!=true)
                flag=false;
            else
                flag=true;
        }
        if(flag==false)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
            }
    }
}