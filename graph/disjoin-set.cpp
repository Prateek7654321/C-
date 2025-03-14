#include <bits/stdc++.h>
using namespace std;
class DisjointSet
{
    vector<int> rank, parent;
    vector<int> size;

public:
    DisjointSet(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1, 1);
        for (int i = 0; i <= n; i++)
            parent[i] = i;
    }
    int findpar(int node)
    {
        if (parent[node] == node)
            return node;
        return parent[node] = findpar(parent[node]);
        // path compression
    }
    void unionByRank(int u, int v)
    {
        int upu = findpar(u);
        int upv = findpar(v);
        if (rank[upu] < rank[upv])
        {
            parent[upu] = upv;
        }
        else if (rank[upu] > rank[upv])
        {
            parent[upv] = upu;
        }
        else
        {
            parent[upu] = upv;
            rank[upv] += 1;
        }
    }
    void unionBySize(int u, int v)
    {
        int upu = findpar(u);
        int upv = findpar(v);
        if (size[upu] <= size[upv])
        {
            parent[upu] = upv;
            size[upv] += size[upu];
        }
        else
        {
        }
        parent[upv] = upu;
        size[upu] += size[upv];
    }
}

;
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    DisjointSet ds = DisjointSet(n);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        ds.unionByRank(x, y);
        ds.unionBySize(x, y);
    }
    int a, b;
    cin >> a >> b;
    if (ds.findpar(a) == ds.findpar(b))
        cout << "part of same component" << endl;
    else
        cout << "NOT part of same component" << endl;
}