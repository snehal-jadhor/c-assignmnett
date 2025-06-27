#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three numbers:");
    scanf("%f %f %f",&a,&b,&c);

    if ((b < a && a < c) || (c < a && a < b))
    {
      printf("%.2f is between %.2f and %.2f\n",a,b,c);
    } else {
      printf("%.2f is not between %.2f and %.2f\n",a,b,c);
    }
    return 0;
}