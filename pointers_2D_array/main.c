#include <stdio.h>
#include <stdlib.h>

int main()
{
    int (*arr)[4],i,j;
    printf("Enter the elements of the matrix\n");
    for(i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("Enter the element in row%d and column%d",i,j);
            scanf("%d",(*(arr+i)+j));
        }
    }

    printf("\nthe matrix is as follows");
    for(i=0;i<3;i++)
    {
        printf("\n%d %d\n",*(arr+i),arr+i);
        for (j=0;j<4;j++)
        {

            printf("%d\t",*(*(arr+i)+j));
        }
    }

    printf("\nthe address of elements of the matrix are as follows");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for (j=0;j<4;j++)
        {

            printf("%d\t",(*(arr+i)+j));
        }
    }

    return 0;
}
