#include<stdio.h>
int main()
{
    float r, area, circ;
    printf("Enter radius: ");
    scanf("%f",&r);
    area = 3.14 * r * r;
    circ = 2 * 3.14 * r;
    printf("Area: %.2f\n", area);
    printf("Circumference: &.2f\n", circ);
    return 0;
}