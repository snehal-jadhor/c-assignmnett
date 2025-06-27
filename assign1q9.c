#include<stdio.h>
int main()
{
    int a,t,f;
    printf("Amount:");
    scanf("%d",&a);
    t = a/10;
    f = (a % 10) / 5;
    printf("10s=%d 5s=%d 1s=%d\n",t,f,a%5);
    return 0;
}