#include<stdio.h>
int main()
{
    // Variable for item 1
    char pname1[20];
    float price1,total,discount;
    int qty1;

    // Variable for item 2
    char pname2[20];
    float price2,total,discount;
    int qty2;

    // Variable for iteam 3
    char pname3[20];
    float price3,total,discount;
    int qty3;

    // Inpur for iteam 1
    printf("Enter product 1 name:");
    scanf("%s",&pname1);
    printf("Enter price1");
    scanf("%f",&price1);
    printf("Enter qty1");
    scanf("%d",&qty1);

    // Input for item 2
    printf("Enter product 2 name:");
    scanf("%s",&pname2);
    printf("Enter price2");
    scanf("%f",&price2);
    printf("Enter qty2");
    scanf("%d",&qty2);

    // Input for item 3
    printf("Enter product 3 name:");
    scanf("%s",&pname3);
    printf("Enter price3");
    scanf("%f",&price3);
    printf("Enter qty3");
    scanf("%d",&qty3);

    // Calculate total amount
    printf("Enter the total amount:");
    scanf("%f",&total);
       total = ((price1 * qty1) + (price2 * qty2) + (price3 * qty3));

       // Apply discount based on total amount
       if (total > 5000)
       {
           discount = (0.20 * total);

       } else if (total >= 3000 && total <= 5000) {
           discount = (0.15 * total);

       } else if (total >= 1000 && total < 3000) {
           discount = (0.08 * total);

       } else {
           discount = 0;
       }

       // Display the final bill
       printf("\nTotal Amount: %.2f\n",total);
       printf("Discount: %.2f\n",discount);
       printf("Final Amount to pay: %.2f\n",total - discount);

          return 0;
}