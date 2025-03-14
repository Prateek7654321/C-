#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s, s1;
        cin >> s >> s1;
        
        vector<int> zero(n, 0), one(n, 0);
        if (s[0] == '0')
            zero[0]++;
        else
            one[0]++;
        
        for (int i = 1; i < n; i++) {
            zero[i] = zero[i - 1] + (s[i] == '0' ? 1 : 0);
            one[i] = one[i - 1] + (s[i] == '1' ? 1 : 0);
        }
        
        int a = 0;
        bool flag = true;

        if (n % 2 != 0) {
            if (s[n - 1] != s1[n - 1]) 
                flag = false;
            else 
                n--;
        }

        for (int i = n - 2; i >= 0; i -= 2) {
            if (a % 2 != 0) {
                s[i] = (s[i] == '0') ? '1' : '0';
                s[i + 1] = (s[i + 1] == '0') ? '1' : '0';
            }

            if (s[i] == s1[i] && s[i + 1] == s1[i + 1]) {
                continue;
            } else if (s[i] != s1[i] && s[i + 1] != s1[i + 1] && one[i + 1] == zero[i + 1]) {
                a++;
            } else {
                flag = false;
                break;
            }
        }

        if (!flag)
            cout << "NO" << endl;
        else
            cout << " YES" << endl;
    }
}
