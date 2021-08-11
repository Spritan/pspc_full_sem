/*
Algorithm for Displaying the area of rectangle
1. take input of length and breadth
2. area = l*b
3. Print the Area
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l,b, area;
    printf("Enter the length and breadth of the rectangle");
    scanf("%f%f", &l,&b);
    area=l*b;
    printf("The area of the given rectangle is %f",area);

    return 0;

}
