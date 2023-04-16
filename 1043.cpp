#include <stdio.h>
int main()
{
	float A,B,C,p,a;
	
	scanf("%f%f%f",&A,&B,&C) ;
	
	if(A < B + C && B < A + C && C < A + B)
	{
		p=A+B+C;
	 printf("Perimetro = %0.1f\n",p);	
	}
	
	else{
	  a=((A+B)/2)*C;
	 printf("Area = %0.1f\n",a);	
	}

	return 0;
}
