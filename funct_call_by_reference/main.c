#include <stdio.h>
#include <stdlib.h>

void swap(int *n1, int *n2)
{
    int temp;

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;

}
int main()
{
    int var1, var2;

    printf("Enter two numbers");
    scanf("%d%d", &var1,&var2);

    printf("Before Swapping: var1=%d and var2=%d ", var1, var2);

    swap(&var1, &var2);

    printf("\nAfter Swapping: var1=%d and var2=%d ", var1, var2);

    return 0;
}
