#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1, no2, result;
    printf("enter 2 nos.");
    scanf("%d%d", &no1, &no2);
    /*result = no1%no2;
    printf("%d", result);
    */
    /*
    printf("\nresult of no1++ %d",no1++);
    printf("\nvalue stored in no1 after no1 ++%d", no1);

    printf("\nresult of ++no2 %d",++no2);
    printf("\nvalue stored in no2 after ++no2 %d", no2);
    */
    no2+=18;
    printf("\nvalue stored in no2 after no2+=18 operation %d", no2);

    no2/=4;
    printf("\nvalue stored in no2 after no2/=4 operation %d", no2);


    return 0;
}
