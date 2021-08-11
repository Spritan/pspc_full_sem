#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10] , i, ele, check=0;

    printf("enter the elements of the array");
    for(i=0;i<10;i++)
        scanf("%d", &arr[i]);

    printf("Enter the element to be searched");
    scanf("%d", &ele);

    for(i=0;i<10;i++)
    {
        if (ele==arr[i])
        {
            check++;
        }
    }

    if (check==0)
        printf("\nElement not found");
    else
        printf("\nElement found  %d no of times",check);
    return 0;
}
