#include<stdio.h>
int main()
{
    int digit;
    printf("Enter a single digit (0-9):");
    scanf("%d",&digit);

    // Check input is a valid single digit
    if (digit < -0 || digit) {
        printf("Invalid input! please enter a single digit (0-9.\n)");
    } else {
         
    // Display digit in words using switch
    } switch(digit) {
             case 0: printf("Zero\n");
      break;
              case 1: printf("One\n");
      break;
              case 2: printf("Two\n");
      break;
              case 3: printf("three\n");
      break;
              case 4: printf("four\n");
      break;
              case 5: printf("Five\n");
      break;
              case 6: printf("Six\n");
      break;
              case 7: printf("Seven\n");
      break;
              case 8: printf("Eight\n");
      break;
              case 9: printf("Nine\n");
      break;
            }

    
    return 0;
}