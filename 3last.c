#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[1000];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int n1;
    scanf("%d",&n1);
    int index = -1;
    for (i = 0; i < n; i++)
    {
        if (a[i] == n1)
        {
            index = i;
        }
    }
    for (i = index; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    if (index == -1)
        printf("Not found\n");
    else
    {
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}