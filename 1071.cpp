#include <stdio.h>
int main()
{
	int x,y;
	int max,min,sum=0;
	scanf ("%d %d",&x,&y);
	if(x>y){
	max=x;
	min=y;}
	else if(y>x)
	{
	max=y;
	min=x;    }
     
	for(min=min+1;min<max;min++)
	{
		if(min%2!=0)
		sum=sum+min;
	 
	}
	printf("%d\n",sum);	
	return 0;
}
