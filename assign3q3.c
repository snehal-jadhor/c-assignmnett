#include<stdio.h>
int main()
{
    int x,y,choice,num,quotient,remainder,temp;
    printf("Enter two numbers (x and y):");
    scanf("%d %d",&x,&y); 

// Display the meanu operator
    printf("\nSelect an operator:\n");
    printf("1: Equality - Check if x is equal to y\n");
    printf("2: less than - check if x is less than y\n");
    printf("3: Quotient and Remaider - Divide x by y\n");
    printf("4: Range - Check if a number lies between x and y (inclusive)\n");
    printf("5: Swap - Interchange x and y\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        if (x == y)
           printf("x is equal to y.\n");
        else
           printf("x is not equal to y.\n");
        break;
    
    case 2:
        if (x < y)
           printf("x is less than y.\n");
        else
           printf("x is not less than y.\n");
        break;

    case 3:
        if (y != 0) {
            quotient = x/y;
            remainder = x%y;
            printf("quotient: %d\n",quotient);
            printf("Reminder: %d\n",remainder);
    }   else {
            printf("Error: Division by zero is not allowed.\n");
    }
            break;
    
    case 4:
            printf("Enter the number to check:");
            scanf("%d",&num);
        if ((num >= x && num <= y) || (num >= y && num <= x))
            printf("The number %d lies between %d (inclusive).\n",num,x,y);
            break;

    case 5:
    // Swapping x and y
            temp = x;
            x = y;
            y = temp;
            printf("After swapping: x = %d. y = %d\n",x,y);
            break;

            default:
            printf("Invalid choice! please select a valid option.\n");
    return 0;
}