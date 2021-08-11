#include <stdio.h>
#include <stdlib.h>

int sum(int , int);

int main()
{
    int a=5, b=10, sum1;
    sum1 = sum(a,b);

    printf("The sum of two numbers %d and %d is %d",a,b,sum1);

    printf("\n Enter 2 numbers to add");
    scanf("%d%d", &a,&b);

    sum1 = sum(a,b);

    printf("The sum of two numbers %d and %d is %d",a,b,sum1);
    return 0;
}

int sum(int n1, int n2)
{
    return n1+n2;
}
