#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void isprime(int ptr[], int n);
int main()
{
    int *ptr = (int *)malloc(1 * sizeof(int));
    printf("enter the number. \n");
    int n, m = 1;
    scanf("%d", &n);
    ptr[0] = n;
    printf("enter 1 if you want to enter more numbers else enter 0.\n");
    for (int i = 1;; i++)
    {
        int j;
        scanf("%d", &j);
        if (j == 1)
        {
            ptr = realloc(ptr, (m + 1) * sizeof(int));
            int o;
            scanf("%d", &o);
            ptr[m] = o;
            m++;
        }
        else
        {
            break;
        }
    }
    isprime(ptr, m);
    return 0;
}
void isprime(int ptr[], int n)
{
    int t;
    printf("prime numbers: ");
    for (int i = 0; i < n; i++)
    {
        t = 1;
        for (int j = 2; j < ptr[i]; j++)
        {
            if (ptr[i] % j == 0)
            {
                t = 0;
                break;
            }
        }
        if (t == 1)
        {
            printf("%d ", ptr[i]);
        }
        printf("\n");
            
    }
       
}
