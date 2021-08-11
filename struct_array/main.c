#include <stdio.h>
#include <stdlib.h>

struct book
{
    char book_name[20];
    char publisher[20];
    char author[20];
    int sno;
};
int main()
{
    struct book b1[3];
    int i;
    for (i=0;i<3;i++)
    {
        printf("\nEnter details of book %d:", i+1);
        printf("\n Book Name:");
        scanf(" %[^\n]", b1[i].book_name);
        printf("\n Publisher:");
        scanf(" %[^\n]", b1[i].publisher);
        printf("\n Author:");
        scanf(" %[^\n]", b1[i].author);
        printf("\n serial no:");
        scanf(" %d", &b1[i].sno);
    }
    printf("\nBooks Available In The Library Are");

    for (i=0;i<3;i++)
    {

        printf("\n\nBook %d:", i+1);
        printf("\n Book Name: %s" ,b1[i].book_name);
        printf("\n Publisher: %s", b1[i].publisher);
        printf("\n Author: %s", b1[i].author);
        printf("\n serial no: %d", b1[i].sno);

    }
    return 0;
}
