#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, c;
    ptr = (int*)malloc(sizeof(int));
    printf("Enter element: ");
    scanf("%d", ptr);

    for (int i = 1; i >=0; i++)
    {
        int x;
        printf("Enter your choice\n");
        scanf("%d", &x);
        if (x == 0)
        {
            break;
        }
        else
        {
            ptr = (int*)realloc(ptr, i+1);
        }
        printf("Enter element: ");
        scanf("%d", &ptr[i ]);
        c++;
    }

    for (int i = 0; i <= c; ++i)
    {

        

        for ( int j = i + 1; j <= c; ++j)
        {

            if (ptr[i] > ptr[j])
            {

                int a = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = a;
            }
        }
    }

    for (int i = 0; i <= c; i++)
    {
        printf("%d ", ptr[i]);
        }
}