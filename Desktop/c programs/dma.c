#include<stdio.h>
#include<stdlib.h>
int main()
{
int ptr=(int*)malloc(1*sizeof(int));
 scanf("%d",&ptr);
int d=2;
while(d>0)
{  int a;
 scanf("%d",&a);
     for(int i=1; ;i++)
   {
    if(a==1)
    {
        ptr=(int*)realloc(ptr,1*sizeof(int));
        scanf("%d",ptr[i]);
        else
    {break;}
    }
   }  }

}