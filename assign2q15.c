#include<stdio.h>
int main()
{
    float salary,tax;
    printf("Enter the annual basic salary:");
    scanf("%f",&salary);

    // Calculate tax basedon salary slabs
    if (salary < 150000)
    {
        tax = 0;
    } else if (salary <= 300000)
    {
        tax = 0.20 * salary;
    } else {
        tax = 0.030 * salary;
    }

    // Display the tax
    printf("The calculated income tax is:%.2f\n",tax);
    return 0;
}