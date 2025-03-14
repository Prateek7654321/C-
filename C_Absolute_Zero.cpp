#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> ans;
        bool flag = false;

        for (int iter = 0; iter < 40; iter++) {
            sort(arr.begin(), arr.end());
            int first = arr[0];
            int last = arr[n - 1];

            // Check if all elements are zero
            if (first == 0 && last == 0) {
                flag = true;
                break;
            }

            // Compute average and update answer
            int avg = (first + last) / 2;
            ans.push_back(avg);

            // Update the array with absolute differences
            vector<int> newArr(n);
            for (int i = 0; i < n; i++) {
                newArr[i] = abs(arr[i] - avg);
            }
            arr = move(newArr); // Efficient swap to avoid copying
        }

        if (flag) {
            cout << ans.size() << endl;
            for (int x : ans) {
                cout << x << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
