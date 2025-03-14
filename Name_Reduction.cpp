#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long int
#define loop(i, n) for (int i = 0; i < n; ++i)
#define loop1(i, n) for (int i = 1; i <= n; ++i)
#define endl "\n"
#define rep(i, s, e) for (int i = s; i < e; i++)
#define repd(i, s, e) for (int i = s; i > e; i--)
#define scan(arr)       \
    for (auto &x : arr) \
        cin >> x;
#define print(arr)        \
    for (auto &x : arr)   \
        cout << x << " "; \
    cout << endl;
#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define vvi vector<vector<int>>
#define all(x) (x.begin(), x.end())
#define ppf pop_front
#define pf push_front
#define mod 1e9 + 7
#define YES cout << "YES" \
                 << "\n";
#define NO cout << "NO" \
                << "\n";
#define Yes cout << "Yes" \
                 << "\n";
#define No cout << "No" \
                << "\n";
#define yes cout << "yes" \
                 << "\n";
#define no cout << "no" \
                << "\n";
#define mod 1e9 + 7
string binary(int n);          // int to binary(string)
int reversal(int n);           // reverse intezers
int ati(int arr[], int n);     // array to intezer
int digit_sum(int n);          // sum of int digits
int max_sub(string s, char a); // return max conse freq of a
int lenint(int n);             // length of any intezer
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
/****************************************************************************************************************/
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        string naya;
        naya = s1 + s2;
        //  cout<<naya<<endl;
        int n;
        cin >> n;
        vector<string> v(n);
        loop(i, n) cin >> v[i];
        string sum;
        loop(i, n) sum = sum + v[i];
        // cout<<sum<<endl;
        // sort(naya.begin(), naya.end());
        int counter = 0;
        // sort(sum.begin(), sum.end());
        //  cout << naya << " " << sum << endl;
        //  if (naya == sum)
        // YES else
        // {
        map<char, int> m1;
        map<char, int> m2;
        for (int i = 0; i < sum.size(); i++)
        {
            m1[sum[i]]++;
        }
        loop(i, naya.size()) m2[naya[i]]++;
        // loop(i, sum.size()) cout << sum[i] << " " << m1[sum[i]] << endl;
        //  cout << "break" << endl;
        // loop(i, naya.size()) cout << naya[i] << " " << m2[naya[i]] << endl;
        for (int j = 0; j < naya.size(); j++)
        {
            for (int i = 0; i < sum.size(); i++)
            {
                if (sum[i] == naya[j])
                {
                    if (m2[naya[j]] < m1[sum[i]])
                        counter++;
                }
            }
        }
        if (counter == 0)
            YES else NO
        // }
    }
}
/*****************************************************************************************************************/
signed main()
{
    fast();
    solve();
    return 0;
}
int lenint(ll n)
{
    return floor(log10(n) + 1);
}
int ati(int a[], int n)
{
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x += a[i];
        x *= 10;
    }
    return (x / 10);
}
int reversal(int n)
{
    int x = 0, j = (int)pow(10, (int)log10(n));
    while (n)
    {
        x += (n % 10) * j;
        n /= 10;
        j /= 10;
    }
    return x;
}
// string binary(int n){
//     string str="";
//     int binaryNum[32];
//     int i = 0;
//     while (n > 0) {
//         int x=n%2;
//         str.push_back(x+'0');
//         n = n / 2;
//     }
//     reverse(all(str));
//     return str;
// }
int digit_sum(int n)
{
    int x = 0;
    while (n)
    {
        x += n % 10;
        n /= 10;
    }
    return x;
}
int max_sub(string s, char a)
{
    int temp = 0, flag = 0, ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == a)
        {
            temp++;
            flag = 1;
        }
        else
        {
            temp = 0;
            flag = 0;
        }
        if (flag == 1 && temp > ans)
            ans = temp;
    }
 return ans;
}
