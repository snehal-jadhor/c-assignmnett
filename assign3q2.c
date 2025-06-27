#include<stdio.h>
int main()
{
    int num1,num2;
    char operator;
    float result;
    printf("Enter first number:");
    scanf("%d",&num1);

    printf("Enter second number:");
    scanf("%d",&num2);

// Accept an oprator from the user
    printf("Enter an operator (+,-,*,/):");
    scanf("%c",&operator);

// Perform the selected operation
switch (operator) {
    case '+':
          result = num1 + num2;
          printf("Result: %.2f\n",result);

          break;

    case '-':
          result = num1 - num2;
          printf("Result: %.2f\n",result);

          break;

    case '*':
        result = num1 * num2;
          printf("Result: %.2f\n",result);

          break;

    case '/':
        if (num2 != 0) {
            result = (float)num1 / num2;
        printf("Result: %.2f\n",result);

    }  else {
        printf("Error: Division by zero is not allowed.\n");
      }  break;

    default:
        printf("Invalid operator! please use +,-,*, or /.\n");

     return 0;
}
