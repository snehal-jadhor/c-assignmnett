#include<stdio.h>
int main()
{
    float lenght,breadth,height;
    float surfacearea, volume;

    // Input dimension
    printf("Enter length of the cuboid");
    scanf("%f",&lenght);

    printf("Enter breadth of the cuboid");
    scanf("%f",&breadth);

    printf("Enter height of the cuboid");
    scanf("%f",&height);

    //Calculations
    surfacearea = 2 * (lenght * breadth + lenght * height + breadth * height);
         volume = lenght * breadth * height;

    //Output results
    printf("Surface Area of the cuboid:%.2f\n",surfacearea);
    printf("volume of the cuboid: %.2f\n",volume);



    return 0;
}