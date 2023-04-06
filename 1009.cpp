#include<stdio.h>
int main()

{

double a,b;
char na;
scanf("%s",&na);
scanf("%lf",&a);
scanf("%lf",&b);
printf("TOTAL = R$ %0.2lf\n",(a+(b*0.15)));
return 0;
}


