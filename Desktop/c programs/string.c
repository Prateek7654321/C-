#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c=0;
        int d=0;
    while(n--)
    {
        int b;
        scanf("%d",&b);
        int arr[b];
        for(int i=0;i<b;i++)
        {scanf("%d",&arr[i]);}
        if(b==2)
        {
        for(int j=0;j<b;j++)
        {if(arr[j]==1)
        {c++;}}
        for(int j=0;j<b;j++)
        {if(arr[j]==0)
        {d++;}}}
        if(b>2)
        {printf("NO\n");}
        else if(b==2&&c!=2&&d!=2)
        {printf("YES\n");}
        else{printf("NO\n");}


    }
    return 0;
}