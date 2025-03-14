#include <bits/stdc++.h>
using namespace std;
#define int long long
int findans(string s, int index, int sum)
{
    if (sum % 9 == 0)
        return 1;
    if (index < 0)
        return 0;

    if (s[index] == '2' || s[index] == '3')
    {
        int choice1 = findans(s, index - 1, sum);
        int choice2 = findans(s, index - 1, sum - (s[index] - '0') + (s[index] - '0') * (s[index] - '0'));
        return (choice1 | choice2);
    }
    return findans(s, index - 1, sum);
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < s.size(); i++)
            sum += s[i] - '0';
        if (findans(s, s.size() - 1, sum) == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}