#include<stdio.h>
int main()

{

int N,b,c;

scanf("%d",&N);
b=N/(60*60);

c=((N-(60*60)*b)/60);

printf("%d:%d:%d\n",b,c,(N-(b*60*60+c*60)));
return 0;
}

