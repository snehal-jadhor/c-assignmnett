#include<stdalign.h>
int main()
{
    int emp_id;
    float basic,hra,da,tax,take_home;

    printf("Enter employee ID and basic salar:");
    scanf("%d%f",&emp_id,&basic);

    if(basic>0){ 
        hra = 0.10*basic;
        da = 0.30*basic;
        tax = 0.05*basic;
        take_home = basic+hra+da-tax;
        printf("take_home salary for employee %d = %.2f\n",emp_id,take_home);
    } else {
        printf("Invalid basic salary.\n");
    
        return 0;
    }