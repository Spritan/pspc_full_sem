#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1, no2, opt, result;

    printf("Enter the two Numbers");
    scanf("%d%d", &no1,&no2);

    printf("\n\t\t\tCALCULATOR MENU");
    printf("\n\t\t\t 1. Addition");
    printf("\n\t\t\t 2. Subtraction");
    printf("\n\t\t\t 3. Multiplication");
    printf("\n\t\t\t 4. Division");
    printf("\n\t\t\t 5. Modulus");
    printf("\n\t\tEnter the number corresponding to the operation to be carried out");

    scanf("%d", &opt);

    switch (opt)
    {
        case 1:
            result = no1 + no2;
            printf("\n\t\tthe result of the addition between %d and %d is %d", no1, no2, result);
            break;
        case 2:
            result = no1 - no2;
            printf("\n\t\tthe result of the subtraction between %d and %d is %d", no1, no2, result);
            break;
        case 3:
            result = no1 * no2;
            printf("\n\t\tthe result of the multiplication between %d and %d is %d", no1, no2, result);
            break;
        case 4:
            result = no1 / no2;
            printf("the result of the division between %d and %d is %d", no1, no2, result);
            break;
        case 5:
            result = no1 % no2;
            printf("\n\t\tthe result of the modulus operation between %d and %d is %d", no1, no2, result);
            break;
        default:
            printf("\n\t\tIncorrect option entered");
    }
    return 0;
}
