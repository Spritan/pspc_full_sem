#include <stdio.h>
#include <stdlib.h>

int main()
{
    int (*arr)[4],i,j;
    *(*arr) = 5;
    printf("the address of arr %d",arr);
    printf("the address of arr+1 %d",*arr);
    printf("the address of arr+2 %d",&arr);

    return 0;
}
