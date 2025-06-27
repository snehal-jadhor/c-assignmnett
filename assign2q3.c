#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer");
    scanf("%d",&num);

    // Using if statment
    if(num%2==0)
      printf("Using if : The number is even.\n");
      else
      printf("Using if : The number is odd.\n");

      // Using conditional oprator
      (num % 2 == 0) ? printf("Using "?: The number is even.\n") : printf("Using ?: The number is odd.\n");
        

    return 0;
}