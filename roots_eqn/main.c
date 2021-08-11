#include <stdio.h>
#include <stdlib.h>
/*#include <math.h>*/

int main()
{
    float a,b,c, real, imag, D, r1,r2;
    printf("Enter the coefficients of the quadratic eqn(a,b,c)");
    scanf("%f%f%f",&a,&b,&c);

    D = b*b - 4*a*c;
    if (D>=0)
    {
        r1 = (-b + sqrt(D))/(2*a);
        r2 = (-b - sqrt(D))/(2*a);

        printf("The roots of the given eqn:%.1fx^2 + %.1fx + %.1f are: %.2f and %.2f", a,b,c,r1,r2);
    }
    else
    {
        real = (-b)/(2*a);
        imag = sqrt(-D)/(2*a);
        printf("The roots of the given eqn:%.2fx^2 + %.2fx + %.2f are: %.2f + j%.2f and %.2f - j%.2f", a,b,c,real,imag,real,imag);
    }
    return 0;
}
