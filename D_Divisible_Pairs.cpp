#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> v(n);
    map<pair<int,int>, int> freq; // Using map to store (mod_x, mod_y)

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        int mod_x = v[i] % x;
        int mod_y = v[i] % y;
        freq[{mod_x,mod_y}]++;
    }

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        int mod_x = v[i] % x;
        int mod_y = v[i] % y;
        int req_x = (x - mod_x) % x;
        int req_y = mod_y;

        long long key = 1LL * req_x * y + req_y;
        if (mod_x == req_x && mod_y == req_y) {
            ans += freq[{req_x,req_y}] - 1; // Exclude self
        } else {
            ans += freq[{req_x,req_y}];
        }
        freq[{mod_x,mod_y}]--; // Decrement frequency after use
    }

    cout << ans << "\n"; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
