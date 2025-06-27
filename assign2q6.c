#include<stdio.h>
int main()
{
    int number;

    // Accept number from user
    printf("Enter a number");
    scanf("%d",number);

    // Check divisibility using logical OR (||)
    if (number % 5 == 0 || number % 7 == 0) {
        printf("The number %d is divisible by 5 or 7.\n");
    } else {
        printf("The number %d is not divisible by 5 or 7.\n",number);
    }
    return 0;
}