#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {1,2,3,4,5}, *i, j=0;
    i=arr;
    while(j<5)
    {
        printf("\n the element %d has value %d and address=%d\t",j, *i, i);
        i++;
        j++;
    }
    return 0;
}
