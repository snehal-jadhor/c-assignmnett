#include<stdio.h>
int main()
{
float fahrenheit,celsius,kelvin;
printf("Enter temperature in fahrenheit ;");
scanf("%f",&fahrenheit);
celsius = (5.0/9.0) * (fahrenheit-32);
kelvin = celsius + 273.15;
printf("Temperaturen in Celsius: %.2f\n",celsius);
printf("Temperaturen in Kelvin: %.2f\n",Kelvin);
return 0;
}