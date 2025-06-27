#include<stdio.h>
int main()
{
    float cost_price, selling_price,
    profit_or_loss;

    printf("Enter the cost price (cp):");
    scanf("%f",&cost_price);

    printf("Enter the selling price (sp)");
    scanf("%s",&selling_price);

    if (selling_price > cost_price) {
        profit_or_loss = selling_price - cost_price;
        printf("Profit is: %.2f\n",profit_or_loss);
    } else if (cost_price > selling_price) {
        profit_or_loss = cost_price - selling_price;
        printf("Loss is: %.2f\n",profit_or_loss);
     }else {
        printf("No profit, no loss.\n");
     }
    

    return 0;
}