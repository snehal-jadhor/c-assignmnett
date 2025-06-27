#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
     
    // Using '&&' operator
    if (num % 5 == 0 &&  num % 7 == 0)
    printf("Using nested if: The number is divisible by both 5 and 7.\n");
    else
     printf("Using nested if: The number is not divisible by both 5 and 7.\n");
     
    return 0;
}