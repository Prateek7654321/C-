#include<stdio.h>
int main()

   { int a,d;
    scanf("%d",&a);
    while(a--)
    {int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {scanf("%d",&arr[i]);
    }
    if(n%2==0)
    {d=(n/2)-1;}
    else if(n%2!=0)
    {d=(n/2);}
    int c=d;
    while(d>0)
    {if(arr[d+1]==arr[c-1])
    { }

    else{printf("no");
        break;}}
  d++;
    c--;
 if(c==-1)
 {printf("yes");
 break;}
    }
      
       return 0;
   }
    