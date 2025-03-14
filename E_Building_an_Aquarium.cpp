#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        long long int a = v[n - 1] + k;
       long long  int l = 1;
        bool flag = true;
        while (l <= a)
        {
            
            long long int mid = l + (a - l) / 2;
            long long int sum = 0;
            for (int i = 0; i <n; i++)
            {  if(mid>=v[i])
                sum += mid-v[i];
            }
            if (sum > k)
            {
                a = mid - 1;
            }
            else if (sum < k)
            {
                l = mid + 1;
            }
            else
            {
                cout << mid << endl;
                flag = false;
                break;
            }
        }
            if(flag==false)
            {}
            else{cout<<a<<endl;}

    }

}