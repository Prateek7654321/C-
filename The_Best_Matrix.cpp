#include <bits/stdc++.h>
using namespace std;
#define int long long

// Compute number of changes needed to make the matrix follow the pattern:
// A[x][y] = base + x + y, where base = el - i - j for the reference cell (i, j)
int solve_single(int n, int m, vector<vector<int>>& A) {
    long long best = n * 1LL * m;  // worst case: change everything
    for (int dx : {+1, -1}) {
        for (int dy : {+1, -1}) {
            unordered_map<long long,int> freq;
            freq.reserve(n*m);
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    long long base = A[i][j] - (long long)i*dx - (long long)j*dy;
                    ++freq[base];
                }
            }
            // find the base with maximum frequency
            int maxf = 0;
            for (auto &p : freq)
                maxf = max(maxf, p.second);
            best = min(best, n*m - maxf);
        }
    }
    return best;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> v[i][j];
    }

   cout<<solve_single(n,m,v)<<endl;

   
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
