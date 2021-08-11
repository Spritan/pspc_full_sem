#include <stdio.h>
#include <stdlib.h>

struct stud
{
    char name[20];
    int rno;
    int marks_tot;
};

void grad1(struct stud *ss)
{
    if (ss->marks_tot>90)
        printf("\nGrade of the student is A");
        else if (ss->marks_tot>70)
            printf("\nGrade of the student is B");
            else if (ss->marks_tot>50)
                printf("\nGrade of the student is C");
                else if (ss->marks_tot>33)
                    printf("\nGrade of the student is D");
                else
                    printf("\nGrade of the student is F");
}


int main()
{
    struct stud s1,*s;
    s=&s1;
    printf("Enter details of 1st student");
    scanf(" %[^\n]", s->name);
    scanf("%d%d",&s->rno,&s->marks_tot);

    printf("Details of 1st student\n");
    printf("Name: %s\nRoll No.: %d\nTotal Marks: %d", s->name, s->rno, s->marks_tot);
    grad1(s);

    return 0;
}


