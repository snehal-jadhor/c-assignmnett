#include<stdio.h>
int main()
{
    char ch;
    printf("Enter enything");
    scanf("%c",&ch);
    if ((ch>=65 && ch <=90) || (ch >= 98 && ch <= 122))
        printf("Alphabat");
    else if (ch >= 48 && ch <= 57)
        printf("Digit");
    else
    printf("Special Symbol");

    return 0;
}














