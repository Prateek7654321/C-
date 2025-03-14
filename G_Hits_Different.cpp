#include <bits/stdc++.h>
using namespace std;
#define int long long 

int findrow(int n, int& last) {
    int x = 1;
    int t = 1;
    while (true) {
        if (n <= x) {
            last = x;
            return t;
        } else {
            t++;
            x += t;
        }
    }
}

int solvelast(int n, int row, int last) {
    int ans = 0;
    if (n == last) {
        while (n >= 1) {
            ans += n * n;
            n -= row;
            row--;
        }
        return ans;
    }
    if (n == last - row + 1) {
        row -= 1;
        while (n > 1) {
            ans += n * n;
            n -= row;
            row--;
        }
        return ans;
    }
    return ans; // Adding a return statement to handle all paths.
}

int findans(int n, int row, int last,int first) {
    int ans = n*n;
    int n1=n;
    while(row>1)
    {
    last=last-row;
    first=first-row+1;
    int a=n-row;
    int b=n-row+1;
    a=min(a,b);
    if(a<=first)
    n=first;
    else
    n=a;
    int c=n1-row+1;
    int d=n1-row;
    c=max(c,d);
    if(c>=last)
    n1=last;
    else
    n1=c;
    int p=(n1)*(2*n1+1)*(n1+1)/6-((n)*(n+1)*(2*n+1))/6+n*n; 
    
    ans+=p;
    row-=1;
    }
    return ans;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int last = 0;
        int row = findrow(n, last);
        int ans = 0;
        if (n == last || n == last - row + 1) {
            if (n == last) {
                cout << solvelast(n, row, last) << endl;
            } else if (n == last - row + 1) {
                cout << solvelast(n, row, last) + 1 << endl;
            }
        } else { int first=n-last+1;
            cout << findans(n, row, last,first) << endl;
        }
    }
    return 0;
}
