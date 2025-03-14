#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n],c[2*n];
    int i=0,j=-1,k=0;
    for(int t=0;t<n;t++){
        cin>>a[t];
    }
    for(int t=0;t<n;t++){
        cin>>b[t];
    }
    c[k]=a[i];
    for(int t=0;t<2*n;t++){
        if(a[i+1]==c[k]){
            c[++k]=a[++i];
        }
        else c[++k]=b[++j];
    }
    for(int t=0;t<2*n;t++){
        cout<<c[t]<<" ";
    }
}