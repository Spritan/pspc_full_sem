#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,i,check=0;
    printf("Enter the number to check for it being Prime\n");
    scanf("%d",&no);
    for(i=2;i<=no/2;i++)
    {
        if(no%i==0)
        {
            check++;
            break;
        }


    }
    if (check==0)
        printf("the number %d is a prime number",no);
    else
        printf("the number %d is not a prime number",no);

    printf("\nThe no. of times if condition was satisfied %d",check);
    return 0;
}
