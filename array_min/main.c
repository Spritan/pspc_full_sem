#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[5],i, max=-36768;

    printf("Enter 10 numbers");
    for (i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
        if (max<x[i])
            max=x[i];
    }

    printf("\n the maximum number is %d",max);
    return 0;
}
