#include<stdint.h>
int main()
{
double u,a,t,v,s;
printf("Enter inital velocity(u)");
printf("%lf",&u);
printf("Enter acceleration(a):");
scanf("%lf",&a);
printf("Enter time(t):");
scanf("%lf",&t);
v = u + a * t;
s = u * t + 0.5 * a * t * t;
printf("\nFinal velocity(v):%.2f\n",v);
printf("Distance traveled(s):%.2f\n",s);
return 0;
}

