#include<stdio.h>
int main()
{
    int arr[2][2]={1,2,5,4};
    for(int i=0;i<2;i++)
    {for(int j=0;j<2;j++)
    {arr[j][i]=arr[i][j];
    printf("%d",arr[j][i]);}
    printf("\n");}
    return 0;
}