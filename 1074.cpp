#include <stdio.h>
int main()
{
	int i=0,n,a;
	scanf ("%d",&n);
	for(i;i<n;i++)
	{
	 scanf("%d",&a);	
	if (a==0)
	printf("NULL\n");	
	else if (a>0&&a%2==0)
	printf("EVEN POSITIVE\n");
	else if (a<0&&a%2==0)
	printf("EVEN NEGATIVE\n");	
	else if (a>0&&a%2!=0)
	printf("ODD POSITIVE\n");
	else if (a<0&&a%2!=0)
	printf("ODD NEGATIVE\n");
	
}
	return 0;

}
