#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3], b[3][3], c[3][3], row, col;

    printf("Enter the numbers for first matrix\n");

    for (row=0;row<3;row++)
    {
        for (col=0;col<3;col++)
        {
            printf("Enter nos. for row%d and column%d   ",row,col);
            scanf("%d", &a[row][col]);
        }
    }

    printf("Enter the numbers for second matrix\n");
    for (row=0;row<3;row++)
    {
        for (col=0;col<3;col++)
        {
            printf("Enter nos. for row%d and column%d   ", row, col);
            scanf("%d", &b[row][col]);
        }
    }

    printf("The First matrix is\n");

    for (row=0;row<3;row++)
    {
        for (col=0;col<3;col++)
        {

            printf("%d\t",a[row][col]);

        }
        printf("\n");
    }

    printf("The Second matrix is\n");

    for (row=0;row<3;row++)
    {
        for (col=0;col<3;col++)
        {

            printf("%d\t",b[row][col]);

        }
        printf("\n");
    }

    printf("The sum of the two matrices is\n");

    for (row=0;row<3;row++)
    {
        for (col=0;col<3;col++)
        {
            c[row][col] = a[row][col] + b[row][col];
            printf("%d\t",c[row][col]);

        }
        printf("\n");
    }
    return 0;
}
