#include<stdio.h>
int main()

{

int a,b,c;

scanf("%d",&a);
b=a/365;
printf("%d ano(s)\n",b);
c=((a-(365*b))/30);
printf("%d mes(es)\n",c);
printf("%d dia(s)\n",(a-(365*b)-30*c));
return 0;
}


