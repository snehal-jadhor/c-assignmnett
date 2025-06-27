#include<stdio.h>
int main()
{
  int hours,minute,second;
  printf("Enter time (hour minute second):");
  scanf("%d %d %d", &hour, &minute, &second);
   if (hour >=0 && hour < 24 && minute >=0 && minute < 60 && >= 0 && second < 60)
   {
    printf("Time is valid.\n");
   } else {
    printf("Time is invalid.\n");
   }
    return 0;
}