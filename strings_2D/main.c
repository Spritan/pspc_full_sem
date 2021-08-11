#include <stdio.h>
#include <stdlib.h>

int main()
{
    char names[20][100];
    int i,a;
    printf("enter the no of names to be stored(<20)");
    scanf("%d",&a);

    for (i=0;i<a;i++)
    {
        printf("\nenter a name");
        scanf(" %[^\n]", names[i]);
    }
    printf("the names are\t");
    for (i=0;i<a;i++)
    {
        printf("%s\t", names[i]);

    }

    return 0;
}
