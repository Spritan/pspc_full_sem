#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=55,*ii;
    float f=5.55,*ff;
    char c='g',*cc;

    ii=&i;
    ff=&f;
    cc=&c;

    printf("\nthe value to which the pointer ii points to %d",*ii);
    printf("\nthe value to which the pointer ff points to %f",*ff);
    printf("\nthe value to which the pointer cc points to %c",*cc);

    printf("\nthe address contained in ii=%d and ii+1=%d",ii, ii+1);
    printf("\nthe address contained in ff=%d and ff+5=%d",ff, ff+5);
    printf("\nthe address contained in cc=%d and cc-1=%d",cc, cc-1);


    return 0;
}
