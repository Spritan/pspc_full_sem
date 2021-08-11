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

    for (i=1;i<10;i++)
    {
        temp = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    printf("\nAfter Sorting");
    for(i=0;i<10;i++)
        printf("\t%d", arr[i]);
    return 0;
}
