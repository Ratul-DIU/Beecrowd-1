#include<stdio.h>
int main()

{

double A,B,C;
scanf("%lf",&A);
scanf("%lf",&B);
scanf("%lf",&C);
printf("TRIANGULO: %0.3lf\n",(0.5*A*B));
printf("CIRCULO: %0.3lf\n",(3.14159*C*C));
printf("TRAPEZIO: %0.3lf\n",0.5*(A+B)*C);
printf("QUADRADO: %0.3lf\n",(B*B));
printf("RETANGULO: %0.3lf\n",(A*B));
return 0;
}


