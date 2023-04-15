#include <stdio.h>
int main()
{
	int i=1,N;
	float X,Y,a;
	scanf ("%d",&N);
	for(i;i<=N;i++)
	{
	 scanf("%f %f",&X,&Y);
	 a=X/Y;	
	if (Y==0)
	printf("divisao impossivel\n");	
	else if (X==0)
	printf("0.0\n");	
	else
	printf("%0.1f\n",a);
	}
	return 0;

}
