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

   if ((fptr = fopen("D:\\Google Drive\\AEC 2nd Sem Section D\\programs_lecture\\Binary_FH_writing\\info.bin","rb")) == NULL)
    {
       printf("Error! opening file");


       exit(1);
    }

    for(n = 0; n < 4; n++)
    {
      fread(&s, sizeof(struct stud), 1, fptr);
      printf("\nName: %s\tRoll No.: %d\tTotal_marks: %d", s.name, s.rno, s.marks_tot);
    }
   fclose(fptr);

   return 0;
}
