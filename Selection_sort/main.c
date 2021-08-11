#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10] , i, j,temp,index;
    printf("enter the elements of the array");
    for(i=0;i<10;i++)
        scanf("%d", &arr[i]);

    printf("\nBefore Sorting");
    for(i=0;i<10;i++)
        printf("\t%d", arr[i]);

    for(i=0;i<10-1;i++)
    {
        index = i;
        for (j=i;j<10;j++)
        {
            if(arr[index]>arr[j])
                index=j;
        }
        temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }

    printf("\nAfter Sorting");
    for(i=0;i<10;i++)
        printf("\t%d", arr[i]);
    return 0;
}
