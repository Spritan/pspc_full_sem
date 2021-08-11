#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no, check;
    char prop;
    printf("enter a number");
    scanf("%d",&no);
    prop = no%2!=0?'O':'E';
    check = no%2==0;
    printf("the no is %c\tthe value of check %d",prop,check);
    getch();
    return 0;

}
