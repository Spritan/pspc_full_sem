#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

#define AREA(x) PI*x*x

int main()
{
    int r;

    printf("Enter the radius of the circle");
    scanf("%d", &r);

    printf("\nThe are of the circle with radius %d is %f", r, AREA(r));
    return 0;
}
