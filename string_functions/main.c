#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[]="random1", str2[50]="random2";
    char str3[50];
    int len1, len2,cmp1, cmp2;

    /*len1 = strlen(str1);
    printf("\nthe length of %s is %d", str1,len1);

    len2 = strlen("Assam");
    printf("\nthe length of Assam is %d", len2);

    strcpy(str3, str2);
    printf("\nthe string stored in var str3 is %s", str3);

    strcat(str2, str1);
    printf("\nthe string stored in var str2 is %s", str2);*/

    cmp1 = strcmp(str1, "random1");
    printf("\n%d", cmp1);

    cmp2 = strcmp(str2, str1);
    printf("\n%d", cmp2);

    return 0;
}
