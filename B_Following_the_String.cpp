#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        // Initialize vector and character array
        vector<int> v(n);
        vector<char> ch(n, 'A');

        // Taking input
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // Assign characters based on the conditions
        char character = 'a'; // Start from 'a'
        for (int i = n - 1; i >= 0; i--) {
            if (ch[i] == 'A') {
                int a = v[i];
                ch[i] = character;
                for (int j = i - 1; j >= 0; j--) {
                    if (a - v[j] == 1 && ch[j] == 'A') {
                        ch[j] = character;
                        a = v[j];
                    }
                }
                character++; // Move to the next character
            }
        }

        // Output the result
        string ans(ch.begin(), ch.end());
        cout << ans << endl;
    }
    return 0;
}
