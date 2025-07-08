#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
   cout<<(n+1)/2<<endl;
   vector<int>v;
   for(int i=2;i<3*n;i+=3)
   v.push_back(i);
   int i=0;
   int j=v.size()-1;
   while(i<=j)
   {
    cout<<v[i]-1<<" "<<v[j]+1<<endl;
    i++;j--;
   }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}