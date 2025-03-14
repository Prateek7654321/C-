class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{ bool flag=false;
	int i=0;
	int j=0;
	int a=-1;
	    for( i=n-1;i>0;i--)
	    { int sum=0;
	    
	        for( j=0;j<=i;j++)
	        { sum+=arr[j];}
	        if(sum%k==0)
	        {
	            flag=true;
	            a=i-0+1;
	            break;
	        } 
	        if(flag==true)
	        break;
	        
	    int t=0;
	    while(j<=n-1)
	    {
	        j++;
	        sum+=arr[j];
	        sum-=arr[t];
	        t++;
	        if(sum%k==0)
	        {
	            a=j-t;
	            flag=true;
	            break;
	        }
	    }
	    if(flag==true)
	    break;
	    }
	    return a;
	}
};