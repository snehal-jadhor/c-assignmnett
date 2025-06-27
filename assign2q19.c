#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);

    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32;
    // Covert to uppercase
       printf("Uppercase: %c\n",ch);
    } else if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    // Convert to lowercase
       printf("Lowercase: %c\n",ch);
    } else {
        printf("Please enter a valid alphabet charecter.\n");
    }
    return 0;
}
