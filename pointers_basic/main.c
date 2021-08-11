#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=5;
    int *j;
    j=&i;

    printf("the value stored in variable i is %d",i);
    printf("\nthe address of variable i is %d",&i);
    printf("\nthe value stored in the address of variable i is %d",*(&i));


    printf("\nthe value stored in variable j is %d",j);
    printf("\nthe address of variable j is %d",&j);
    printf("\nthe value to which the pointer points to %d",*j);

    return 0;
}
