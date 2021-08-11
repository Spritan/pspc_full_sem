#include <stdio.h>
#include <stdlib.h>

void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void rev_arr(int a[],int len)
{
    int i;
    for (i=0;i<len/2;i++)
        swap(&a[i], &a[len-1-i]);
}
int main()
{
    int arr[10], i;

    printf("Enter the elements of the array");
    for (i=0;i<10;i++)
        scanf("%d", &arr[i]);

    printf("Original Array\n");
    for (i=0;i<10;i++)
        printf("\t%d", arr[i]);

    rev_arr(arr,10);

    printf("\nArray after Reversal\n");
    for (i=0;i<10;i++)
        printf("\t%d", arr[i]);

    return 0;
}
