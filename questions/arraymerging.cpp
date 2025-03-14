// king is always king
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vii vector<vector<int, int>>
#define mii map<int, int>
#define msi map<string, int>
#define umap unordered_map
#define pb push_back
#define ppb pop_back
#define fl(i, a, b) for (int i = a; i < b; i++)
#define lf(i, a, b) for (int i = b - 1; i >= a; i--)
#define int long long
#define inpall(a, n)            \
    for (int i = 0; i < n; i++) \
        cin >> a[i];
#define prtall(a, n)             \
    for (int i = 0; i < n; i++){ \
        cout << a[i] << " ";}cout<<endl;
const int M = 1e9 + 7;
int mpow(int a, int b)
{
    int pow = a, res = 1;
    while (b)
    {
        if (b & 1)
            res = (res * pow) % M;
        pow = (pow * pow) % M;
        b >>= 1;
    }
    return res;
}
int max_sub(string s, char a){  //maximum length of consecutive a
    int temp=0,flag=0,ans=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==a){
            temp++; flag=1;
        }
        else{
            temp=0; flag=0;
        }
        if(flag==1 && temp>ans)
            ans=temp;
    }
    return ans;
}
 
signed main()
{
    int t;
    cin >> t;
    while (t--)
    { int n;
    cin>>n;
    int a[n],b[n];  vi v1;
    vi v2;
    fl(i,0,n){
        cin>>a[i];
         v1.pb(a[i]);
    }
     fl(i,0,n){
        cin>>b[i];
         v2.pb(b[i]);
    }
    int c1=0,c2=0;int max=0;
    fl(i,0,n){
        if(v1[i]==v1[i+1] || v1[i]==v2[i] || v1[i]==v2[i+1] || v2[i]==v1[i+1] || v2[i]==v1[i] || v2[i]==v1[i]){c1++;}
        else{
            if(c1>max)max=c1;
            c1=0;
        }
    }
    if(max<c1)max=c1;
    cout<<max+1<<endl;
 
 
     }
 
  
 
   
    }
 
 
/*sssssssssssssssssssssssssssssssssssssssssssssssssssssssss*/