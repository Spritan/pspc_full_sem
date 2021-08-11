#include <stdio.h>
#include <stdlib.h>

#define SORTING

int main()
{
    int arr[10] , i, j,temp;
    printf("enter the elements of the array");
    for(i=0;i<10;i++)
        scanf("%d", &arr[i]);

    printf("\nBefore Sorting");
    for(i=0;i<10;i++)
        printf("\t%d", arr[i]);


#ifdef SORTING
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
#endif // SORTING
    printf("\nAfter Sorting");
    for(i=0;i<10;i++)
        printf("\t%d", arr[i]);

    int ele, left=0, right=9, mid, check=-5;
    printf("\n\nEnter the element to be searched");
    scanf("%d", &ele);
    while(right>=left)
    {
        mid = (left+right)/2;

        if(arr[mid]==ele)
        {
            check=mid;
            break;
        }
        else if(arr[mid]>ele)
        {
            right = mid-1;
            continue;
        }
        else
            left = mid+1;

    }

    if(check==-5)
        printf("element %d not found",ele);
    else
        printf("element %d found at location %d",ele, check);

    return 0;
}
