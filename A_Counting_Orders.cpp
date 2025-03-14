#include <bits/stdc++.h>
using namespace std;
#define int long long
const int M = 1e9 + 7;

int findelements(int target, vector<int>& v1, int l) {
    int n = v1.size();
    int h = n - 1;

    while (l <= h) {
        int mid = l + (h - l) / 2;
        if (v1[mid] >= target) {
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return l; 
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n), v1(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> v1[i];
        }
        sort(v.begin(), v.end());
        sort(v1.begin(), v1.end());

        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (v[i] == v1[i]) {
                flag = true;
                break;
            }
        }

        if (flag) {
            cout << 0 << endl;
        } else {
            int ans = 1;
            for (int i = 0; i < n; i++) {
                int pos = findelements(v[i], v1, i);
                int a = pos - i;
                ans = (ans * a) % M;
            }
            cout << ans % M << endl;
        }
    }
}
