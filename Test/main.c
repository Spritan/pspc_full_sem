#include<stdio.h>
#include<stdlib.h>

int main(){
    //Fibonacci series

    int n,a=0,b=1,c;

    printf("Enter number:");
    scanf("%d",&n);

    for (int i=0;i<=n;i++){
        printf("%d    ",a);
        c=a+b;
        a=b;
        b=c;
    }

    return 0;
}
