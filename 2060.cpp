	#include <stdio.h>
	int main()
	{
		int x,y,a,sum2=0,sum3=0,sum4=0,sum5=0;
		scanf ("%d",&x);
		for(y=1;y<=x;y++)
		{
			scanf("%d",&a);
			if(a%2==0)
			{
				sum2=sum2+1;
			}
			if(a%3==0)
			{
				sum3=sum3+1;
			}
			if(a%4==0)
			{
				sum4=sum4+1;
			}
			if(a%5==0)
			{
				sum5=sum5+1;
			}
			
		}
		printf("%d Multiplo(s) de 2\n",sum2);
		printf("%d Multiplo(s) de 3\n",sum3);
		printf("%d Multiplo(s) de 4\n",sum4);
		printf("%d Multiplo(s) de 5\n",sum5);
		return 0;
	}
