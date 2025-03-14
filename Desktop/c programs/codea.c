#include<stdio.h>
int main()
{int n;
scanf("%d",&n);
while(n--)
{
   int a;
   scanf("%d",&a);
   for(int i=2;i<=a;i++)
   {
    int d=a+i;
    for(int j=2;j<d;j++)
    {if(d%j==0)
    {printf("%d",i);}
        break;}}
   }
return 0;
}

