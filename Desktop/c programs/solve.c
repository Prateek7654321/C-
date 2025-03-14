#include<stdio.h>
#include<math.h>
int main()
{
 int token,n,a,b,c,d;
    printf("enter token no");
    scanf("%d",&token);
    d=token;
    c=0;
    a=token%10;
    while(token>0)
    {
        
        n=token/10;
        b=n%10;
        c+=pow(b,3);
        token=n;
        
    }
    c=c+pow(a,3);
    if(d==c)
    {
        printf("your token is valid");
    }
    else
    {
        printf("cant be free");
    }
    printf("value is %d",c);
    return 0;
}


    










