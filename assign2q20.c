#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);

    if (ch >= 48 && ch <=57) {
        printf("The character is a Digit.\n");
    } else if (ch >=65 && ch <=90) {
        printf("The character is an uppercase Alphabet.\n");
    } else {
        printf("The character is not a digit or an English alphabet.\n");
    }
    return 0;
}