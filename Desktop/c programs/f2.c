#include<stdio.h>
int main()
{ 
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int n;
        scanf("%d",&n);
        int arr[n], d, c;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        if(n%2==0)
        {
            d=n/2-1;
            c=d+1;
        }
        else if(n%2!=0)
        {
            d=(n/2);
            c=d;
        }
        while(d>=0)
        {
            if(arr[d]==arr[c])
            {
                d--;
                c++;
                continue;
            }
            else
            {
                printf("no\n");
                break;
            }
        }
        if(d==-1)
        {
            printf("yes\n");
        }
    }
    return 0;
}
