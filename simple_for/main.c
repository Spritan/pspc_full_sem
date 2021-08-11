#include <stdio.h>
#include <stdlib.h>

int main()
{   int i;


    for(i=1;i<=100;i++)
    {
        if (i==58)
        {
            printf("\nthe number 58 has been reached\n");
            continue;
        }

        if (i%2==0)
           printf("%d ",i);

    }
    return 0;
}
