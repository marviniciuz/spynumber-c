#include <stdio.h>

int main()
{
   int n,sum,prod;
   int d;

   sum = 0;
   prod = 1;

    printf("Enter the number:\n");
    scanf("%d",&n);

    while (n > 0){
        d= n%10;
        sum = sum + d;
        prod = sum + d;
        prod = prod * d;
        n = n/10;
    }

    if(sum==prod){
        printf("given number is spy number");
    }
    else
        printf("given number is not spy number");

    return 0;
}


