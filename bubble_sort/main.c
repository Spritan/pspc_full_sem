#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[10] , i, j,temp;
    printf("enter the elements of the array");
    for(i=0;i<10;i++)
        scanf("%d", &arr[i]);

    printf("\nBefore Sorting");
    for(i=0;i<10;i++)
        printf("\t%d", arr[i]);

    for(i=0;i<9;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nAfter Sorting");
    for(i=0;i<10;i++)
        printf("\t%d", arr[i]);
    return 0;
}
