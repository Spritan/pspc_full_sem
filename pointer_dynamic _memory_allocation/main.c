#include <stdio.h>
#include <stdlib.h>

void arange(int *ptr1, int num)
{
    int i,j, temp;
    for (i=0;i<num;i++)
    {
        temp = *(ptr1+i);
        j=i-1;
        while(j>=0 && *(ptr1+j)>temp)
        {
            *(ptr1+j+1)=*(ptr1+j);
            j--;
        }
        *(ptr1+j+1) = temp;
    }
}
int main()
{
    int *ptr, no, i;
    printf("Enter the number of elements to be stored");
    scanf("%d",&no);
    ptr = (int *)malloc(no*sizeof(int));
    printf("\n Enter %d elements to be stored in the array ",no);

    for (i=0; i<no;i++)
    {
        scanf("%d", ptr+i);
    }

    printf("\n The Elements and their addresses BEFORE sorting are");

    for (i=0; i<no;i++)
    {
        printf("\nAddress of element %d = %d and its value = %d",i, ptr+i,*(ptr+i));
    }

    arange(ptr, no);

    printf("\n The Elements and their addresses AFTER sorting are ");

    for (i=0; i<no;i++)
    {
        printf("\nAddress of element %d = %d and its value = %d",i, ptr+i,*(ptr+i));
    }

    free(ptr);

    return 0;
}
