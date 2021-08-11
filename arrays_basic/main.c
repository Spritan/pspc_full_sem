#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i, sum=0;
    float perc;
    scanf("%d",&num);
    int marks[num];
    printf("Enter the marks of the students");
    for (i=0;i<num;i++)
    {
        scanf("%d",&marks[i]);
        sum += marks[i];
    }
    perc = sum*100/1000;
    printf("\n the percentage of marks obtained is %f",perc);
    return 0;
}
