#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=5;
    int *j,**k;
    j=&i;
    k=&j;
    printf("the value stored in variable i is %d",i);
    printf("\nthe address of variable i is %d",&i);
    printf("\nthe value stored in the address of variable i is %d",*(&i));


    printf("\n\n\nthe value stored in variable j is %d",j);
    printf("\nthe address of variable j is %d",&j);
    printf("\nthe value to which the pointer j points to %d",*j);

    printf("\n\n\nthe value stored in variable j is %d",k);
    printf("\nthe address of variable j is %d",&k);
    printf("\nthe value to which the pointer k points to %d",*k);
    printf("\nthe value to which the pointer to pointer k points to %d",**k);

    return 0;

}
