#include <stdio.h>
#include <stdlib.h>

struct stud
{
    char name[20];
    int rno;
    int marks_tot;
};

int main()
{
   int n;
   struct stud s;
   FILE *fptr;

   if ((fptr = fopen("info.bin","wb")) == NULL)
    {
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
    }
    for(n=0;n<4;n++)
    {
        printf("\nEnter the name of the student");
        scanf(" %[^\n]",s.name);
        printf("\nEnter the roll no of the student");
        scanf("%d",&s.rno);
        printf("\nEnter the total marks of the student");
        scanf("%d",&s.marks_tot);

        fwrite(&s, sizeof(struct stud), 1, fptr);

    }

    fclose(fptr);
    return 0;
}
