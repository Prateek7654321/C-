#include <bits/stdc++.h>
using namespace std;
#define int long long
class DisjointSet
{
public:
    vector<int> size;
    vector<int> parent;
    DisjointSet(int n)
    {
        size.resize(n + 1, 1);
        parent.resize(n + 1, 1);
        for (int i = 1; i <= n; i++)
            parent[i] = i;
    }
    int findparent(int node)
    {
        if (parent[node] == node)
            return node;
        return parent[node] = findparent(parent[node]);
    }
    void unionBySize(int u, int v)
    {
        int upu = findparent(u);
        int upv = findparent(v);
        if (upu != upv)
        {
            if (size[upu] <= size[upv])
            {
                size[upv] += size[upu];
                parent[upu] = upv;
            }
            else
            {
                size[upu] += size[upv];
                parent[upv] = upu;
            }
        }
    }
};
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<int> q(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
    }
    DisjointSet ds = DisjointSet(n);
    for (int i = 1; i <= n; i++)
    {
        ds.unionBySize(i, v[i]);
    }
    vector<int> vis(n + 1, 0);
    int ans = 0;
    
    for (int i = 0; i < q.size(); i++)
    {
        int up = ds.findparent(q[i]);
        if (vis[up] == 0)
        {
            ans += ds.size[up];
            vis[up] = 1;
        }
        cout << ans << " ";
    }
    cout << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}