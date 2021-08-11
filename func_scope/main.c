#include <stdio.h>
#include <stdlib.h>

int rand1=8;

int factorial(int no)
{
    int i, mult=1;

    for(i=no; i>0;i--)
        mult*=i;

    rand1++;
    printf("the value of global variable in function is %d\n", rand1);
    return mult;
}

int main()
{
    int n1,n2,n3, fact1, fact2, fact3;
    printf("Enter the first number");
    scanf("%d", &n1);
    fact1 = factorial(n1);
    printf("the factorial of %d is %d\n", n1, fact1);

    printf("Enter the second number");
    scanf("%d", &n2);
    fact2 = factorial(n2);
    printf("the factorial of %d is %d\n", n2, fact2);

    printf("Enter the third number");
    scanf("%d", &n3);
    fact3 = factorial(n3);
    printf("the factorial of %d is %d\n", n3, fact3);


    printf("the value of global variable in main is %d", ++rand1);
    return 0;
}
