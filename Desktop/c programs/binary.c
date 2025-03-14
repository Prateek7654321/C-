#include<stdio.h>
#include<math.h>

int main()
{int a,b,i,sum=0;
float d;
printf("enter two no to find range");
scanf("%d %d",&a,&b);
for (i=a;i<=b;i++)
{ 
     d=sqrt(i);
    if(d*d==i)
     {
        sum=sum+i;
        }
}
printf("%d",sum);
return 0;
}

