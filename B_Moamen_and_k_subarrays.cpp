#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int>v;
        vector<pair<int, int>> v1(n);
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            v1[i].first=x;
            v1[i].second=i;
        }
        sort(v1.begin(),v1.end());
        int count=1;
        for(int i=1;i<v1.size();i++)
        {
            if(v1[i].second-v1[i-1].second!=1)
            count++;
        }
        if(count>k)
        cout<<"No"<<endl;
        else if(count<=k)
        cout<<"Yes"<<endl;
        
        
    }
    return 0;
}
