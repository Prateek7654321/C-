# include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
            sum+=x;
        }
       
        int a=0;
        int b=0;
        if(k%2==0)
        {a=k/2;b=k/2;}
        else
        {a=k/2+1;b=k/2;}
        vector<int>prefix(n,0);
        vector<int>suffix(n,0);
        prefix[0]=v[0];suffix[n-1]=v[n-1];
        for(int i=1;i<n;i++)
        prefix[i]=prefix[i-1]+v[i];
        for(int i=n-2;i>=0;i--)
        suffix[i]=suffix[i+1]+v[i];
        int ships=0;
        int index=0;
        if(sum<=k)
        cout<<n<<endl;
        else
        {
        for(int i=0;i<n;i++)
        {
            if(prefix[i]<=a)
            ships++;
            else
            {
              prefix[i]-=a;
              index=i;
              break;
            }
        }
        for(int j=n-1;j>=index;j--)
        {   if(j==index)
        {
             if(prefix[j]<=b)
             ships++;
             else
             break;
        }
        else if(j==index+1)
        {
            if(suffix[j]<=b)
            {
                ships++;
                b-=suffix[j];
            }
            else
            break;
        }
            else if(suffix[j]<=b)
            ships++;
            else
            {
             break;
            }
            
           
        }
        // if(b<n/2)
        // {
        //     if(prefix[index]<=b)
        //     ships++;
        // }
        cout<<ships<<endl;
        }

    }
}