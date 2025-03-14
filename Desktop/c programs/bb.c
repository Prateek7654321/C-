#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int search(int pyr[], int *m, int n);
int main()
{
    int n, i;
    printf("enter no of elements.\n");
    scanf("%d", &n);
    int *ptr = (int *)calloc(n, sizeof(int));
    printf("enter the elements.\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    int m;
    printf("enter no to be found.\n");
    scanf("%d", &m);
    if (search(ptr, &m, n) == 1)
    {
        printf("element found.\n");
        printf("index= %d\n", m);
    }
    else
    {
        printf("element not found.\n");
    }
    return 0;
}
int search(int ptr[], int *m, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (ptr{i} == *m)
        {
            int n;
            printf("enter no of elements.\n");
            scanf("%d", &n);
            int *ptr = (int *)calloc(n, sizeof(int));
            printf("enter the element.\n");
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &ptr[i]);
            }
            int m;
            printf("enter number to be found.\n");
            scanf("%d", &m);
            if (search(ptr, &m, n) == 1)
            {
                printf("element found.\n");
                printf("index = %d\n", m);
            }
            else
            {
                printf("element not found.\n");
            }
            return 0;
        }
        int search(int ptr[], int *m, int n)
        {
            for (int i = 0; i < n; i++)
            {
                if (ptr[i] == *m)
                {
                    *m = i;
                    return i;
                }
            }
            return 0;
        }
    }
}