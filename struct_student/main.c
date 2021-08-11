#include <stdio.h>
#include <stdlib.h>

struct stud
{
    char name[20];
    int rno;
    int marks_tot;
};

void grad1(struct stud s)
{
    if (s.marks_tot>90)
        printf("\nGrade of the student is A");
        else if (s.marks_tot>70)
            printf("\nGrade of the student is B");
            else if (s.marks_tot>50)
                printf("\nGrade of the student is C");
                else if (s.marks_tot>33)
                    printf("\nGrade of the student is D");
                else
                    printf("\nGrade of the student is F");
}

char grad2(int marks)
{
    if (marks>90)
        return 'A';
        else if (marks>70)
            return 'B';
            else if (marks>50)
                return 'C';
                else if (marks>33)
                    return 'D';
                else
                    return 'F';
}
int main()
{
    struct stud s1,s2;
    printf("Enter details of 1st student");
    scanf(" %[^\n]", s1.name);
    scanf("%d%d",&s1.rno,&s1.marks_tot);



    printf("Enter details of 2nd student");
    scanf(" %[^\n]", s2.name);
    scanf("%d%d",&s2.rno,&s2.marks_tot);

    printf("Details of 1st student\n");
    printf("Name: %s\nRoll No.: %d\nTotal Marks: %d", s1.name, s1.rno, s1.marks_tot);
    grad1(s1);

    printf("Details of 2nd student\n");
    printf("Name: %s\nRoll No.: %d\nTotal Marks: %d", s2.name, s2.rno, s2.marks_tot);
    printf("\nGrade of the student is %c",grad2(s2.marks_tot));

    return 0;
}
