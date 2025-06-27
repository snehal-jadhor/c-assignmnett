#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the three sides of the triangle");
    scanf("%f %f %f",&a,&b,&c);

    // Check triangle validity
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }
    return 0;
}
