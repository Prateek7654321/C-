#include <bits/stdc++.h>
using namespace std;//jai shreeram


int main() {
    int o;
    cin >> o;
    while(o--) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << 1 << endl;
            cout << 1 << endl;
            continue;
        }

        int maximum = 0;
        vector<int> v(n, 0);
        map<int, set<int>> mps;

        for (int k = n - 1; k >= 0; k--) {
            if (mps[k + 1].size() == 0) {
                v[k] = 1;
                int x = k + 1;
                for (int j = 1; j * j <= x; j++) {
                    if (x % j == 0) {
                        mps[j].insert(1);
                        mps[x / j].insert(1);
                    }
                }
            } else {
                v[k] = *mps[k + 1].rbegin() + 1;
                int f = k + 1;
                for (int j = 1; j * j <= f; j++) {
                    if (f % j == 0) {
                        mps[j].insert(v[k]);
                        mps[f / j].insert(v[k]);
                    }
                }
            }
            maximum = max(maximum, v[k]);
        }

        cout << maximum << '\n';
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    }
}
