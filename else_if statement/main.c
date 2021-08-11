#include <stdio.h>
#include <stdlib.h>

int main()
{   int m1, m2, m3, m4, m5, perc;
    printf("Enter the marks of the student for 5 subjects out of 100 each\n");
    scanf("%d%d%d%d%d",&m1, &m2, &m3, &m4, &m5);
    perc = (m1+m2+m3+m4+m5)*100/500;
    printf("\nthe percentage of the student is %d", perc);

    if (perc>90)
        printf("\nGrade of the student is A");
        else if (perc>70)
            printf("\nGrade of the student is B");
            else if (perc>50)
                printf("\nGrade of the student is C");
                else if (perc>33)
                    printf("\nGrade of the student is D");
                else
                    printf("\nGrade of the student is F");

    return 0;
}
