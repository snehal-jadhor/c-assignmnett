#include<stdio.h>
int main()
{
 printf("Enter two number:");
 scanf("%d %d", &num1 , &num2); 
 if (num1 == num2)
 {
    printf("%d is equal to %d\n,num1,num2");
 } else if (num1 > num2) {
    printf("%d is greater than %d\n",num1,num2);
 } else {
    printf("%d is less than %d\n",num1,num2);
 }

    return 0;
}