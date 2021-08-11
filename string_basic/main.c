#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[100] = "Jobin Mathew";
    int i=0;
    /*printf("Printing the name using while statement ");
    while(name[i]!='\0')
    {
        printf("%c",name[i]);
        i++;
    }

    printf("\n Printing using printf function %s", name);

    printf("\nEnter your name");
    scanf("%s", name);
    printf("\nthe string stored in variable is %s", name);

    printf("\nEnter your name again");
    gets( name);
    printf("\nthe string stored in variable is %s", name);*/

    printf("\nEnter your name again");
    scanf("%[^\n]", name);
    printf("\nthe string stored in variable is %s", name);

    return 0;
}
