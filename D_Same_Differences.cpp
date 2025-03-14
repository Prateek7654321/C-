#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        // unordered_map<int,int>mp;
        // for(int i=1;i<n;i++)
        // {
        //     for(int j=i-1;j>=0;j--)
        //     {
        //         if(v[j]-v[i]==j-i)
        //         {
        //             ans+=1+mp[j];
        //             mp[i]=1+mp[j];
        //             break;
        //         }
        //     }
        // }
        unordered_map<int, int> map;
	for (int i = 0; i < n; i++)
		map[v[i] - i]++;

	// To store the required count
	int res = 0;
	for (auto x : map) {
		int cnt = x.second;

		// If cnt is the number of elements
		// whose difference with their index
		// is same then ((cnt * (cnt - 1)) / 2)
		// such pairs are possible
		res += (long long)((cnt * (cnt - 1)) / 2);
	}
        cout<<res<<endl;
    }
}