#include<stdio.h>
int main()

{

double N,h;
int b,c,d,e,f,g,i,j,k,l,m,n;


scanf("%lf",&N);


b=N/(100);
c=((N-(100)*b)/50);
d=(N-((100*b)+(c*50)))/20;
e=(N-((100*b)+(c*50)+(d*20)))/10;
f=(N-((100*b)+(c*50)+(d*20)+(e*10)))/5;
g=(N-((100*b)+(c*50)+(d*20)+(e*10)+(f*5)))/2;
h=(N-((100*b)+(c*50)+(d*20)+(e*10)+(f*5)));


printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n",b);
printf("%d nota(s) de R$ 50.00\n",c);
printf("%d nota(s) de R$ 20.00\n",d);
printf("%d nota(s) de R$ 10.00\n",e);
printf("%d nota(s) de R$ 5.00\n",f);
printf("%d nota(s) de R$ 2.00\n",g);


if(h==N)
{

printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n",0);
printf("%d moeda(s) de R$ 0.50\n",0);
printf("%d moeda(s) de R$ 0.25\n",0);
printf("%d moeda(s) de R$ 0.10\n",0);
printf("%d moeda(s) de R$ 0.05\n",0);
printf("%d moeda(s) de R$ 0.01\n",0);
}


else{
	i=h/1;
j=((h-(i*1))/0.5);
k=((h-((i*1)+(0.5*j)))/0.25);
l=(h-((i*1)+(j*0.5)+(k*0.25)))/0.10;
m=(h-((i*1)+(j*0.5)+(k*0.25)+(l*0.10)))/0.05;
n=(h-((i*1)+(j*0.5)+(k*0.25)+(l*0.10)+(m*0.05)))/0.01;
printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n",i);
printf("%d moeda(s) de R$ 0.50\n",j);
printf("%d moeda(s) de R$ 0.25\n",k);
printf("%d moeda(s) de R$ 0.10\n",l);
printf("%d moeda(s) de R$ 0.05\n",m);
printf("%d moeda(s) de R$ 0.01\n",n);
}


return 0;
}

