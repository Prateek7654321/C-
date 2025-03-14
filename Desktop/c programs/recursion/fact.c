#include<stdio.h>
int fact(int n)
{if(n==1)
{return 1;}
int f=n*fact(n-1);
return f;}
 int main()
{int n;
printf("enter number");
scanf("%d",&n);
int s=fact(n);
printf("factorial of n is %d",s);
return 0;
}