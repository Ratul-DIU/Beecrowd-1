#include<stdio.h>
//#include<math.h>
int main()

{

int a,b,c,d;
scanf("%d%d%d",&a,&b,&c);
//d=0.5*(a+b+abs(a-b));
if(a>b||a>c)
{
	printf("%d eh o maior\n",a);
}
/*if(b>a||b>c)
{
	printf("%d eh o maior\n",b);
}*/
else{

printf("%d eh o maior\n",c);
}
return 0;
}



