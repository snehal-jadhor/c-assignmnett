#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,dist;
    printf("Enter x1 y1 x2 y2:");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);

    dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
     
    printf("Distance=%.2f\n",dist);
    return 0;
}