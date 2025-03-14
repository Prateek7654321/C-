#include<stdio.h>
void inc(int x,int n)
{
    if (x==0)
    {return ;}
    if(x>n)
    {return ;}
    printf("%d ",x);
    inc(x+1,n);
}
int main()
{int n;
printf("enter no");
scanf("%d",&n);
inc(1,n);
}