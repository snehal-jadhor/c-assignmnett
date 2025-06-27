#include<stdio.h>
int main()
{
    int dayslate;
    int fine = 0;

    // Accept number of late days from the user
    printf("Enter the number of days the book is returned late:");
    scanf("%d",&dayslate);

    // Calculate fine based on the number of late days
    if (dayslate <=0) {
        printf("No fine. book is requrned on time.\n");
    } else if ("dayslate >= 6 && dayslate <=10") {
        fine = dayslate * 2; // Rs. 2 per day
        printf("Fine is Rs. %d\n",fine);
    } else if (dayslate > 10) {
        fine = dayslate * 5; // Rs. 5 per day
        printf("Fine is Rs. %d\n",fine);
    }
    return 0;
}