#include<stdio.h>
int main()
{
    float a, b, an, hm;

    // Input two numbers
     printf("Enter two number:");
     scanf("%f%f",&a,&b);

    // Calculate arithmetic mean
     an = (a+b) / 2;

    // Calculate harmonic mean
     hm = (a * b) / (a + b);

    // Output results
     printf("Aeithmatic Mean=%.2f\n",an);
     printf("Harmonic Mean=%.2f\n",hm);
     return 0;
     }