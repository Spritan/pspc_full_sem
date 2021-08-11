#include <stdio.h>
#include <stdlib.h>

int min_bet_2_num(int prev_min, int pres_num)
{
    if (prev_min>pres_num)
        prev_min = pres_num;
    return prev_min;
}
int main()
{
    int x[5],i, min=36767;

    printf("Enter 5 numbers");
    for (i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
        min = min_bet_2_num(min, x[i]);
    }

    printf("\n the minimum number is %d",min);
    return 0;

}
