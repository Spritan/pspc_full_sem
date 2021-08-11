#include <stdio.h>
#include <stdlib.h>

int fact(int num)
{
    static int prod = 1;
    if(num!=1)
        prod = num*fact(num-1);
    else
        return 1;
    return prod;
}
int main()
{
    int n1, factorial;

    printf("Enter the number whose factorial is to be calculated");
    scanf("%d", &n1);

    factorial = fact(n1);

    printf("The factorial of %d is %d", n1,factorial);
    return 0;
}
