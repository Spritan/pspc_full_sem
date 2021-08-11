#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3], b[3][3], c[3][3], i, j, k;
    printf("Enter the numbers for first matrix\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("Enter nos. for row%d and column%d   ",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the numbers for second matrix\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("Enter nos. for row%d and column%d   ",i+1,j+1);
            scanf("%d", &b[i][j]);
        }
    }

    printf("The First matrix is\n");

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {

            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }

    printf("The Second matrix is\n");

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {

            printf("%d\t",b[i][j]);

        }
        printf("\n");
    }



    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            c[i][j] = 0;
            for (k=0;k<3;k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }

        }

    }

    printf("The result of multiplication of the two matrices is\n");



    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {

            printf("%d\t",c[i][j]);

        }
        printf("\n");
    }

    return 0;
}
