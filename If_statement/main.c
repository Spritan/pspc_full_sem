#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no;
    printf("enter an integer to check divisibility by 13\t");
    scanf("%d", &no);

    if (no%13==0)
        printf("%d is divisible by 13",no);
    else
        printf("%d is not divisible by 13", no);

    return 0;
}
