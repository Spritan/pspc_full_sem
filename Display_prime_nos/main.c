#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lim, check,i,j;
    printf("Enter the max no below which all prime nos are to be printed");
    scanf("%d", &lim);

    printf("\nAll the Prime Numbers below %d are:",lim);
    for (i=2;i<=lim;i++)
    {
        check=0;
        for (j=2;j<=i/2;j++)
        {
            if (i%j==0)
            {
                check=1;
                break;
            }
        }
    if(check==0)
        printf("%d\t",i);
    }
    return 0;
}



1   1   2   3   5   8   13
