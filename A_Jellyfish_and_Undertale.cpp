#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, n;
        cin >> a >> b >> n;
        long long int out = 0;
        vector<int> v;
        int count=0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
       
        }
        sort(v.begin(), v.end());
        long long int ans=0;
            sort(v.begin(),v.end());
        long long sum = min(a,b);
 
       for(long long i= 0; i<n ; i++)
       {
          if(a-1<v[i])
          sum+=a-1;
          else
          sum+=v[i];
       }
    
      cout<<sum<<endl;
    }
}